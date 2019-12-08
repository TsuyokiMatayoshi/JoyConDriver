// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Tickable.h"

class FJoyConDriverModule : public IModuleInterface, public FTickableGameObject {
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual void Tick(float DeltaTime) override;
	
	virtual bool SupportsDynamicReloading() override   { return true; }
	virtual bool IsTickable() const override           { return true; }
	virtual bool IsTickableWhenPaused() const override { return true; }
	virtual bool IsTickableInEditor() const override   { return true; }
	virtual TStatId GetStatId() const override;
};
