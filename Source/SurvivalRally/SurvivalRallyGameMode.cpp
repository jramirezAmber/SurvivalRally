// Copyright Epic Games, Inc. All Rights Reserved.

#include "SurvivalRallyGameMode.h"
#include "SurvivalRallyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASurvivalRallyGameMode::ASurvivalRallyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
