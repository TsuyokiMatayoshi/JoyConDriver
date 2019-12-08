// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Tickable.h"
#include "JoyConController.h"
#include "DriverEventBinder.h"

class FJoyConDriverModule : public IModuleInterface, public FTickableGameObject {
public:
	FJoyConDriverModule();
	~FJoyConDriverModule();
	
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual void Tick(float DeltaTime) override;
	
	virtual bool SupportsDynamicReloading() override   { return true; }
	virtual bool IsTickable() const override           { return true; }
	virtual bool IsTickableWhenPaused() const override { return true; }
	virtual bool IsTickableInEditor() const override   { return true; }
	virtual TStatId GetStatId() const override;
	
public:
	float Time = 0.0F;
	UDriverEventBinder *EventBinder;
};
