// Fill out your copyright notice in the Description page of Project Settings.


#include "StageActor.h"

#include "TyphoonGameState.h"

// Sets default values
AStageActor::AStageActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStageActor::BeginPlay()
{
	Super::BeginPlay();

	// Don't bother subscribing if it's supposed to start straight away.
	if (StageToActivate > 0)
	{
		StageHide();

		ATyphoonGameState* GameState = GetWorld()->GetGameState<ATyphoonGameState>();
		if (GameState)
		{
			GameState->OnStageComplete.AddDynamic(this, &AStageActor::CheckNewStage);
		}
	}
	else
		StagePlay();
}

void AStageActor::StagePlay()
{
	SetActorHiddenInGame(false);
	
	// Notify BP.
	OnStagePlay();
}

void AStageActor::StageHide()
{
	SetActorHiddenInGame(true);

	// Notify BP.
	OnStageHide();
}

// Called every frame
void AStageActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStageActor::CheckNewStage(int32 NewStage)
{
	if (bOnlySpawnOnExactStage)
	{
		if (NewStage == StageToActivate)
			StagePlay();
	}
	else
	{
		if (NewStage >= StageToActivate)
			StagePlay();
	}
}
