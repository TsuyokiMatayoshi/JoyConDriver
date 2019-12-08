// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DriverEventBinder.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNewControllerConnected);

UCLASS()
class JOYCONDRIVER_API UDriverEventBinder : public UObject {
	GENERATED_BODY()

public:
	UDriverEventBinder();
	~UDriverEventBinder();
	
	UPROPERTY(BlueprintAssignable, Category = "Test")
	FNewControllerConnected OnNewControllerConnected;

	UFUNCTION()
	void NewControllerConnected();
};
