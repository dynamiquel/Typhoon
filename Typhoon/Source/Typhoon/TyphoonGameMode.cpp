// Copyright Epic Games, Inc. All Rights Reserved.

#include "TyphoonGameMode.h"
#include "TyphoonCharacter.h"
#include "TyphoonGameState.h"
#include "TyphoonPlayerController.h"
#include "GameFramework/PlayerState.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

namespace MatchInProgressState
{
	const FName None = FName(TEXT("None"));
	const FName Countdown = FName(TEXT("Countdown"));		    // All actors have spawned but players can't move.
	const FName PrepPhase = FName(TEXT("PrepPhase"));			// Just a bonus timed state. Doesn't do anything on its own.
	const FName Normal = FName(TEXT("Normal"));		            // Where normal gameplay occurs.
	const FName GameEnd = FName(TEXT("GameEnd"));				// Gameplay ended.
}

ATyphoonGameMode::ATyphoonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

float ATyphoonGameMode::GetCountdownRemaining() const
{
	return GetWorld()->GetTimerManager().GetTimerRemaining(CountdownTimer);
}

void ATyphoonGameMode::HandleManDied(ATyphoonPlayerState* HisTings)
{
	UE_LOG(LogGameMode, Display, TEXT("Player %s died."), *HisTings->GetPlayerName());

	HisTings->SetLives(HisTings->GetLives() - 1);

	AController* Controller = HisTings->GetPawn()->GetController();
	
	FTransform SpawnTransform;
	if (HisTings->GetSpawnPoint())
		SpawnTransform = HisTings->GetSpawnPoint()->GetTransform();
	else
		SpawnTransform = Cast<ATyphoonCharacter>(HisTings->GetPawn())->GetSpawnLocation();

	HisTings->GetPawn()->Destroy();
	HisTings->HandlePlayerDied();
	
	if (HisTings->GetLives() >= 0)
	{
		// Respawn delay.
		FTimerHandle TimerHandle;
		FTimerDelegate TimerDelegate = FTimerDelegate::CreateUObject(this, &ATyphoonGameMode::HandlePlayerRespawnEnded,
		                                                             Controller, SpawnTransform);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, RespawnDelay, false);
	}
	else
		HandleMansOuttaLivesInnit(HisTings);
}

void ATyphoonGameMode::HandleMansOuttaLivesInnit(ATyphoonPlayerState* MaTings)
{
	UE_LOG(LogGameMode, Display, TEXT("Player %s has lost."), *MaTings->GetPlayerName());

	MaTings->SetTimeFinished(FDateTime::UtcNow());

	const int32 PlayersRemaining = GetPlayersRemaining();

	UE_LOG(LogGameMode, Display, TEXT("Players remaining: %d"), PlayersRemaining);

	if (PlayersRemaining == 0)
	{
		ATyphoonGameState* FullGameState = GetGameState<ATyphoonGameState>();
		if (FullGameState)
			FullGameState->SetMatchInProgressState(MatchInProgressState::GameEnd);
	}
}

int32 ATyphoonGameMode::GetPlayersRemaining() const
{
	// Loops through all the players to check if they have died.
	int32 PlayersRemaining = 0;
	for (APlayerState* Player : GameState->PlayerArray)
	{
		ATyphoonPlayerState* FullPlayerState = Cast<ATyphoonPlayerState>(Player);

		if (FullPlayerState->GetTimeFinished() <= FDateTime::MinValue())
			PlayersRemaining++;
	}

	return PlayersRemaining;
}

void ATyphoonGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	InitOptions(Options);
}

bool ATyphoonGameMode::ReadyToStartMatch_Implementation()
{
	if (bDelayedStart)
		return false;
	
	if (GetMatchState() == MatchState::WaitingToStart)
	{
		if (NumPlayers + NumBots >= GetMinPlayers())
			return true;
	}

	return false;
}

void ATyphoonGameMode::HandleMatchIsWaitingToStart()
{
	Super::HandleMatchIsWaitingToStart();

	BeginTime = FDateTime::UtcNow();
}

void ATyphoonGameMode::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();

	SetMatchInProgressState(MatchInProgressState::Countdown);
}

