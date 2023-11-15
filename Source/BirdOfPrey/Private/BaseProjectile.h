// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/Vector.h"
#include "Engine/EngineTypes.h" // for enum ECollisionChannel 
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/StaticMesh.h"
#include "BaseGameAgent.h"
#include "BaseProjectile.generated.h"

UCLASS()
class ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ABaseProjectile();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	UCapsuleComponent* Capsule;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	UStaticMesh* Mesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float ProjectileSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float Damage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	UParticleSystem* DetonationEmitter;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float GroundUnitCheckDistance;
	 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float GroundUnitCheckAngle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	ABaseGameAgent* GroundTarget; 
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float DesiredZ;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	USoundBase* ImpactSound;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InitialiseProjectile(FVector Direction, float Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void DealDamageTo(AActor* Damaging, float DamageDone);  // changed parameter 'Damage' to 'DamageDone' to prevent "shadowing is not allowed" error
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	ECollisionChannel GetInstigatorCollisionChannel();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool ShouldCheckForGroundTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToTarget();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	bool IsEnemyProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToDesiredZ();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void CleanUpAndDestroy();
	void CleanUpAndDestroy_Implementation();

};
