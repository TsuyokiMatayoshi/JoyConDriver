// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoyConDriver/Public/JoyConController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoyConController() {}
// Cross Module References
	JOYCONDRIVER_API UEnum* Z_Construct_UEnum_JoyConDriver_EJoyConState();
	UPackage* Z_Construct_UPackage__Script_JoyConDriver();
	JOYCONDRIVER_API UClass* Z_Construct_UClass_UJoyConController_NoRegister();
	JOYCONDRIVER_API UClass* Z_Construct_UClass_UJoyConController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EJoyConState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_JoyConDriver_EJoyConState, Z_Construct_UPackage__Script_JoyConDriver(), TEXT("EJoyConState"));
		}
		return Singleton;
	}
	template<> JOYCONDRIVER_API UEnum* StaticEnum<EJoyConState>()
	{
		return EJoyConState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJoyConState(EJoyConState_StaticEnum, TEXT("/Script/JoyConDriver"), TEXT("EJoyConState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_JoyConDriver_EJoyConState_Hash() { return 3947479116U; }
	UEnum* Z_Construct_UEnum_JoyConDriver_EJoyConState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_JoyConDriver();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJoyConState"), 0, Get_Z_Construct_UEnum_JoyConDriver_EJoyConState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Not_Attached", (int64)Not_Attached },
				{ "Dropped", (int64)Dropped },
				{ "No_Joycons", (int64)No_Joycons },
				{ "Attached", (int64)Attached },
				{ "Input_Mode_0_X30", (int64)Input_Mode_0_X30 },
				{ "Imu_Data_OK", (int64)Imu_Data_OK },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attached.DisplayName", "Attached" },
				{ "Attached.Name", "Attached" },
				{ "BlueprintType", "true" },
				{ "Dropped.DisplayName", "Dropped" },
				{ "Dropped.Name", "Dropped" },
				{ "Imu_Data_OK.DisplayName", "IMUDataOk" },
				{ "Imu_Data_OK.Name", "Imu_Data_OK" },
				{ "Input_Mode_0_X30.DisplayName", "InputMode_0_x30" },
				{ "Input_Mode_0_X30.Name", "Input_Mode_0_X30" },
				{ "ModuleRelativePath", "Public/JoyConController.h" },
				{ "No_Joycons.DisplayName", "NoJoycons" },
				{ "No_Joycons.Name", "No_Joycons" },
				{ "Not_Attached.DisplayName", "NotAttached" },
				{ "Not_Attached.Name", "Not_Attached" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_JoyConDriver,
				nullptr,
				"EJoyConState",
				"EJoyConState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UJoyConController::StaticRegisterNativesUJoyConController()
	{
	}
	UClass* Z_Construct_UClass_UJoyConController_NoRegister()
	{
		return UJoyConController::StaticClass();
	}
	struct Z_Construct_UClass_UJoyConController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJoyConController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_JoyConDriver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoyConController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JoyConController.h" },
		{ "ModuleRelativePath", "Public/JoyConController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJoyConController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoyConController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJoyConController_Statics::ClassParams = {
		&UJoyConController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJoyConController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UJoyConController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJoyConController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJoyConController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJoyConController, 3231303767);
	template<> JOYCONDRIVER_API UClass* StaticClass<UJoyConController>()
	{
		return UJoyConController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJoyConController(Z_Construct_UClass_UJoyConController, &UJoyConController::StaticClass, TEXT("/Script/JoyConDriver"), TEXT("UJoyConController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJoyConController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
