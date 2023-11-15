// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayerState.h"

ABasePlayerState::ABasePlayerState() : PlayerScore(0.0f), RemainingLives(3), TimeOfLastDeath(0.0f)
{

}

void ABasePlayerState::AddScore(float Amount)
{
}

void ABasePlayerState::ConsumeLife()
{
}

bool ABasePlayerState::HasRemainingLives()
{
	return false;
}
