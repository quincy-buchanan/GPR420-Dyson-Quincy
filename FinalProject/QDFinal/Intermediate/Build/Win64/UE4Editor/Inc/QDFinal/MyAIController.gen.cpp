// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QDFinal/MyAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAIController() {}
// Cross Module References
	QDFINAL_API UClass* Z_Construct_UClass_AMyAIController_NoRegister();
	QDFINAL_API UClass* Z_Construct_UClass_AMyAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_QDFinal();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyAIController::execOnPawnDetected)
	{
		P_GET_TARRAY(AActor*,Z_Param_DetectedPawns);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnDetected(Z_Param_DetectedPawns);
		P_NATIVE_END;
	}
	void AMyAIController::StaticRegisterNativesAMyAIController()
	{
		UClass* Class = AMyAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnDetected", &AMyAIController::execOnPawnDetected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyAIController_OnPawnDetected_Statics
	{
		struct MyAIController_eventOnPawnDetected_Parms
		{
			TArray<AActor*> DetectedPawns;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectedPawns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedPawns_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyAIController_OnPawnDetected_Statics::NewProp_DetectedPawns = { "DetectedPawns", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIController_eventOnPawnDetected_Parms, DetectedPawns), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner = { "DetectedPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyAIController_OnPawnDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyAIController_OnPawnDetected_Statics::NewProp_DetectedPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyAIController_OnPawnDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyAIController_OnPawnDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyAIController, nullptr, "OnPawnDetected", nullptr, nullptr, sizeof(MyAIController_eventOnPawnDetected_Parms), Z_Construct_UFunction_AMyAIController_OnPawnDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIController_OnPawnDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyAIController_OnPawnDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIController_OnPawnDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyAIController_OnPawnDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyAIController_OnPawnDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyAIController_NoRegister()
	{
		return AMyAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMyAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIFieldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIFieldOfView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AILoseSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AILoseSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_QDFinal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyAIController_OnPawnDetected, "OnPawnDetected" }, // 3076453275
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyAIController.h" },
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyAIController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyAIController_Statics::NewProp_SightConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::NewProp_SightConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::NewProp_AIFieldOfView_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_AIFieldOfView = { "AIFieldOfView", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyAIController, AIFieldOfView), METADATA_PARAMS(Z_Construct_UClass_AMyAIController_Statics::NewProp_AIFieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::NewProp_AIFieldOfView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::NewProp_AILoseSightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_AILoseSightRadius = { "AILoseSightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyAIController, AILoseSightRadius), METADATA_PARAMS(Z_Construct_UClass_AMyAIController_Statics::NewProp_AILoseSightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::NewProp_AILoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::NewProp_AISightAge_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_AISightAge = { "AISightAge", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyAIController, AISightAge), METADATA_PARAMS(Z_Construct_UClass_AMyAIController_Statics::NewProp_AISightAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::NewProp_AISightAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::NewProp_AISightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_AISightRadius = { "AISightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyAIController, AISightRadius), METADATA_PARAMS(Z_Construct_UClass_AMyAIController_Statics::NewProp_AISightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::NewProp_AISightRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_SightConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_AIFieldOfView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_AILoseSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_AISightAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_AISightRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyAIController_Statics::ClassParams = {
		&AMyAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyAIController, 113020927);
	template<> QDFINAL_API UClass* StaticClass<AMyAIController>()
	{
		return AMyAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyAIController(Z_Construct_UClass_AMyAIController, &AMyAIController::StaticClass, TEXT("/Script/QDFinal"), TEXT("AMyAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
