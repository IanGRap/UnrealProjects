// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealTanks.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto controlledTank = GetControlledTank();
	if (!controlledTank) 
	{
		UE_LOG(LogTemp, Warning, TEXT("No tank assigned to tank player controller"));
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank player controller possesing %s"), *controlledTank->GetName());
	}
}

ATank* ATankPlayerController::GetControlledTank() const 
{
	return Cast<ATank>(GetPawn());
}