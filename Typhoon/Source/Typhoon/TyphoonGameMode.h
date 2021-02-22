// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TyphoonGameMode.generated.h"

namespace MatchInProgressState
{
	extern const FName None;
	extern const FName Countdown;		    // Actors are ticking, but the match has not yet started
	extern const FName PrepPhase;			// Normal gameplay is occurring. Specific games will have their own state machine inside this state
	extern const FName Normal;		        // Match has ended so we aren't accepting new players, but actors are still ticking
}

UCLASS(minimalapi)
class ATyphoonGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ATyphoonGameMode();

	float GetPrepPhaseDuration() const { return PrepPhaseDuration; }
	float GetCountdownRemaining() const;

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

private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	int32 MinimumPlayersToStart = 1;

	// Duration of the Countdown phase.
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	float CountdownDuration = 10.f;

	// Duration of the Preparation phase.
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	float PrepPhaseDuration = 15.f;

	// Current game phase.
	FName MatchInProgressState = MatchInProgressState::None;

	// Time since EnteringMap (maybe a few ms off from GameState).
	FDateTime BeginTime = 0;

	// Time since PrepPhase started (maybe a few ms off from GameState).
	FDateTime GameStartTime = 0;

	FTimerHandle CountdownTimer;
	FTimerHandle PrepPhaseTimer;
};