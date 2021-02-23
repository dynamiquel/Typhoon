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
		ATyphoonGameState* GameState = GetWorld()->GetGameState<ATyphoonGameState>();
		if (GameState)
		{
			// Don't bother subscribing if the stage conditions have already been met.
			if (bOnlySpawnOnExactStage)
			{
				if (GameState->GetCurrentStage() == StageToActivate)
					StagePlay();
			}
			else
			{
				if (GameState->GetCurrentStage() >= StageToActivate)
					StagePlay();
			}
		
			StageHide();

			// Subscribe to be notified when the level stage changes.
			GameState->OnStageComplete.AddDynamic(this, &AStageActor::CheckNewStage);
		}
	}
	else
		StagePlay();
}

void AStageActor::StagePlay()
{
	bActivated = true;
	// Unsubscribe to prevent re-triggers.
	/*ATyphoonGameState* GameState = GetWorld()->GetGameState<ATyphoonGameState>();
	if (GameState)
		GameState->OnStageComplete.RemoveDynamic(this, &AStageActor::CheckNewStage);*/

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

void AStageActor::StageDestroy()
{
	Destroy();
}

void AStageActor::StageChanged(int32 NewStage)
{
	OnStageChanged(NewStage);
}

// Called every frame
void AStageActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStageActor::CheckNewStage(const int32 NewStage)
{	
	if (bOnlySpawnOnExactStage)
	{
		if (!bActivated && NewStage == StageToActivate)
			StagePlay();		
		else if (StageToDestroy >= 0 && NewStage == StageToDestroy)
			StageDestroy();
	}
	else
	{
		if (!bActivated && NewStage >= StageToActivate)
			StagePlay();
		else if (StageToDestroy >= 0 && NewStage >= StageToDestroy)
			StageDestroy();
	}

	OnStageChanged(NewStage);
}
