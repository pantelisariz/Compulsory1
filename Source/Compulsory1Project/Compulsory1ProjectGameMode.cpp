// Copyright Epic Games, Inc. All Rights Reserved.

#include "Compulsory1ProjectGameMode.h"
#include "Compulsory1ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACompulsory1ProjectGameMode::ACompulsory1ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
