// © 2020 Liam Hall: https://github.com/dynamiquel

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TyphoonPlayerController.generated.h"

// A bit more than a standard PlayerController.
UCLASS()
class TYPHOON_API ATyphoonPlayerController : public APlayerController
{
	GENERATED_BODY()

	public:
	UFUNCTION(Reliable, Client)
    void HandleBeginPlayAfterCountdown();
	UFUNCTION(Reliable, Client)
	void HandleGameOver();

	protected:
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	
	UFUNCTION(BlueprintImplementableEvent)
    void OnBeginPlayAfterCountdown();

	UFUNCTION(BlueprintImplementableEvent)
	void OnGameOver();

	void DisablePawnInput();

	private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	bool DisableInputDuringInitialCountdown = true;
};
