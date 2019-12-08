// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "JoyConDriver.h"

#define LOCTEXT_NAMESPACE "FJoyConDriverModule"

void FJoyConDriverModule::StartupModule() {
	UE_LOG(LogTemp, Display, TEXT("JoyConDriver Module started!"));
}

void FJoyConDriverModule::ShutdownModule() {
	UE_LOG(LogTemp, Display, TEXT("JoyConDriver Module shutdown!"));
}

void FJoyConDriverModule::Tick(const float DeltaTime) {
	Time += DeltaTime;
	if(Time >= 1) {
		Time = 0;
	}
	//UE_LOG(LogTemp, Display, TEXT("Tick! - %f"), DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString("Connection lost. Is the Joy-Con connected?"));
}

TStatId FJoyConDriverModule::GetStatId() const {
	return TStatId();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FJoyConDriverModule, JoyConDriver)