void ATyphoonGameMode::HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer)
{
	Super::HandleStartingNewPlayer_Implementation(NewPlayer);

	ATyphoonPlayerState* PlayerState = Cast<ATyphoonPlayerState>(NewPlayer->PlayerState);
	if (PlayerState)
	{
		PlayerState->SetLives(StartLives);
	}

	// Check to see if we have enough players to start the match.
	if (MatchState == MatchState::WaitingToStart && ReadyToStartMatch())
		StartMatch();

	UE_LOG(LogGameMode, Display, TEXT("Players Ready: %d, Players Needed: %d"), NumPlayers + NumBots, MinimumPlayersToStart);
}

void ATyphoonGameMode::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId,
	FString& ErrorMessage)
{
	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);

	// Do something like announcing who is connecting, as well as their IP.
}

APlayerController* ATyphoonGameMode::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal,
	const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	APlayerController* PlayerController = Super::Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);

	ProcessLoginOptions(PlayerController, Options);

	return PlayerController;
}

void ATyphoonGameMode::ProcessLoginOptions(AController* Controller, const FString Options)
{
	// Change player's name to a custom set name.
	FString DisplayName = UGameplayStatics::ParseOption(Options, TEXT("DisplayName"));

	if (DisplayName.IsEmpty())
		DisplayName = DefaultPlayerName.ToString();

	ChangeName(Controller, DisplayName, false);
}

void ATyphoonGameMode::InitOptions(const FString Options)
{
	// Change the game mode variables depending on options.
	// This can include max score, time limit, etc.
}

void ATyphoonGameMode::SetMatchInProgressState(const FName NewState)
{
	if (MatchInProgressState == NewState)
		return;

	UE_LOG(LogGameMode, Display, TEXT("Match In Progress State Changed from %s to %s"), *MatchInProgressState.ToString(), *NewState.ToString());

	MatchInProgressState = NewState;

	OnMatchInProgressStateSet();

	ATyphoonGameState* FullGameState = GetGameState<ATyphoonGameState>();
	if (FullGameState)
		FullGameState->SetMatchInProgressState(NewState);
}

void ATyphoonGameMode::OnMatchInProgressStateSet()
{
	if (GetMatchInProgressState() == MatchInProgressState::Countdown)
		HandleCountdownStarted();
	else if (GetMatchInProgressState() == MatchInProgressState::PrepPhase)
		HandlePrepPhaseStarted();
	else if (GetMatchInProgressState() == MatchInProgressState::Normal)
		HandleGameStarted();
	else if (GetMatchInProgressState() == MatchInProgressState::GameEnd)
		HandleGameOver();
}

void ATyphoonGameMode::HandleCountdownStarted()
{
	GetWorld()->GetTimerManager().SetTimer(CountdownTimer, this, &ATyphoonGameMode::OnCountdownEnded, CountdownDuration);
}

void ATyphoonGameMode::HandlePrepPhaseStarted()
{
	GameStartTime = FDateTime::UtcNow();

	GetWorld()->GetTimerManager().SetTimer(PrepPhaseTimer, this, &ATyphoonGameMode::OnPrepPhaseEnded, PrepPhaseDuration);
}

void ATyphoonGameMode::HandleGameStarted()
{
	// If the Start Time hasn't been initialised (maybe coz Prep Phase is disabled), set it.
	if (GameStartTime == 0)
		GameStartTime = FDateTime::UtcNow();
}

void ATyphoonGameMode::OnCountdownEnded()
{
	if (GameState)
	{
		TArray<APlayerState*> PlayerStates = GameState->PlayerArray;

		for (APlayerState* PlayerState : PlayerStates)
		{
			ATyphoonPlayerController* PlayerController = Cast<ATyphoonPlayerController>(PlayerState->GetPawn()->GetController());
			PlayerController->HandleBeginPlayAfterCountdown();
		}
	}
	
	SetMatchInProgressState(MatchInProgressState::PrepPhase);
}

void ATyphoonGameMode::OnPrepPhaseEnded()
{
	SetMatchInProgressState(MatchInProgressState::Normal);
}

void ATyphoonGameMode::HandleGameOver()
{
	
}

void ATyphoonGameMode::HandlePlayerRespawnEnded(AController* Controller, FTransform SpawnTransform)
{
	APawn* Pawn = Cast<APawn>(GetWorld()->SpawnActor(DefaultPawnClass, &SpawnTransform));
	Controller->Possess(Pawn);
}
