// Fill out your copyright notice in the Description page of Project Settings.


#include "HumanAnimInstance.h"
#include "../Characters/Human.h"


void UHumanAnimInstance::NativeBeginPlay()
{
	if (!m_pHuman)
	{
		m_pHuman = Cast<AHuman>(TryGetPawnOwner());
	}
}

void UHumanAnimInstance::NativeUpdateAnimation(float _deltaSeconds)
{
	if (m_pHuman)
	{
		const FVector& velocity = m_pHuman->GetVelocity();
		const FVector& forwardVec = m_pHuman->GetActorForwardVector();
		const FVector& rightVec = m_pHuman->GetActorRightVector();
					 
		m_ForwardSpeed = FVector::DotProduct(velocity, forwardVec);
		m_RightSpeed = FVector::DotProduct(velocity, rightVec);
	}
}