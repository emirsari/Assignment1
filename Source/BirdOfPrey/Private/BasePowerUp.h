// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "Components/StaticMeshComponent.h"
#include "PlayerShip.h"
#include "BasePowerUp.generated.h"

UCLASS()
class ABasePowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePowerUp();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UStaticMeshComponent* Mesh;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundCue* PickUpSoundCue;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey") 
	UParticleSystem* PickUpParticleSystem;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Apply(APlayerShip* PlayerShip);
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayEffects();

};
