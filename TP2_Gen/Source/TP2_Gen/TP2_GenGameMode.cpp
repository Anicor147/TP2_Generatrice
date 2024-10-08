// Copyright Epic Games, Inc. All Rights Reserved.

#include "TP2_GenGameMode.h"
#include "TP2_GenCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATP2_GenGameMode::ATP2_GenGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
