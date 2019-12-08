// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJoyConController;
#ifdef JOYCONDRIVER_JoyConBlueprintFunctions_generated_h
#error "JoyConBlueprintFunctions.generated.h already included, missing '#pragma once' in JoyConBlueprintFunctions.h"
#endif
#define JOYCONDRIVER_JoyConBlueprintFunctions_generated_h

#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetJoyCon) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJoyConController**)Z_Param__Result=UJoyConBlueprintFunctions::GetJoyCon(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJoyCons) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJoyConController**)Z_Param__Result=UJoyConBlueprintFunctions::GetJoyCons(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchForJoyCons) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJoyConBlueprintFunctions::SearchForJoyCons(); \
		P_NATIVE_END; \
	}


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetJoyCon) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJoyConController**)Z_Param__Result=UJoyConBlueprintFunctions::GetJoyCon(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJoyCons) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJoyConController**)Z_Param__Result=UJoyConBlueprintFunctions::GetJoyCons(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchForJoyCons) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJoyConBlueprintFunctions::SearchForJoyCons(); \
		P_NATIVE_END; \
	}


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJoyConBlueprintFunctions(); \
	friend struct Z_Construct_UClass_UJoyConBlueprintFunctions_Statics; \
public: \
	DECLARE_CLASS(UJoyConBlueprintFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JoyConDriver"), NO_API) \
	DECLARE_SERIALIZER(UJoyConBlueprintFunctions)


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUJoyConBlueprintFunctions(); \
	friend struct Z_Construct_UClass_UJoyConBlueprintFunctions_Statics; \
public: \
	DECLARE_CLASS(UJoyConBlueprintFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JoyConDriver"), NO_API) \
	DECLARE_SERIALIZER(UJoyConBlueprintFunctions)


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJoyConBlueprintFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoyConBlueprintFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoyConBlueprintFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoyConBlueprintFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoyConBlueprintFunctions(UJoyConBlueprintFunctions&&); \
	NO_API UJoyConBlueprintFunctions(const UJoyConBlueprintFunctions&); \
public:


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJoyConBlueprintFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoyConBlueprintFunctions(UJoyConBlueprintFunctions&&); \
	NO_API UJoyConBlueprintFunctions(const UJoyConBlueprintFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoyConBlueprintFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoyConBlueprintFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoyConBlueprintFunctions)


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_PRIVATE_PROPERTY_OFFSET
#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_13_PROLOG
#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_PRIVATE_PROPERTY_OFFSET \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_RPC_WRAPPERS \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_INCLASS \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_PRIVATE_PROPERTY_OFFSET \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_INCLASS_NO_PURE_DECLS \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOYCONDRIVER_API UClass* StaticClass<class UJoyConBlueprintFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_JoyConBlueprintFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
