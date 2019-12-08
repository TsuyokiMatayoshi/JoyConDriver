// Fill out your copyright notice in the Description page of Project Settings.


#include "JoyConBlueprintFunctions.h"

UDriverEventBinder* UJoyConBlueprintFunctions::GetJoyConEventBinder() {
	if(DriverModule == nullptr) return nullptr;
	DriverModule.
	//return DriverModule
}

void UJoyConBlueprintFunctions::SearchForJoyCons() {
}

UJoyConController* UJoyConBlueprintFunctions::GetJoyCons() {
	return nullptr;
}

UJoyConController* UJoyConBlueprintFunctions::GetJoyCon(int Index) {
	return nullptr;
}

void UJoyConBlueprintFunctions::SetDriver(FJoyConDriverModule Module) {
	DriverModule = Module;
}
