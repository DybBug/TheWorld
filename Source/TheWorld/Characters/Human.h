// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Human.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UAnimMontage;


UCLASS()
class THEWORLD_API AHuman : public ACharacter
{
	GENERATED_BODY()


protected :
	UPROPERTY(VisibleAnywhere, Category = "Human|Components", meta = (DisplayName = "SpringArm"))
	USpringArmComponent* m_pSpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Human|Components", meta = (DisplayName = "Camera"))
	UCameraComponent* m_pCamera;

	UPROPERTY(EditAnywhere, Category = "Human|Properties", meta = (DisplayName = "Jump AnimMontage"))
	UAnimMontage* m_pJumpAminMontage;

	UPROPERTY(EditAnywhere, Category = "Human|Properties", meta = (DisplayName = "Is Walking"))
	bool m_IsWalking;

	UPROPERTY(EditAnywhere, Category = "Human|Properties", meta = (DisplayName = "Is Sprinting"))
	bool m_IsSprinting;

public:
	// Sets default values for this character's properties
	AHuman();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float _deltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* _pPlayerInputComponent) override;


protected :
	void MoveForward(float _value);
	void MoveRight(float _value);


	void ToggleRunOrWalk();
	void StartSprinting();
	void FinishSprinting();
	void Jump();
	virtual void Landed(const FHitResult& _hit) override;

};
