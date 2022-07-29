// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Pickup.generated.h"

/**
 * 
 */
UCLASS()
class US3PROJECT_API APickup : public AItem
{
	GENERATED_BODY()
	
public : 

	APickup();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coins")
	int32 CoinCount;

	//PickUp 아이템을 다양하게 만들기 위해서 Blueprint로 기능을 구현한다.
	UFUNCTION(BlueprintImplementableEvent, Category = "Pickup")
	void OnPickupBP(class AMain* Target);

	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;
};
