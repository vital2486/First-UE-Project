// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Critter.generated.h"

UCLASS()
class US3PROJECT_API ACritter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACritter();

	UPROPERTY(EditAnywhere, Category = "PawnMovement")
	FVector CurrentVelocity;

	UPROPERTY(EditAnywhere, Category = "PawnMovement")
	float MaxSpeed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private : 
	
	void MoveForward(float Value);
	
	void MoveRight(float Value);



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "Mesh")
	class USkeletalMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;
};
