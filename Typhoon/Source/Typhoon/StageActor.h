// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StageActor.generated.h"

UCLASS()
class TYPHOON_API AStageActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStageActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Do the typical BeginPlay stuff here instead. C++.
	virtual void StagePlay();
	virtual void StageHide();
	virtual void StageChanged(int32 NewStage);
	virtual void StageDestroy();

	// Do BeginPlay stuff here instead. BP.
	UFUNCTION(BlueprintImplementableEvent)
	void OnStagePlay();

	// Do stuff like disabling certain components through BP here.
	UFUNCTION(BlueprintImplementableEvent)
    void OnStageHide();
	
	UFUNCTION(BlueprintImplementableEvent)
    void OnStageChanged(int32 NewStage);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Stage which the actor activates.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	int32 StageToActivate = 0;

	// Stage which the actor gets destroyed. -1 = no destroy.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	int32 StageToDestroy = -1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	bool bOnlySpawnOnExactStage = false;

	bool bActivated = false;

	UFUNCTION()
	void CheckNewStage(int32 NewStage);
};