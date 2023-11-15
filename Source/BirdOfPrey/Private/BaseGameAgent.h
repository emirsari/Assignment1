// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Math/Vector.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "BaseGameInstance.h" // for FSAgentInfo 
#include "Engine/EngineTypes.h" // for EAttachmentRule
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "BaseGameAgent.generated.h"

UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	
	ABaseGameAgent();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	UCapsuleComponent* Capsule;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	USceneComponent* WeaponSpawnOffset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	UParticleSystem* DeathParticleEffect; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	USoundCue* DeathSoundCue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	USoundCue* HitSoundCue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	UParticleSystem* HitParticleEffect;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float MoveSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	ABaseWeapon* Weapon;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	TSubclassOf<ABaseWeapon> DefaultWeaponType; // default = weapon_singleshot 

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float Health;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"), Category = "BirdOfPrey") // instance editable
	FSAgentInfo AgentInfo;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey") // instance editable
	float Points;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float OutOfBoundsCheckTolerance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey") 
	FName WeaponSocketName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	EAttachmentRule WeaponAttachRule; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	FVector TargetLocation; 

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ChangeWeaponType(TSubclassOf<ABaseWeapon> NewWeaponType);

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	FTransform GetWeaponSpawnTransform();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnDefaultWeapon();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void AgentTakeDamage(float Damage, float& ActualDamage); 
	// renamed function because it conflicts with a function of the same name in Pawn class

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	void IsAlive(bool& Alive);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void Died(AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayHitEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CleanUp();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void ApplyAgentInfo(FSAgentInfo NewAgentInfo);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayDeathEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForOutOfBounds();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	class UParticleSystemComponent* PSC;

};
