// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"

#include "Kismet/KismetMathLibrary.h"

// Sets default values
ATurret::ATurret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();

	CurrentMagSize = MagazineSize;
	InitialRotator = GetActorRotation();

	if (bPitch)
	{
		AngleRange.X += InitialRotator.Pitch;
		AngleRange.Y += InitialRotator.Pitch;
	}
	else
	{
		AngleRange.X += InitialRotator.Yaw;
		AngleRange.Y += InitialRotator.Yaw;
	}

	//GetWorld()->GetTimerManager().SetTimer(AITickHandle, this, &ATurret::AITick, AIUpdateInterval, true);
}

// Called every frame
void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AITick(DeltaTime);
}

void ATurret::UpdateRotation(float DeltaTime)
{
	if (GetWorld()->GetTimerManager().IsTimerActive(RotationSwitchHandle))
		return;

	FRotator NewRotation = GetActorRotation();

	// Auto rotation
	if (!CurrentTarget || !bTargetPlayer)
	{
		float RotationToAdd = RotationSpeed * DeltaTime;
		if (!bPositiveRotationSign)
			RotationToAdd *= -1.f;
	
		if (bPitch)
			NewRotation.Pitch += RotationToAdd;
		else
			NewRotation.Yaw += RotationToAdd;

		if (!bIgnoreEverythingAndJustDoCircles)
		{
			if (bPitch)
				NewRotation.Pitch = FMath::ClampAngle(NewRotation.Pitch, AngleRange.X, AngleRange.Y);
			else
				NewRotation.Yaw = FMath::ClampAngle(NewRotation.Yaw, AngleRange.X, AngleRange.Y);

			if (NewRotation.Yaw <= AngleRange.X || NewRotation.Yaw >= AngleRange.Y)
			{
				bPositiveRotationSign = !bPositiveRotationSign;
				GetWorld()->GetTimerManager().SetTimer(RotationSwitchHandle, RotationSwitchDelay, false);
			}
		}
	}
	else
	{
		// Target rotation
		FRotator Rotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), CurrentTarget->GetActorLocation());

		if (bPitch)
		{
			NewRotation.Pitch = Rotation.Pitch;
		}
		else
		{
			NewRotation.Yaw = Rotation.Yaw;
		}
	}
	
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("Rot: %s"), *NewRotation.ToString()));
	SetActorRotation(NewRotation);
}

void ATurret::Fire()
{
	CurrentMagSize--;

	if (BulletActor && BulletSpawnPoint)
	{
		GetWorld()->GetTimerManager().SetTimer(FireRateHandle, FireRate, false);

		const FVector SpawnLocation = BulletSpawnPoint->GetComponentLocation();
		const FRotator SpawnRotation = BulletSpawnPoint->GetComponentRotation();

		AProjectile* TempBullet = GetWorld()->SpawnActor<AProjectile>(BulletActor, SpawnLocation, SpawnRotation);
		TempBullet->Activate(BulletVelocity, BulletMaxRange, CurrentTarget);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, TEXT("Turret: BulletActor or BulletSpawnPoint not set"));
		return;
	}

	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, TEXT("Fired"));
	OnFire();
}

void ATurret::AITick(float DeltaTime)
{
	// Figures out the target through Blueprints since C++ was being mean.
	UpdateTarget();
	UpdateRotation(DeltaTime);

	// If reloading...
	if (GetWorld()->GetTimerManager().IsTimerActive(ReloadHandle))
		return;
	
	if (CurrentMagSize < 1 && MagazineSize > 0)
		StartReload();

	if (bOnlyFireOnTargetLock)
	{
		if (CurrentTarget && CanFire())
			Fire();
	}
	else
	{
		if (CanFire())
			Fire();
	}
}

void ATurret::StartReload()
{
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, TEXT("Reloading"));
	GetWorld()->GetTimerManager().SetTimer(ReloadHandle, this, &ATurret::FinishReload, ReloadSpeed);
}

void ATurret::FinishReload()
{
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, TEXT("Reloaded"));
	CurrentMagSize = MagazineSize;
}

bool ATurret::CanFire()
{
	if (CurrentMagSize < 1)
		return false;
	
	if (GetWorld()->GetTimerManager().IsTimerActive(ReloadHandle))
		return false;

	if (GetWorld()->GetTimerManager().IsTimerActive(FireRateHandle))
		return false;

	return true;
}
