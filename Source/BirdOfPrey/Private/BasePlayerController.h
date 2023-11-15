// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Controller.h"
#include "BasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ABasePlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	ABasePlayerController();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	bool bDiedWhileFiring;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CalcScreenDimensions();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDeath(AController* Killer);
	
};
