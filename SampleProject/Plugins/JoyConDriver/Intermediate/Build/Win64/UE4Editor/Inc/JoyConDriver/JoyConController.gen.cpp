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
	JOYCONDRIVER_API UClass* Z_Construct_UClass_UJoyConController_NoRegister();
	JOYCONDRIVER_API UClass* Z_Construct_UClass_UJoyConController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_JoyConDriver();
// End Cross Module References
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
		{ "Comment", "/**\n * \n */" },
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
	IMPLEMENT_CLASS(UJoyConController, 160593514);
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
