// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheWorldGameMode.h"
#include "TheWorldCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheWorldGameMode::ATheWorldGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/01_Blueprints/Characters/BP_Human"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
