// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "CPPCharacter.generated.h"



UCLASS()
class COMPULSORY1PROJECT_API ACPPCharacter : public ACharacter
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))

	class UCameraComponent* Camera;

public:
	// Sets default values for this character's properties
	ACPPCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputMappingContext* InputMapping;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputAction* IA_MyMove;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputAction* IA_MyLook;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
	class UInputAction* IA_MyJump;

	void MoveInput(const FInputActionValue& InputValue);
	void LookInput(const FInputActionValue& InputValue);
	void JumpInput();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
