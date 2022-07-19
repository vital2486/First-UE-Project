// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Weapon.generated.h"

/**
 * 
 */
UCLASS()
class US3PROJECT_API AWeapon : public AItem
{
	GENERATED_BODY()
	
public : 

	AWeapon();

	/**
	* �θ�Ŭ������ Item���� StaticMeshComponent�� �����ִ�.
	* Weapon�� ����ϴ� asset�� SkeletalMesh�̹Ƿ� ���� ����������Ѵ�.
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SkeletalMesh")
	class USkeletalMeshComponent* SkeletalMesh;

	void Equip(class AMain* Char);

	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;
};
