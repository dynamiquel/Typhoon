// Fill out your copyright notice in the Description page of Project Settings.


#include "LaunchPad.h"
#include "Components/SphereComponent.h"
#include "TyphoonCharacter.h"
#include "Components/BoxComponent.h"

ALaunchPad::ALaunchPad()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionSphere"));
	CollisionBox->SetBoxExtent(FVector(50.f, 50.f, 50.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	RootComponent = CollisionBox;

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ALaunchPad::OnOverLapBegin);
}

void ALaunchPad::BeginPlay()
{
	Super::BeginPlay();
}

void ALaunchPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALaunchPad::OnOverLapBegin(UPrimitiveComponent* OverLappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(ATyphoonCharacter::StaticClass()))
	{
		ATyphoonCharacter* Character = Cast<ATyphoonCharacter>(OtherActor);
		Character->LaunchCharacter(this->LaunchVelocity,false,false);
	}
}
