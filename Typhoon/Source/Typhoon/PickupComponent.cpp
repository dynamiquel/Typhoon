// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupComponent.h"

#include "Components/ShapeComponent.h"

// Sets default values for this component's properties
UPickupComponent::UPickupComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPickupComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	if (Collider)
		Collider->OnComponentBeginOverlap.AddDynamic(this, &UPickupComponent::OnOverlap);
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.5f, FColor::Orange,
                                         FString::Printf(
                                             TEXT("%s: Pickup collider not set up."), *GetOwner()->GetName()));
	}
}

void UPickupComponent::OnOverlap(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (bDestroyPending)
		return;

	if (OtherActor->IsA(APawn::StaticClass()))
	{
		APawn* Pawn = Cast<APawn>(OtherActor);

		if (GetIsAcceptableType(Pawn))
			Pickup(Pawn);
	}
}

void UPickupComponent::Pickup(APawn* Pawn)
{
	// Calls the BP method.
	OnPickup.Broadcast(Pawn);

	if (bDestroyOnPickup)
	{
		bDestroyPending = true;
		GetOwner()->Destroy();
	}
}

// Called every frame
void UPickupComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UPickupComponent::GetIsAcceptableType(APawn* PawnToCheck)
{
	for (const TSubclassOf<AActor> AllowedPawn : ObjectsThatCanPickup)
		if (PawnToCheck->IsA(AllowedPawn))
			return true;

	return false;
}

