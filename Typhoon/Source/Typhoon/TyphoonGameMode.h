// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "TyphoonPlayerState.h"
#include "GameFramework/GameMode.h"
#include "TyphoonGameMode.generated.h"

namespace MatchInProgressState
{
	extern const FName None;
	extern const FName Countdown;		    // All actors have spawned but players can't move.
	extern const FName PrepPhase;			// Just a bonus timed state. Doesn't do anything on its own.
	extern const FName Normal;		        // Where normal gameplay occurs.
	extern const FName GameEnd;				// Gameplay ended.
}

UCLASS(minimalapi)
class ATyphoonGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ATyphoonGameMode();

	float GetPrepPhaseDuration() const { return PrepPhaseDuration; }
	float GetCountdownRemaining() const;
	void HandleManDied(ATyphoonPlayerState* HisTings);
	void HandleMansOuttaLivesInnit(ATyphoonPlayerState* MaTings);
	int32 GetPlayersRemaining() const;
	void HandleCompleteStage(OUT int32& NewStage, OUT bool& GameWon) const;
	void HandleGameOver(const bool GameWon);
	int32 GetWinStage() const { return WinStage; }

protected:
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual bool ReadyToStartMatch_Implementation() override;
	virtual void HandleMatchIsWaitingToStart() override;
	virtual void HandleMatchHasStarted() override;
	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) override;
	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
	virtual APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
	void ProcessLoginOptions(AController* Controller, const FString Options);

	int32 GetMinPlayers() const { return MinimumPlayersToStart; }
	FName GetMatchInProgressState() const { return MatchInProgressState; }

	void InitOptions(const FString Options);
	
	void SetMatchInProgressState(FName NewState);

	void OnMatchInProgressStateSet();
	void HandleCountdownStarted();
	void HandlePrepPhaseStarted();
	void HandleGameStarted();
	
	void OnCountdownEnded();
	void OnPrepPhaseEnded();

	UFUNCTION()
	void HandlePlayerRespawnEnded(AController* Controller, FTransform SpawnTransform);

private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	int32 MinimumPlayersToStart = 1;

	// Duration of the Countdown phase.
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	float CountdownDuration = 10.f;

	// Duration of the Preparation phase.
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	float PrepPhaseDuration = 15.f;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	int32 StartLives = 3;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	float RespawnDelay = 1.5f;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	FTransform StartPoint;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	TSubclassOf<APawn> DeathSpectatorPawn;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	int32 WinStage;

	// Current game phase.
	FName MatchInProgressState = MatchInProgressState::None;

	// Time since EnteringMap (maybe a few ms off from GameState).
	FDateTime BeginTime = 0;

	// Time since PrepPhase started (maybe a few ms off from GameState).
	FDateTime GameStartTime = 0;

	FTimerHandle CountdownTimer;
	FTimerHandle PrepPhaseTimer;
};