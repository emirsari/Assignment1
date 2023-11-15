// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"

AProjectileWeapon::AProjectileWeapon() : RefireTime(0.5f), LastFireTime(0.0f),
	NumShots(1), bIsFiring(false), DesiredZ(0.0f)
{
	
}



ABaseProjectile* AProjectileWeapon::SpawnProjectile(FTransform SpawnTransform)
{
	return nullptr;
}

FTransform AProjectileWeapon::GetProjectileSpawnTransform(int ShotNumber)
{
	return FTransform();
}

bool AProjectileWeapon::ReadyToFire()
{
	return false;
}

bool AProjectileWeapon::IsFiring()
{
	return false;
}

void AProjectileWeapon::StartFire()
{
	Super::StartFire();
}

void AProjectileWeapon::StopFire()
{
	Super::StopFire();
}

void AProjectileWeapon::FireProjectile_Implementation()
{
}


void AProjectileWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}