// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Math/Vector.h"
#include "Math/Vector2D.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "WorldCameraActor.h"
#include "BasePlayerController.h"
#include "BasePowerUp.h"
#include "BaseGameAgent.h"
#include "BaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ABaseGameMode : public AGameMode
{
	GENERATED_BODY()

public:

	ABaseGameMode();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey", meta = (ToolTip = "Furthest the player can move away from the World Camera Actor on X/Y axes"))
	FVector2D MaxRelativePlayerOffset; 

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "BirdOfPrey")
	AWorldCameraActor* WorldCameraActor; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	UDataTable* PlayerAgentInfoTable; // instance editable

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float RespawnDelay;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float SpawnOffset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	FTimerHandle StationarySpawnTimer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	FTimerHandle ShipSpawnTimer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	TArray<TSubclassOf<ABasePowerUp>> PowerUpList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float PickUpSpawnPercent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	bool IsGameOverScreen;

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	FVector GetWorldScrollVelocity();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	void GetWorldCameraActor(AWorldCameraActor*& OtherWorldCameraActor);
	// IMPORTANT: "shadowing is not allowed" thus changed output name to OtherWorldCameraActor

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDied(ABasePlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied(ABaseGameAgent* Player, AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EndGame(bool Success);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom(TArray<TSubclassOf<ABaseGameAgent>> ClassList);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	float GetDistanceTravelled();

};
