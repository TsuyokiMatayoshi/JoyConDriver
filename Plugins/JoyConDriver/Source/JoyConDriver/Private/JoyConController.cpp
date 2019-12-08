// Fill out your copyright notice in the Description page of Project Settings.


#include "JoyConController.h"
#include "RunnableThread.h"
#include "PlatformProcess.h"
#include "Engine/Engine.h"
#include "AllowWindowsPlatformTypes.h"
#include <map>
#include "HideWindowsPlatformTypes.h"

UJoyConController::UJoyConController() {
}

UJoyConController::~UJoyConController() {
}


bool UJoyConController::Init() {
	return State == EJoyConState::Attached;
}

void UJoyConController::Initialize(hid_device* Device, bool UseImu, bool UseLocalize, float Alpha, bool IsLeft) {
	HidHandle = Device;
	bIsLeft = IsLeft;
	bImuEnabled = UseImu;
	bDoLocalize = UseLocalize;
}

void UJoyConController::StartThread() {
	if (ThreadHandle == nullptr) ThreadHandle = FRunnableThread::Create(this, TEXT("JoyConPool"), 0);
}

void UJoyConController::Attach(uint8_t Leds) {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString("JoyCon attached!"));
	State = EJoyConState::Attached;
	uint8_t a[] = { 0x0 };
	// Input report mode
	SendCommand(0x3, new uint8_t[1]{ 0x3f }, 1, false);
	a[0] = 0x1;
	DumpCalibrationData();
	// Connect
	a[0] = 0x01;
	SendCommand(0x1, a, 1);
	a[0] = 0x02;
	SendCommand(0x1, a, 1);
	a[0] = 0x03;
	SendCommand(0x1, a, 1);
	a[0] = Leds;
	SendCommand(0x30, a, 1);
	if (bImuEnabled) {
		SendCommand(0x40, new uint8_t[1]{ 0x1 }, 1);
	} else {
		SendCommand(0x40, new uint8_t[1]{ 0x0 }, 1);
	}
	SendCommand(0x3, new uint8_t[1]{ 0x30 }, 1);
	SendCommand(0x48, new uint8_t[1]{ 0x1 }, 1);
	bStopPolling = false;
}

uint32 UJoyConController::Run() {
	return 0;
}

void UJoyConController::Update() {

}

void UJoyConController::Stop() {

}

void UJoyConController::Detach() {
	bStopPolling = true;
	//PrintArray(_max, format: "Max {0:S}", d : DebugMode.IMU);
	//PrintArray(_sum, format: "Sum {0:S}", d : DebugMode.IMU);
	if (State > EJoyConState::No_Joycons) {
		SendCommand(0x30, new uint8_t[1]{ 0x0 }, 1);
		SendCommand(0x40, new uint8_t[1]{ 0x0 }, 1);
		SendCommand(0x48, new uint8_t[1]{ 0x0 }, 1);
		SendCommand(0x3, new uint8_t[1]{ 0x3f }, 1);
	}
	if (State > EJoyConState::Dropped) {
		if (HidHandle != nullptr) hid_close(HidHandle);
	}
	State = EJoyConState::Not_Attached;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString("JoyCon detached!"));
}

uint8_t* UJoyConController::ReadSpi(uint8_t Address1, uint8_t Address2, uint32_t Len, bool Print) {
	uint8_t TBuf[5] = { Address2, Address1, 0x00, 0x00, static_cast<uint8_t>(Len) };
	auto ReadBuf = new uint8_t[Len];
	auto Buf = new uint8_t[Len + 20];

	for (auto i = 0; i < 100; ++i) {
		Buf = SendCommand(0x10, TBuf, 5, false);
		if (Buf[15] == Address2 && Buf[16] == Address1) {
			break;
		}
	}
	ArrayCopy(Buf, 20, ReadBuf, 0, Len);
	//if (Print) PrintArray(readBuf, DebugMode.COMMS, len);
	return ReadBuf;
}

uint8_t* UJoyConController::SendCommand(uint8_t Sc, uint8_t TempBuf[], uint8_t Len, bool Print) {
	auto Buf = new uint8_t[ReportLen];
	auto Response = new uint8_t[ReportLen];
	ArrayCopy(DefaultBuf, 0, Buf, 2, 8);
	ArrayCopy(TempBuf, 0, Buf, 11, Len);
	Buf[10] = Sc;
	Buf[1] = GlobalCount;
	Buf[0] = 0x1;
	if (GlobalCount == 0xf) GlobalCount = 0;
	else ++GlobalCount;
	hid_write(HidHandle, Buf, Len + 11);
	int Result = hid_read_timeout(HidHandle, Response, ReportLen, 50);
	//if (res < 1) DebugPrint("No response.", DebugMode.COMMS);
	//else if (print) { PrintArray(response, DebugMode.COMMS, ReportLen - 1, 1, $"Response ID 0x{response[0]:X2} Data: 0x{0:S}"); }
	return Response;
}

