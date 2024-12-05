// Copyright Epic Games, Inc. All Rights Reserved.

#include "LegacyHunterGameMode.h"
#include "LegacyHunterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALegacyHunterGameMode::ALegacyHunterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
