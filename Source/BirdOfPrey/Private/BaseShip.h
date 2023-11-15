// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "BaseShip.generated.h"

/**
 * 
 */
UCLASS()
class ABaseShip : public ABaseGameAgent
{
	GENERATED_BODY()

public:

	ABaseShip();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	UFloatingPawnMovement* FloatingPawnMovement;

	virtual void ApplyAgentInfo(FSAgentInfo NewAgentInfo) override; // override to use as event
	
	
};
