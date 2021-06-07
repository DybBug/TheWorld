// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FootStepAnimNotify.generated.h"

/**
 * 
 */
UCLASS()
class THEWORLD_API UFootStepAnimNotify : public UAnimNotify
{
	GENERATED_BODY()
	
private :
	virtual void Notify(USkeletalMeshComponent* _pMeshComp, UAnimSequenceBase* _pAnimation) override;

};
