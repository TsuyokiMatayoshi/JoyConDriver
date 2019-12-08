// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLEPROJECT_SampleProjectGameModeBase_generated_h
#error "SampleProjectGameModeBase.generated.h already included, missing '#pragma once' in SampleProjectGameModeBase.h"
#endif
#define SAMPLEPROJECT_SampleProjectGameModeBase_generated_h

#define SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_RPC_WRAPPERS
#define SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASampleProjectGameModeBase(); \
	friend struct Z_Construct_UClass_ASampleProjectGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASampleProjectGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SampleProject"), NO_API) \
	DECLARE_SERIALIZER(ASampleProjectGameModeBase)


#define SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASampleProjectGameModeBase(); \
	friend struct Z_Construct_UClass_ASampleProjectGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASampleProjectGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SampleProject"), NO_API) \
	DECLARE_SERIALIZER(ASampleProjectGameModeBase)


#define SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASampleProjectGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASampleProjectGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASampleProjectGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASampleProjectGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASampleProjectGameModeBase(ASampleProjectGameModeBase&&); \
	NO_API ASampleProjectGameModeBase(const ASampleProjectGameModeBase&); \
public:


#define SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASampleProjectGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASampleProjectGameModeBase(ASampleProjectGameModeBase&&); \
	NO_API ASampleProjectGameModeBase(const ASampleProjectGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASampleProjectGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASampleProjectGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASampleProjectGameModeBase)


#define SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_12_PROLOG
#define SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_RPC_WRAPPERS \
	SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_INCLASS \
	SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	SampleProject_Source_SampleProject_SampleProjectGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLEPROJECT_API UClass* StaticClass<class ASampleProjectGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SampleProject_Source_SampleProject_SampleProjectGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
