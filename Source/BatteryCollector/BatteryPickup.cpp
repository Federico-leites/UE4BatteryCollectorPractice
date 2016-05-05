// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "BatteryPickup.h"

/** Sets default values*/
ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);

	// Set the default power
	BatteryPower = 150.f;
}

void ABatteryPickup::WasCollected_Implementation()
{
	//Use the base pickup behavior
	Super::WasCollected_Implementation();
	//Destroy the battery
	Destroy();
}

// Report the battery power level
float ABatteryPickup::GetPower()
{
	return BatteryPower;
}
