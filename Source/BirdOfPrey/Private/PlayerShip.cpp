// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"

APlayerShip::APlayerShip() : InvulnerabilityTime(2.0f)
{
	
}

void APlayerShip::GetShipConstantVelocity(FVector& Direction, float& Speed)
{
	Speed = 0.0f;
}

void APlayerShip::ClampToCameraBounds()
{
}

float APlayerShip::GetShipAxisAdjustment(float Dist, float Max)
{
	return 0.0f;
}

FVector APlayerShip::CalcOutofBoundsAdjustment()
{
	return FVector();
}

void APlayerShip::GetPlayerAgentInfo(APlayerController* Player)
{
}

bool APlayerShip::ShouldSpawnAIController()
{
	return false;
}

void APlayerShip::UpdateHoverPitch()
{
}

bool APlayerShip::HasDiedRecently()
{
	return false;
}

void APlayerShip::AgentTakeDamage(float Damage, float& ActualDamage)
{
	Super::AgentTakeDamage(Damage, ActualDamage);
}

void APlayerShip::Died(AController* Killer)
{
	Super::Died(Killer);
}
