// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoyConDriver/Public/DriverEventBinder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDriverEventBinder() {}
// Cross Module References
	JOYCONDRIVER_API UFunction* Z_Construct_UDelegateFunction_JoyConDriver_NewControllerConnected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_JoyConDriver();
	JOYCONDRIVER_API UClass* Z_Construct_UClass_UDriverEventBinder_NoRegister();
	JOYCONDRIVER_API UClass* Z_Construct_UClass_UDriverEventBinder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	JOYCONDRIVER_API UFunction* Z_Construct_UFunction_UDriverEventBinder_NewControllerConnected();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_JoyConDriver_NewControllerConnected__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_JoyConDriver_NewControllerConnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DriverEventBinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_JoyConDriver_NewControllerConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_JoyConDriver, nullptr, "NewControllerConnected__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_JoyConDriver_NewControllerConnected__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_JoyConDriver_NewControllerConnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_JoyConDriver_NewControllerConnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_JoyConDriver_NewControllerConnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UDriverEventBinder::StaticRegisterNativesUDriverEventBinder()
	{
		UClass* Class = UDriverEventBinder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NewControllerConnected", &UDriverEventBinder::execNewControllerConnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDriverEventBinder_NewControllerConnected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDriverEventBinder_NewControllerConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DriverEventBinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDriverEventBinder_NewControllerConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDriverEventBinder, nullptr, "NewControllerConnected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDriverEventBinder_NewControllerConnected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDriverEventBinder_NewControllerConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDriverEventBinder_NewControllerConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDriverEventBinder_NewControllerConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDriverEventBinder_NoRegister()
	{
		return UDriverEventBinder::StaticClass();
	}
	struct Z_Construct_UClass_UDriverEventBinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNewControllerConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewControllerConnected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDriverEventBinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_JoyConDriver,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDriverEventBinder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDriverEventBinder_NewControllerConnected, "NewControllerConnected" }, // 1952359994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDriverEventBinder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DriverEventBinder.h" },
		{ "ModuleRelativePath", "Public/DriverEventBinder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDriverEventBinder_Statics::NewProp_OnNewControllerConnected_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/DriverEventBinder.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDriverEventBinder_Statics::NewProp_OnNewControllerConnected = { "OnNewControllerConnected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDriverEventBinder, OnNewControllerConnected), Z_Construct_UDelegateFunction_JoyConDriver_NewControllerConnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDriverEventBinder_Statics::NewProp_OnNewControllerConnected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDriverEventBinder_Statics::NewProp_OnNewControllerConnected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDriverEventBinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDriverEventBinder_Statics::NewProp_OnNewControllerConnected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDriverEventBinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDriverEventBinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDriverEventBinder_Statics::ClassParams = {
		&UDriverEventBinder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDriverEventBinder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDriverEventBinder_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDriverEventBinder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDriverEventBinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDriverEventBinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDriverEventBinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDriverEventBinder, 3868254729);
	template<> JOYCONDRIVER_API UClass* StaticClass<UDriverEventBinder>()
	{
		return UDriverEventBinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDriverEventBinder(Z_Construct_UClass_UDriverEventBinder, &UDriverEventBinder::StaticClass, TEXT("/Script/JoyConDriver"), TEXT("UDriverEventBinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDriverEventBinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
