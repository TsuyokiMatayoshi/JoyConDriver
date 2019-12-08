// Fill out your copyright notice in the Description page of Project Settings.


#include "DriverEventBinder.h"

UDriverEventBinder::UDriverEventBinder() {
	OnNewControllerConnected.AddDynamic(this, &UDriverEventBinder::NewControllerConnected);
}

UDriverEventBinder::~UDriverEventBinder() {
	OnNewControllerConnected.RemoveAll(this);
	OnNewControllerConnected.Clear();
}

void UDriverEventBinder::NewControllerConnected() {
	
}
