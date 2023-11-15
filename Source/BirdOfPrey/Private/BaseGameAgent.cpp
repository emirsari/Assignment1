// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameAgent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
ABaseGameAgent::ABaseGameAgent() : MoveSpeed(50.0f), Health(100.0f), Points(100.0f), bCheckForOutOfBounds(false),
		OutOfBoundsCheckTolerance(0.0f), WeaponSocketName("EyeLoc"), WeaponAttachRule(EAttachmentRule::SnapToTarget), TargetLocation(0.0f, 0.0f, 0.0f)
{

	FString DeathParticleEffectPath = "/Script/Engine.ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'";
	DeathParticleEffect = Cast<UParticleSystem>(StaticLoadObject(UParticleSystem::StaticClass(), NULL, *DeathParticleEffectPath));

	FString HitParticleEffectPath = "/Script/Engine.ParticleSystem'/Game/BirdOfPrey/Resources/FX/Character/P_HitEffectGeneric.P_HitEffectGeneric'";
	HitParticleEffect = Cast<UParticleSystem>(StaticLoadObject(UParticleSystem::StaticClass(), NULL, *HitParticleEffectPath));
	
	FString SoundEffectPath = "/Script/Engine.SoundCue'/Game/StarterContent/Audio/Explosion_Cue.Explosion_Cue'";
	DeathSoundCue = Cast<USoundCue>(StaticLoadObject(USoundCue::StaticClass(), NULL, *SoundEffectPath));
	
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ABaseGameAgent::ChangeWeaponType(TSubclassOf<ABaseWeapon> NewWeaponType)
{
}

FTransform ABaseGameAgent::GetWeaponSpawnTransform()
{
	return FTransform();
}

void ABaseGameAgent::SpawnDefaultWeapon()
{
}

void ABaseGameAgent::StartFire()
{
}

void ABaseGameAgent::StopFire()
{
}

void ABaseGameAgent::AgentTakeDamage(float Damage, float& ActualDamage)
{
	 ActualDamage = 0.0f;
}



void ABaseGameAgent::IsAlive(bool& Alive)
{
	 Alive = false;
}

void ABaseGameAgent::Died(AController* Killer)
{
}


void ABaseGameAgent::PlayHitEffects()
{
}

void ABaseGameAgent::CleanUp()
{
}

void ABaseGameAgent::ApplyAgentInfo(FSAgentInfo NewAgentInfo)
{
}



void ABaseGameAgent::AimAt(FVector AimTarget)
{
}

void ABaseGameAgent::PlayDeathEffects()
{
}

void ABaseGameAgent::CheckForOutOfBounds()
{
}


// Called when the game starts or when spawned
void ABaseGameAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseGameAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

