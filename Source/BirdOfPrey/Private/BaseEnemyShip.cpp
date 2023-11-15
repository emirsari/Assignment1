// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemyShip.h"

ABaseEnemyShip::ABaseEnemyShip()
{

}

void ABaseEnemyShip::Move()
{
}

void ABaseEnemyShip::Died(AController* Killer)
{
	Super::Died(Killer);
}
