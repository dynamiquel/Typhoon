// © 2020 Liam Hall: https://github.com/dynamiquel


#include "TyphoonPlayerController.h"
#include "TyphoonGameMode.h"
#include "TyphoonGameState.h"

void ATyphoonPlayerController::HandleBeginPlayAfterCountdown_Implementation()
{
	if (DisableInputDuringInitialCountdown)
	{
		APawn* ControlledPawn = GetPawn();
		
		if (ControlledPawn)
			ControlledPawn->EnableInput(this);
	}
	
	OnBeginPlayAfterCountdown();
}

void ATyphoonPlayerController::HandleGameOver_Implementation()
{
	OnGameOver();
}

void ATyphoonPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (DisableInputDuringInitialCountdown)
		DisablePawnInput();
}

void ATyphoonPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (DisableInputDuringInitialCountdown)
		DisablePawnInput();
}

void ATyphoonPlayerController::DisablePawnInput()
{
	ATyphoonGameState* GameState = GetWorld()->GetGameState<ATyphoonGameState>();

	if (GameState)
	{
		const FName InProgressState = GameState->GetMatchInProgressState();

		// Only disable input if the game is still in the countdown state.
		if (InProgressState == MatchInProgressState::None || InProgressState == MatchInProgressState::Countdown)
			if (K2_GetPawn())
				K2_GetPawn()->DisableInput(this);
	}
}
