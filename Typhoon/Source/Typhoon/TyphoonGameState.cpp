// © 2020 Liam Hall: https://github.com/dynamiquel


#include "TyphoonGameState.h"

#include "GeneratedCodeHelpers.h"
#include "TyphoonGameMode.h"

void ATyphoonGameState::SetMatchInProgressState(const FName NewState)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		UE_LOG(LogGameState, Log, TEXT("Match In Progress State Changed from %s to %s"), *MatchInProgressState.ToString(), *NewState.ToString());

		MatchInProgressState = NewState;

		// Call the onrep to make sure the callbacks happen
		OnRep_MatchInProgressState();
	}
}

void ATyphoonGameState::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();

	if (GetLocalRole() == ROLE_Authority)
		BeginTime = FDateTime::UtcNow();
}

void ATyphoonGameState::ReceivedGameModeClass()
{
	Super::ReceivedGameModeClass();

	if (GetLocalRole() == ROLE_Authority)
	{
		ATyphoonGameMode* GameMode = Cast<ATyphoonGameMode>(AuthorityGameMode);

		if (!GameMode)
			return;
		
		PrepPhaseDuration = GameMode->GetPrepPhaseDuration();
		EndStage = GameMode->GetWinStage();
	}
}

void ATyphoonGameState::HandleCountdownStarted()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		ATyphoonGameMode* GameMode = Cast<ATyphoonGameMode>(AuthorityGameMode);

		if (!GameMode)
			return;

		const float CountdownTimeRemaining = GameMode->GetCountdownRemaining();

		CountdownEndTime = FDateTime::UtcNow() + FTimespan::FromSeconds(CountdownTimeRemaining);
	}
	
	BP_OnCountdownStarted();
}

void ATyphoonGameState::HandlePrepPhaseStarted()
{
	if (GetLocalRole() == ROLE_Authority)
		GameStartTime = FDateTime::UtcNow();

	BP_OnPrepPhaseStarted();
}

void ATyphoonGameState::HandleGameStarted()
{
	if (GetLocalRole() == ROLE_Authority)
		if (GameStartTime == 0)
			GameStartTime = FDateTime::UtcNow();

	BP_OnGameStarted();
}

void ATyphoonGameState::HandleGameOver()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		ATyphoonGameMode* GameMode = Cast<ATyphoonGameMode>(AuthorityGameMode);
		if (!GameMode)
			return;

		GameMode->HandleGameOver(GameWon);
	}
}

void ATyphoonGameState::OnRep_MatchInProgressState()
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

void ATyphoonGameState::CompleteStage()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		ATyphoonGameMode* GameMode = Cast<ATyphoonGameMode>(AuthorityGameMode);
		if (!GameMode)
			return;

		GameMode->HandleCompleteStage(CurrentStage, GameWon);
		OnStageComplete.Broadcast(CurrentStage);

		if (GameWon)
			GameMode->HandleGameOver(GameWon);
	}
}

void ATyphoonGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME( ATyphoonGameState, MatchInProgressState );
	DOREPLIFETIME( ATyphoonGameState, BeginTime );
	DOREPLIFETIME( ATyphoonGameState, GameStartTime );
	DOREPLIFETIME( ATyphoonGameState, CountdownEndTime );
	DOREPLIFETIME( ATyphoonGameState, PrepPhaseDuration );
	DOREPLIFETIME( ATyphoonGameState, CurrentStage );
	DOREPLIFETIME( ATyphoonGameState, EndStage );
	DOREPLIFETIME( ATyphoonGameState, GameWon );
}
