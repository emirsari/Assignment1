// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"

ABaseGameMode::ABaseGameMode() : WorldScrollSpeed(0.0f), MaxRelativePlayerOffset(500.0f, 700.0f), RespawnDelay(3.0f), SpawnOffset(600.0f), PickUpSpawnPercent(0.3f), IsGameOverScreen(false)
{

}

FVector ABaseGameMode::GetWorldScrollVelocity()
{
	return FVector();
}

void ABaseGameMode::GetWorldCameraActor(AWorldCameraActor*& OtherWorldCameraActor)
{
}

void ABaseGameMode::OnPlayerDied(ABasePlayerController* Player)
{
}

void ABaseGameMode::OnEnemyDied(ABaseGameAgent* Player, AController* Killer)
{
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::EndGame(bool Success)
{
}

void ABaseGameMode::SpawnEnemyFrom(TArray<TSubclassOf<ABaseGameAgent>> ClassList)
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

void ABaseGameMode::TrySpawnPowerUp(FVector Location)
{
}

float ABaseGameMode::GetDistanceTravelled()
{
	return 0.0f;
}
