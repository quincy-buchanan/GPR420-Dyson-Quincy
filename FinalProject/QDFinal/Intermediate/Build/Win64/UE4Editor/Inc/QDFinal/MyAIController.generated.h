// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef QDFINAL_MyAIController_generated_h
#error "MyAIController.generated.h already included, missing '#pragma once' in MyAIController.h"
#endif
#define QDFINAL_MyAIController_generated_h

#define QDFinal_Source_QDFinal_MyAIController_h_15_SPARSE_DATA
#define QDFinal_Source_QDFinal_MyAIController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnDetected);


#define QDFinal_Source_QDFinal_MyAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnDetected);


#define QDFinal_Source_QDFinal_MyAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyAIController(); \
	friend struct Z_Construct_UClass_AMyAIController_Statics; \
public: \
	DECLARE_CLASS(AMyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QDFinal"), NO_API) \
	DECLARE_SERIALIZER(AMyAIController)


#define QDFinal_Source_QDFinal_MyAIController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyAIController(); \
	friend struct Z_Construct_UClass_AMyAIController_Statics; \
public: \
	DECLARE_CLASS(AMyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QDFinal"), NO_API) \
	DECLARE_SERIALIZER(AMyAIController)


#define QDFinal_Source_QDFinal_MyAIController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyAIController(AMyAIController&&); \
	NO_API AMyAIController(const AMyAIController&); \
public:


#define QDFinal_Source_QDFinal_MyAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyAIController(AMyAIController&&); \
	NO_API AMyAIController(const AMyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyAIController)


#define QDFinal_Source_QDFinal_MyAIController_h_15_PRIVATE_PROPERTY_OFFSET
#define QDFinal_Source_QDFinal_MyAIController_h_12_PROLOG
#define QDFinal_Source_QDFinal_MyAIController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QDFinal_Source_QDFinal_MyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	QDFinal_Source_QDFinal_MyAIController_h_15_SPARSE_DATA \
	QDFinal_Source_QDFinal_MyAIController_h_15_RPC_WRAPPERS \
	QDFinal_Source_QDFinal_MyAIController_h_15_INCLASS \
	QDFinal_Source_QDFinal_MyAIController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QDFinal_Source_QDFinal_MyAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QDFinal_Source_QDFinal_MyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	QDFinal_Source_QDFinal_MyAIController_h_15_SPARSE_DATA \
	QDFinal_Source_QDFinal_MyAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	QDFinal_Source_QDFinal_MyAIController_h_15_INCLASS_NO_PURE_DECLS \
	QDFinal_Source_QDFinal_MyAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QDFINAL_API UClass* StaticClass<class AMyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QDFinal_Source_QDFinal_MyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
