// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "BaseWeapon.generated.h"

UCLASS()
class ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ABaseWeapon();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey") //  Category = "BirdOfPrey | Effects" --> can also create subcategories
	UParticleSystem* FireParticleEffect;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	USoundCue* FireSoundCue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	bool bRequiresAimForAI;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	bool bIsAutomatic;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayFireEffects();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	FTransform GetFireEffectSpawnTransform();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool HasFinishedFiring();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	virtual bool IsFiring();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
