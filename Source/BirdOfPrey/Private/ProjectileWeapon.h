// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class AProjectileWeapon : public ABaseWeapon
{
	GENERATED_BODY()

public:

	AProjectileWeapon();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	TSubclassOf<ABaseProjectile> ProjectileType; // default = BaseProjectile

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float RefireTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	int NumShots;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float DesiredZ;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	ABaseProjectile* SpawnProjectile(FTransform SpawnTransform);

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	FTransform GetProjectileSpawnTransform(int ShotNumber);

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool ReadyToFire();

	
	virtual bool IsFiring() override; 
	virtual void StartFire() override; 
	virtual void StopFire() override; 

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void FireProjectile();
	void FireProjectile_Implementation();

public:

	virtual void Tick(float DeltaTime) override;
	
};
