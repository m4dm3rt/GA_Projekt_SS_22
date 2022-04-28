// Copyright Epic Games, Inc. All Rights Reserved.

#include "EscaflowneProjectGameMode.h"
#include "EscaflowneProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEscaflowneProjectGameMode::AEscaflowneProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
