// Copyright Epic Games, Inc. All Rights Reserved.

#include "Trd_assGameMode.h"
#include "Trd_assCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATrd_assGameMode::ATrd_assGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
