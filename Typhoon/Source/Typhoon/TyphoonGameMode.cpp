// Copyright Epic Games, Inc. All Rights Reserved.

#include "TyphoonGameMode.h"
#include "TyphoonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATyphoonGameMode::ATyphoonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
