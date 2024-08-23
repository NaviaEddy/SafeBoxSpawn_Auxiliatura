// Copyright Epic Games, Inc. All Rights Reserved.


#include "Mesh82324GameModeBase.h"
#include "SafeBox.h"

AMesh82324GameModeBase::AMesh82324GameModeBase()
{
}

void AMesh82324GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	FVector PosX = FVector(-180.0f, -110.0f, 50);

	for (int i = 0; i <= 5; i++) {
		SafeBox = GetWorld()->SpawnActor<ASafeBox>
			(ASafeBox::StaticClass(), PosX, FRotator::ZeroRotator);
		PosX += FVector(100.0f, 0.0f, 0.0f);
	}
	

}
