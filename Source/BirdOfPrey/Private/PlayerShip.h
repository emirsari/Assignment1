// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "Math/Vector.h"
#include "GameFramework/PlayerController.h"
#include "Components/PointLightComponent.h"
#include "Components/AudioComponent.h"
#include "BasePlayerController.h"
#include "PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class APlayerShip : public ABaseShip
{
	GENERATED_BODY()

public:

	APlayerShip();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	UPointLightComponent* PointLight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	UAudioComponent* HoverAudio;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	ABasePlayerController* BasePlayerController;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float InvulnerabilityTime;

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	void GetShipConstantVelocity(FVector& Direction, float& Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	float GetShipAxisAdjustment(float Dist, float Max);
	
	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	FVector CalcOutofBoundsAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfo(APlayerController* Player);

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool ShouldSpawnAIController();
	// IMPORTANT: function can't be pure without return value, but in BP it is. Probably this function 
	// needs to return boolean after its naming, adding it additionally to prevent errors.

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool HasDiedRecently();

	virtual void AgentTakeDamage(float Damage, float& ActualDamage) override; // override to use as event 
	// IMPORTANT: renamed function TakeDamage because it conflicts with a function of the same name in Pawn class

	virtual void Died(AController* Killer) override; // override to use as event 



	
};
