// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StageActor.h"
#include "LaunchPad.generated.h"

/**
 * 
 */
UCLASS()
class TYPHOON_API ALaunchPad : public AStageActor
{
	GENERATED_BODY()
	
	public:	
	// Sets default values for this actor's properties
	ALaunchPad();

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* CollisionBox;

	UFUNCTION()
        void OnOverLapBegin(UPrimitiveComponent* OverLappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult);

	private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	FVector LaunchVelocity;
	
};