void UJoyConController::DumpCalibrationData() {
	auto Buf = ReadSpi(0x80, (bIsLeft ? static_cast<uint8_t>(0x12) : static_cast<uint8_t>(0x1d)), 9); // get user calibration data if possible
	auto Found = false;
	for (auto i = 0; i < 9; ++i) {
		if (Buf[i] == 0xff) continue;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, FString("Using user stick calibration data."));
		//Debug.Log("Using user stick calibration data.");
		Found = true;
		break;
	}
	if (!Found) {
		//Debug.Log("Using factory stick calibration data.");
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, FString("Using factory stick calibration data."));
		Buf = ReadSpi(0x60, (bIsLeft ? static_cast<uint8_t>(0x3d) : static_cast<uint8_t>(0x46)), 9); // get user calibration data if possible
	}
	StickCal[bIsLeft ? 0 : 2] = static_cast<uint16_t>((Buf[1] << 8) & 0xF00 | Buf[0]); // X Axis Max above center
	StickCal[bIsLeft ? 1 : 3] = static_cast<uint16_t>((Buf[2] << 4) | (Buf[1] >> 4));  // Y Axis Max above center
	StickCal[bIsLeft ? 2 : 4] = static_cast<uint16_t>((Buf[4] << 8) & 0xF00 | Buf[3]); // X Axis Center
	StickCal[bIsLeft ? 3 : 5] = static_cast<uint16_t>((Buf[5] << 4) | (Buf[4] >> 4));  // Y Axis Center
	StickCal[bIsLeft ? 4 : 0] = static_cast<uint16_t>((Buf[7] << 8) & 0xF00 | Buf[6]); // X Axis Min below center
	StickCal[bIsLeft ? 5 : 1] = static_cast<uint16_t>((Buf[8] << 4) | (Buf[7] >> 4));  // Y Axis Min below center

	//PrintArray(_stickCal, len: 6, start: 0, format: "Stick calibration data: {0:S}");

	Buf = ReadSpi(0x60, (bIsLeft ? static_cast<uint8_t>(0x86) : static_cast<uint8_t>(0x98)), 16);
	DeadZone = static_cast<uint16_t>((Buf[4] << 8) & 0xF00 | Buf[3]);

	Buf = ReadSpi(0x80, 0x34, 10);
	GyrNeutral[0] = static_cast<uint16_t>(Buf[0] | ((Buf[1] << 8) & 0xff00));
	GyrNeutral[1] = static_cast<uint16_t>(Buf[2] | ((Buf[3] << 8) & 0xff00));
	GyrNeutral[2] = static_cast<uint16_t>(Buf[4] | ((Buf[5] << 8) & 0xff00));
	//PrintArray(_gyrNeutral, len: 3, d: DebugMode.IMU, format: "User gyro neutral position: {0:S}");
	// This is an extremely messy way of checking to see whether there is user stick calibration data present, but I've seen conflicting user calibration data on blank Joy-Cons. Worth another look eventually.
	if (GyrNeutral[0] + GyrNeutral[1] + GyrNeutral[2] != -3 && FGenericPlatformMath::Abs(GyrNeutral[0]) <= 100 && FGenericPlatformMath::Abs(GyrNeutral[1]) <= 100 && FGenericPlatformMath::Abs(GyrNeutral[2]) <= 100) return;
	Buf = ReadSpi(0x60, 0x29, 10);
	GyrNeutral[0] = static_cast<uint16_t>(Buf[3] | ((Buf[4] << 8) & 0xff00));
	GyrNeutral[1] = static_cast<uint16_t>(Buf[5] | ((Buf[6] << 8) & 0xff00));
	GyrNeutral[2] = static_cast<uint16_t>(Buf[7] | ((Buf[8] << 8) & 0xff00));
	//PrintArray(_gyrNeutral, len: 3, d: DebugMode.IMU, format: "Factory gyro neutral position: {0:S}");
}

void UJoyConController::ArrayCopy(uint8_t* SourceArray, int SourceIndex, uint8_t* DestinationArray, int DestinationIndex, int Length) {
	std::copy(SourceArray + SourceIndex, SourceArray + SourceIndex + Length, DestinationArray + DestinationIndex);
}

void UJoyConController::ArrayCopy(const uint8_t* SourceArray, int SourceIndex, uint8_t* DestinationArray, int DestinationIndex, int Length) {
	std::copy(SourceArray + SourceIndex, SourceArray + SourceIndex + Length, DestinationArray + DestinationIndex);
}

void UJoyConController::NewControllerConnected() { }