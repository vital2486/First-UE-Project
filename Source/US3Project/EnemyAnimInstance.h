// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EnemyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class US3PROJECT_API UEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public :

	//BeginPlay 기능을 수행
	virtual void NativeInitializeAnimation() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement)
	float MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement)
	class APawn* Pawn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement)
	class AEnemy* Enemy;

	//Tick함수 처럼 매 Frame마다 Variable을 Update
	UFUNCTION(BlueprintCallable, Category = AnimationProperties)
	void UpdateAnimationProperties();
};
