// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Mesh82324GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MESH82324_API AMesh82324GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMesh82324GameModeBase();

protected:
	virtual void BeginPlay() override;

private:
	class ASafeBox* SafeBox;
	
};
