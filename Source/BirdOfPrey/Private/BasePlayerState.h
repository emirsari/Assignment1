// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ABasePlayerState : public APlayerState
{
	GENERATED_BODY()

public:

	ABasePlayerState();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float PlayerScore;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	int RemainingLives;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float TimeOfLastDeath;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AddScore(float Amount);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ConsumeLife();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool HasRemainingLives();
	
};
