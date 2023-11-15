// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseStationaryEnemy.h"

ABaseStationaryEnemy::ABaseStationaryEnemy()
{

}

void ABaseStationaryEnemy::Died(AController* Killer)
{
	Super::Died(Killer);
}
