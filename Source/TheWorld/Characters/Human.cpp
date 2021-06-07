// Fill out your copyright notice in the Description page of Project Settings.


#include "Human.h"
#include <GameFramework/CharacterMovementComponent.h>
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>
#include <Animation/AnimMontage.h>

// Sets default values
AHuman::AHuman()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	m_pSpringArm = CreateDefaultSubobject<USpringArmComponent>(FName("SpringArm"));
	m_pSpringArm->SetupAttachment(RootComponent);
	m_pSpringArm->bUsePawnControlRotation = true;
	m_pSpringArm->bInheritYaw = true;
	m_pSpringArm->bInheritPitch = true;
	m_pSpringArm->bInheritRoll = false;

	m_pCamera = CreateDefaultSubobject<UCameraComponent>(FName("Camera"));
	m_pCamera->SetupAttachment(m_pSpringArm);

	GetCharacterMovement()->MaxAcceleration = 500.f;
	GetCharacterMovement()->bOrientRotationToMovement = true;

}

// Called when the game starts or when spawned
void AHuman::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHuman::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

}

// Called to bind functionality to input
void AHuman::SetupPlayerInputComponent(UInputComponent* pPlayerInputComponent)
{
	Super::SetupPlayerInputComponent(pPlayerInputComponent);

	pPlayerInputComponent->BindAction("ToggleRun/Walk", EInputEvent::IE_Pressed, this, &AHuman::ToggleRunOrWalk);
	pPlayerInputComponent->BindAction("Sprint", EInputEvent::IE_Pressed, this, &AHuman::StartSprinting);
	pPlayerInputComponent->BindAction("Sprint", EInputEvent::IE_Released, this, &AHuman::FinishSprinting);
	pPlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &AHuman::Jump);

	pPlayerInputComponent->BindAxis("MoveForward", this, &AHuman::MoveForward);
	pPlayerInputComponent->BindAxis("MoveRight", this, &AHuman::MoveRight);
	pPlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	pPlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
}

void AHuman::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AHuman::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void AHuman::ToggleRunOrWalk()
{
	m_IsWalking ^= true;
	GetCharacterMovement()->MaxWalkSpeed = (m_IsWalking ? 300.f : 600.f);
}

void AHuman::StartSprinting()
{
	m_IsSprinting = true;
	GetCharacterMovement()->MaxWalkSpeed = 800.f;
}

void AHuman::FinishSprinting()
{
	m_IsSprinting = false;

	if (m_IsWalking)
		ToggleRunOrWalk();
	else
		GetCharacterMovement()->MaxWalkSpeed = 600.f;
}

void AHuman::Jump()
{
	Super::Jump();
	if(m_pJumpAminMontage)
		PlayAnimMontage(m_pJumpAminMontage);	
}

void AHuman::Landed(const FHitResult& _hit)
{
	if(m_pJumpAminMontage)
		PlayAnimMontage(m_pJumpAminMontage, 1.0f, FName("Land"));
}