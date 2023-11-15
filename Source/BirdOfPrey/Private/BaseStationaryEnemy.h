// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BaseStationaryEnemy.generated.h"

/**
 * 
 */
UCLASS()
class ABaseStationaryEnemy : public ABaseGameAgent
{
	GENERATED_BODY()

public:

	ABaseStationaryEnemy();

	virtual void Died(AController* Killer) override; // override to use as event
		
	
};
