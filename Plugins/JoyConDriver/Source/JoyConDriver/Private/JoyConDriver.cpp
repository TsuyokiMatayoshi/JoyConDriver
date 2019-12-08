// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "JoyConDriver.h"

#define LOCTEXT_NAMESPACE "FJoyConDriverModule"

FJoyConDriverModule::FJoyConDriverModule() {
	EventBinder = nullptr;
}

FJoyConDriverModule::~FJoyConDriverModule() {
}

void FJoyConDriverModule::StartupModule() {
	UE_LOG(LogTemp, Display, TEXT("JoyConDriver Module started!"));
	EventBinder = NewObject<UDriverEventBinder>();
	//GetWorld()->GetTimerManager().SetTimer(FuzeTimerHandle, this, &ASBombActor::OnExplode, MaxFuzeTime, false);
}

void FJoyConDriverModule::ShutdownModule() {
	UE_LOG(LogTemp, Display, TEXT("JoyConDriver Module shutdown!"));
}

void FJoyConDriverModule::Tick(const float DeltaTime) {
	Time += DeltaTime;
	if(Time >= 5) {
		Time = 0;
		if(EventBinder != nullptr) {
			EventBinder->OnNewControllerConnected.Broadcast();
			//UE_LOG(LogTemp, Display, TEXT("Delegate broadcasted!"));
			//->Initialize(nullptr, false, false, 0, false);
		}// else UE_LOG(LogTemp, Display, TEXT("Controller was not initialized!"));
	}
	//UE_LOG(LogTemp, Display, TEXT("Tick! - %f"), DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString("Connection lost. Is the Joy-Con connected?"));
}

TStatId FJoyConDriverModule::GetStatId() const {
	return TStatId();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FJoyConDriverModule, JoyConDriver)