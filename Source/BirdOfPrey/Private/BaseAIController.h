// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Math/Vector.h"
#include "BaseGameAgent.h"
#include "BasePlayerController.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:

	ABaseAIController();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float RefireDelay;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	bool bShouldUpdateAim;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	ABasePlayerController* Target;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	ABaseGameAgent* ControlledAgent;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SelectTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateAim();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool ShouldStartFire();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool ShouldStopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool ShouldUpdateAim();
	
	
};
