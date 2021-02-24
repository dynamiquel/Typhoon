// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::Activate(float AdditionalVelocity, float AdditionalRange, AActor* ToTrack)
{
	ActorToTrack = ToTrack;
	
	if (!DisableInitialVelocity)
		ProjectileMesh->SetPhysicsLinearVelocity(GetActorForwardVector() * (Velocity + AdditionalVelocity));

	FTimerHandle LifetimeHandle;
	GetWorld()->GetTimerManager().SetTimer(LifetimeHandle, this, &AProjectile::OnLifetimeExceeded, Lifetime + AdditionalRange);

	OnActivate();
}

