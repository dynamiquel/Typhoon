// Fill out your copyright notice in the Description page of Project Settings.


#include "TyphoonPlayerState.h"

#include "GeneratedCodeHelpers.h"
#include "TyphoonGameMode.h"
#include "TyphoonGameState.h"

void ATyphoonPlayerState::SetLives(int32 NewLives)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		// Ignore if the player is already out of lives.
		if (Lives < 0)
			return;
		
		Lives = NewLives;

		GEngine->AddOnScreenDebugMessage(-1, 2.5f, FColor::Blue,
                                     FString::Printf(TEXT("%s has %d lives remaining."),
                                         *GetPlayerName(), Lives));
	}
}

void ATyphoonPlayerState::KillPlayer()
{
	// Only allows the server to execute the following logic.
	if (GetLocalRole() == ROLE_Authority)
	{
		ATyphoonGameMode* GameMode = GetWorld()->GetAuthGameMode<ATyphoonGameMode>();
		if (GameMode)
			GameMode->HandleManDied(this);
	}
}

void ATyphoonPlayerState::AddPoints(float Points)
{
	if (GetLocalRole() == ROLE_Authority)
		SetScore(GetScore() + Points);
}

void ATyphoonPlayerState::HandlePlayerDied()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		Deaths++;
	}
	
	OnPlayerDied();
}

void ATyphoonPlayerState::OnRep_Score()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		// Here, you do stuff like giving a life for reaching x amount of points.
	}
}

void ATyphoonPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME( ATyphoonPlayerState, Lives );
	DOREPLIFETIME( ATyphoonPlayerState, TimeFinished );
	DOREPLIFETIME( ATyphoonPlayerState, Deaths );
}
