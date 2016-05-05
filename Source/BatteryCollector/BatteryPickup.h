// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Pickup.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ABatteryPickup : public APickup
{
	GENERATED_BODY()

public:

	//sets defaults values
	ABatteryPickup();
	
	/** Override the WasCollected function - use implementation because it's its a blueprint Native Event */
	void WasCollected_Implementation() override;

	/** Public method to acces battery power */
	float GetPower();

protected:

	/** Set the amount of power the battery gives to the character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float BatteryPower;

};
