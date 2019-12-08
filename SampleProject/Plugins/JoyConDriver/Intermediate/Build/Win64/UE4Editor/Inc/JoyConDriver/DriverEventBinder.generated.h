// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JOYCONDRIVER_DriverEventBinder_generated_h
#error "DriverEventBinder.generated.h already included, missing '#pragma once' in DriverEventBinder.h"
#endif
#define JOYCONDRIVER_DriverEventBinder_generated_h

#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_9_DELEGATE \
static inline void FNewControllerConnected_DelegateWrapper(const FMulticastScriptDelegate& NewControllerConnected) \
{ \
	NewControllerConnected.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNewControllerConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDriverEventBinder::NewControllerConnected(); \
		P_NATIVE_END; \
	}


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNewControllerConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDriverEventBinder::NewControllerConnected(); \
		P_NATIVE_END; \
	}


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDriverEventBinder(); \
	friend struct Z_Construct_UClass_UDriverEventBinder_Statics; \
public: \
	DECLARE_CLASS(UDriverEventBinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JoyConDriver"), NO_API) \
	DECLARE_SERIALIZER(UDriverEventBinder)


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDriverEventBinder(); \
	friend struct Z_Construct_UClass_UDriverEventBinder_Statics; \
public: \
	DECLARE_CLASS(UDriverEventBinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JoyConDriver"), NO_API) \
	DECLARE_SERIALIZER(UDriverEventBinder)


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDriverEventBinder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDriverEventBinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDriverEventBinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDriverEventBinder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDriverEventBinder(UDriverEventBinder&&); \
	NO_API UDriverEventBinder(const UDriverEventBinder&); \
public:


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDriverEventBinder(UDriverEventBinder&&); \
	NO_API UDriverEventBinder(const UDriverEventBinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDriverEventBinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDriverEventBinder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDriverEventBinder)


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_PRIVATE_PROPERTY_OFFSET
#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_11_PROLOG
#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_PRIVATE_PROPERTY_OFFSET \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_RPC_WRAPPERS \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_INCLASS \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_PRIVATE_PROPERTY_OFFSET \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_INCLASS_NO_PURE_DECLS \
	SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOYCONDRIVER_API UClass* StaticClass<class UDriverEventBinder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SampleProject_Plugins_JoyConDriver_Source_JoyConDriver_Public_DriverEventBinder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
