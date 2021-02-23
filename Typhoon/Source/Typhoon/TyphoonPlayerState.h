// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/PlayerStart.h"
#include "GameFramework/PlayerState.h"
#include "TyphoonPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class TYPHOON_API ATyphoonPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category=PlayerState)
	int32 GetLives() const { return Lives; }

	UFUNCTION(BlueprintCallable, Category=PlayerState)
	void SetLives(const int32 NewLives);

	UFUNCTION(BlueprintCallable, Category=PlayerState)
	void KillPlayer();

	UFUNCTION(BlueprintCallable, Category=PlayerState)
	FDateTime GetTimeFinished() const { return TimeFinished; }

	UFUNCTION(BlueprintCallable, Category=PlayerState)
    void SetTimeFinished(FDateTime DateTime) { TimeFinished = DateTime; }

	UFUNCTION(BlueprintCallable, Category=PlayerState)
	AActor* GetSpawnPoint() const { return SpawnPoint; }

	UFUNCTION(BlueprintCallable, Category=PlayerState)
    void SetSpawnPoint(AActor* NewSpawnPoint) { SpawnPoint = NewSpawnPoint; }

	void HandlePlayerDied();

protected:
	virtual void OnRep_Score() override;

	UFUNCTION(BlueprintImplementableEvent, Category=PlayerState)
	void OnPlayerDied();
	
private:
	// Number of lives the player has.
	UPROPERTY(Replicated, VisibleAnywhere, Category=PlayerState, meta = (AllowPrivateAccess = true))
	int32 Lives;

	// Number of times the player has died.
	UPROPERTY(Replicated, VisibleAnywhere, Category=PlayerState, meta = (AllowPrivateAccess = true))
	int32 Deaths;

	// Time the player ran out of lives and died.
	UPROPERTY(Replicated, VisibleAnywhere, Category=PlayerState, meta = (AllowPrivateAccess = true))
	FDateTime TimeFinished;

	// Where to spawn the player when they respawn.
	UPROPERTY(Replicated, VisibleAnywhere, Category=PlayerState, meta = (AllowPrivateAccess = true))
	AActor* SpawnPoint;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
