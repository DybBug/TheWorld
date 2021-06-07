// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HumanAnimInstance.generated.h"

class AHuman;
/**
 * 
 */
UCLASS()
class THEWORLD_API UHumanAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected :
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HumanAnimInstance|Properties", meta = (DisplayName = "Forward Speed"))
	float m_ForwardSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HumanAnimInstance|Properties", meta = (DisplayName = "Right Speed"))
	float m_RightSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HumanAnimInstance|Properties", meta = (DisplayName = "Human"))
	AHuman* m_pHuman;

public :
	virtual void NativeBeginPlay();
	virtual void NativeUpdateAnimation(float _deltaSeconds);
	
};
