// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JoyConController.h"
#include "DriverEventBinder.h"
#include "JoyConBlueprintFunctions.generated.h"

class FJoyConDriverModule;
/**
 *
 */
UCLASS()
class JOYCONDRIVER_API UJoyConBlueprintFunctions : public UBlueprintFunctionLibrary {
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="JoyConDriver")
	static UDriverEventBinder* GetJoyConEventBinder();
	
	UFUNCTION(BlueprintCallable, Category="JoyConDriver")
	static void SearchForJoyCons();
	
	UFUNCTION(BlueprintCallable, Category="JoyConDriver")
	static UJoyConController* GetJoyCons();

	UFUNCTION(BlueprintCallable, Category="JoyConDriver")
	static UJoyConController* GetJoyCon(int Index);

	static void SetDriver(FJoyConDriverModule* Module);

public:
	FJoyConDriverModule* DriverModule;
};
