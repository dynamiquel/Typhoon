// © 2020 Liam Hall: https://github.com/dynamiquel

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "TyphoonGameState.generated.h"

// A bit more than the standard GameState.
UCLASS()
class TYPHOON_API ATyphoonGameState : public AGameState
{
	GENERATED_BODY()

public:
	FName GetMatchInProgressState() const { return MatchInProgressState; }
	void SetMatchInProgressState(FName NewState);
	
	UFUNCTION()
	virtual void OnRep_MatchInProgressState();

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStageCompleteSignature,
        const int32, NewStageValue);

	UPROPERTY(BlueprintAssignable, Category="Custom")
	FOnStageCompleteSignature OnStageComplete;

	UFUNCTION(BlueprintCallable)
	void CompleteStage();

protected:
	// Current game state.
	UPROPERTY(ReplicatedUsing=OnRep_MatchInProgressState, BlueprintReadOnly, VisibleInstanceOnly, Category = GameState)
	FName MatchInProgressState;

	// Time when the match 'started' (MatchState == MatchState::InProgress).
	UPROPERTY(Replicated, BlueprintReadOnly, VisibleInstanceOnly, Category = GameState)
	FDateTime BeginTime = 0;

	// Time when the game 'started' (MatchInProgressState == MatchInProgressState::PrepPhase).
	UPROPERTY(Replicated, BlueprintReadOnly, VisibleInstanceOnly, Category = GameState)
	FDateTime GameStartTime = 0;

	/**
	 * @brief Retrieved from TyphoonGameMode.
	 * \n Since it may be a few ms off from the GameMode, it should only really be used for aesthetics,
	 * such as a timer displaying how long until countdown ends.
	 */
	UPROPERTY(Replicated, BlueprintReadOnly, VisibleInstanceOnly, Category = GameState)
	FDateTime CountdownEndTime = 0;

	// Retrieved from TyphoonGameMode.
	// Should only be used for aesthetics, such as a timer displaying how long until prep phase ends.
	UPROPERTY(Replicated, BlueprintReadOnly, VisibleInstanceOnly, Category = GameState)
	float PrepPhaseDuration;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = GameState)
	int32 CurrentStage;
	
	virtual void HandleMatchHasStarted() override;
	virtual void ReceivedGameModeClass() override;

	void HandleCountdownStarted();
	void HandlePrepPhaseStarted();
	void HandleGameStarted();

	// Called when the Countdown state starts.
	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnCountdownStarted();

	// Called when the Prep Phase state starts.
	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnPrepPhaseStarted();

	// Called when the Normal state starts.
	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnGameStarted();
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
