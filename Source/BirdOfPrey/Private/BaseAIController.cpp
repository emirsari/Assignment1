// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAIController.h"

ABaseAIController::ABaseAIController() : LastFireTime(0.0f), bIsFiring(false), RefireDelay(1.0f), bShouldUpdateAim(false)
{

}

void ABaseAIController::SelectTarget()
{
}

void ABaseAIController::AimAt(FVector AimTarget)
{
}

void ABaseAIController::CheckFire()
{
}

void ABaseAIController::UpdateAim()
{
}

bool ABaseAIController::ShouldStartFire()
{
	return false;
}

bool ABaseAIController::ShouldStopFire()
{
	return false;
}

void ABaseAIController::StartFire()
{
}

void ABaseAIController::StopFire()
{
}

bool ABaseAIController::ShouldUpdateAim()
{
	return false;
}
