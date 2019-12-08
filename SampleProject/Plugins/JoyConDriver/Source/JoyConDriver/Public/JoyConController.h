// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Runnable.h"
#include "Queue.h"
#include "hidapi.h"
#include "JoyConController.generated.h"

UENUM(BlueprintType)
enum EJoyConState {
	Not_Attached     UMETA(DisplayName = "NotAttached"),
	Dropped          UMETA(DisplayName = "Dropped"),
	No_Joycons       UMETA(DisplayName = "NoJoycons"),
	Attached         UMETA(DisplayName = "Attached"),
	Input_Mode_0_X30 UMETA(DisplayName = "InputMode_0_x30"),
	Imu_Data_OK      UMETA(DisplayName = "IMUDataOk"),
};

struct FReport {
	uint8_t* ReportData;
	FDateTime Time;

	FReport() {
		ReportData = nullptr;
	}

	FReport(uint8_t* reportData, FDateTime time) {
		ReportData = reportData;
		Time = time;
	}

	FDateTime GetTime() {
		return Time;
	}

	void CopyBuffer(uint8_t* destinationArray) {
		for (auto i = 0; i < 49; ++i) {
			destinationArray[i] = ReportData[i];
		}
	}
};

UCLASS()
class JOYCONDRIVER_API UJoyConController : public UObject, public FRunnable {
	GENERATED_BODY()

public:
	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Stop() override;

	static void ArrayCopy(uint8_t* SourceArray, int SourceIndex, uint8_t* DestinationArray, int DestinationIndex, int Length);
	static void ArrayCopy(const uint8_t* SourceArray, int SourceIndex, uint8_t* DestinationArray, int DestinationIndex, int Length);
	
	void Initialize(hid_device* Device, bool UseImu, bool UseLocalize, float Alpha, bool IsLeft);
	void Attach(uint8_t Leds);
	void Update();
	void Detach();
	void DumpCalibrationData();
	void StartThread();

private:
	uint8_t* SendCommand(uint8_t Sc, uint8_t TempBuf[], uint8_t Len, bool Print = false);
	uint8_t* ReadSpi(uint8_t Address1, uint8_t Address2, uint32_t Len, bool Print = false);
	
private:
	const uint32 ReportLen = 49;
	const uint8_t DefaultBuf[8] = { 0x0, 0x1, 0x40, 0x40, 0x0, 0x1, 0x40, 0x40 };

	hid_device* HidHandle;
	EJoyConState State;
	FRunnableThread* ThreadHandle;
	
	bool bStopPolling;
	bool bImuEnabled;
	bool bIsLeft;
	bool bDoLocalize;

	uint8_t GlobalCount;
	uint16_t DeadZone;

	uint16_t StickCal[6] = { 0, 0, 0, 0, 0, 0 };
	int16_t GyrNeutral[3] = { 0, 0, 0 };
	int16_t GyrR[3] = { 0, 0, 0 };
	int16_t AccR[3] = { 0, 0, 0 };
	/*
	float Max[3] = { 0, 0, 0 };
	float Sum[3] = { 0, 0, 0 };
	int Timestamp;
    FVector AccG;
	FVector GyrG;
	TQueue<FReport> Reports;
	FCriticalSection M_Mutex;
	uint8_t TsDequeue;
	uint8_t TsEnqueue;
	FDateTime TsPrevious;
	float FilterWeight;
	bool FirstImuPacket = true;
	FVector *I_B;
	FVector *J_B;
	FVector *K_B;
	FVector *K_Acc;
	FVector *Wa;
	FVector *Wg;*/

};
