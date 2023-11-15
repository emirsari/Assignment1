// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGameInstance.h"

void UBaseGameInstance::SetPlayerAgentInfoFor(int PlayerControllerID, FSAgentInfo& AgentInfo)
{

}

FSAgentInfo& UBaseGameInstance::GetPlayerAgentInfoFor(int PlayerControllerID, bool& Success)
{
	Success = false;
	return PlayerAgentInfo[PlayerControllerID];
}

void UBaseGameInstance::OnAgentInfoChange(int PlayerControllerID, FSAgentInfo& AgentInfo)
{

}


