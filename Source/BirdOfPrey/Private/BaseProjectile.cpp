// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseProjectile.h"

// Sets default values
ABaseProjectile::ABaseProjectile() : ProjectileSpeed(1000.0f), Damage(50.0f), GroundUnitCheckDistance(2000.0f),
	GroundUnitCheckAngle(10.0f), DesiredZ(0.0f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ABaseProjectile::CleanUpAndDestroy_Implementation()
{
	
}

void ABaseProjectile::InitialiseProjectile(FVector Direction, float Speed)
{
}

void ABaseProjectile::DealDamageTo(AActor* Damaging, float DamageDone)
{
}


void ABaseProjectile::OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor)
{
}


ECollisionChannel ABaseProjectile::GetInstigatorCollisionChannel()
{
	return ECollisionChannel();
}

void ABaseProjectile::CheckForGroundUnitTarget()
{
}

bool ABaseProjectile::ShouldCheckForGroundTarget()
{
	return false;
}

void ABaseProjectile::AdjustToTarget()
{
}

bool ABaseProjectile::IsEnemyProjectile()
{
	return false;
}

void ABaseProjectile::AdjustToDesiredZ()
{
}
