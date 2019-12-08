// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoyConDriver/Public/JoyConBlueprintFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoyConBlueprintFunctions() {}
// Cross Module References
	JOYCONDRIVER_API UClass* Z_Construct_UClass_UJoyConBlueprintFunctions_NoRegister();
	JOYCONDRIVER_API UClass* Z_Construct_UClass_UJoyConBlueprintFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_JoyConDriver();
	JOYCONDRIVER_API UFunction* Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon();
	JOYCONDRIVER_API UClass* Z_Construct_UClass_UJoyConController_NoRegister();
	JOYCONDRIVER_API UFunction* Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons();
	JOYCONDRIVER_API UFunction* Z_Construct_UFunction_UJoyConBlueprintFunctions_SearchForJoyCons();
// End Cross Module References
	void UJoyConBlueprintFunctions::StaticRegisterNativesUJoyConBlueprintFunctions()
	{
		UClass* Class = UJoyConBlueprintFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetJoyCon", &UJoyConBlueprintFunctions::execGetJoyCon },
			{ "GetJoyCons", &UJoyConBlueprintFunctions::execGetJoyCons },
			{ "SearchForJoyCons", &UJoyConBlueprintFunctions::execSearchForJoyCons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon_Statics
	{
		struct JoyConBlueprintFunctions_eventGetJoyCon_Parms
		{
			int32 Index;
			UJoyConController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConBlueprintFunctions_eventGetJoyCon_Parms, ReturnValue), Z_Construct_UClass_UJoyConController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConBlueprintFunctions_eventGetJoyCon_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyConDriver" },
		{ "ModuleRelativePath", "Public/JoyConBlueprintFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConBlueprintFunctions, nullptr, "GetJoyCon", nullptr, nullptr, sizeof(JoyConBlueprintFunctions_eventGetJoyCon_Parms), Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons_Statics
	{
		struct JoyConBlueprintFunctions_eventGetJoyCons_Parms
		{
			UJoyConController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConBlueprintFunctions_eventGetJoyCons_Parms, ReturnValue), Z_Construct_UClass_UJoyConController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyConDriver" },
		{ "ModuleRelativePath", "Public/JoyConBlueprintFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConBlueprintFunctions, nullptr, "GetJoyCons", nullptr, nullptr, sizeof(JoyConBlueprintFunctions_eventGetJoyCons_Parms), Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConBlueprintFunctions_SearchForJoyCons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConBlueprintFunctions_SearchForJoyCons_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyConDriver" },
		{ "ModuleRelativePath", "Public/JoyConBlueprintFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConBlueprintFunctions_SearchForJoyCons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConBlueprintFunctions, nullptr, "SearchForJoyCons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConBlueprintFunctions_SearchForJoyCons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UJoyConBlueprintFunctions_SearchForJoyCons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConBlueprintFunctions_SearchForJoyCons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConBlueprintFunctions_SearchForJoyCons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJoyConBlueprintFunctions_NoRegister()
	{
		return UJoyConBlueprintFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UJoyConBlueprintFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJoyConBlueprintFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_JoyConDriver,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJoyConBlueprintFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCon, "GetJoyCon" }, // 3763855755
		{ &Z_Construct_UFunction_UJoyConBlueprintFunctions_GetJoyCons, "GetJoyCons" }, // 122707152
		{ &Z_Construct_UFunction_UJoyConBlueprintFunctions_SearchForJoyCons, "SearchForJoyCons" }, // 3606385167
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoyConBlueprintFunctions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "JoyConBlueprintFunctions.h" },
		{ "ModuleRelativePath", "Public/JoyConBlueprintFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJoyConBlueprintFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoyConBlueprintFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJoyConBlueprintFunctions_Statics::ClassParams = {
		&UJoyConBlueprintFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJoyConBlueprintFunctions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UJoyConBlueprintFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJoyConBlueprintFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJoyConBlueprintFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJoyConBlueprintFunctions, 2472195242);
	template<> JOYCONDRIVER_API UClass* StaticClass<UJoyConBlueprintFunctions>()
	{
		return UJoyConBlueprintFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJoyConBlueprintFunctions(Z_Construct_UClass_UJoyConBlueprintFunctions, &UJoyConBlueprintFunctions::StaticClass, TEXT("/Script/JoyConDriver"), TEXT("UJoyConBlueprintFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJoyConBlueprintFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
