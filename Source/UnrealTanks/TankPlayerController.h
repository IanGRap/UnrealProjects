// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // Must be last include

/**
 * 
 */
UCLASS()
class UNREALTANKS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	public:
		ATank* GetControlledTank() const;

		void BeginPlay() override;
};
