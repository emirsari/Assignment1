// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BaseWeapon.h"
#include "BaseGameInstance.generated.h"

USTRUCT(BlueprintType)
struct FSAgentInfo
{
    GENERATED_USTRUCT_BODY();

public:


    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    FText Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    TSubclassOf<ABaseWeapon> WeaponType; 

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    USkeletalMesh* SkeletalMesh;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    UAnimInstance* AnimInstance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey", meta = (ToolTip = "For UI display purposes"))
    UTexture2D* Image;    

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
        float Speed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
        float Health;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
        float MeshScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
        FLinearColor Colour;

    FSAgentInfo() :
        Speed(1000.0f), Health(250.0f), MeshScale(1.0f), Colour(FLinearColor(1.0f, 1.0f, 1.0f)) {};

};

/**
 * 
 */
UCLASS()
class UBaseGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    TArray<FSAgentInfo> PlayerAgentInfo;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SetPlayerAgentInfoFor(int PlayerControllerID, FSAgentInfo& AgentInfo);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FSAgentInfo& GetPlayerAgentInfoFor(int PlayerControllerID, bool &Success);

    void OnAgentInfoChange(int PlayerControllerID, FSAgentInfo& AgentInfo);

	
};
