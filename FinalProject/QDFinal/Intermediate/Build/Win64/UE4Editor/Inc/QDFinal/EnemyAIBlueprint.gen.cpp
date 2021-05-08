// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QDFinal/EnemyAIBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAIBlueprint() {}
// Cross Module References
	QDFINAL_API UClass* Z_Construct_UClass_UEnemyAIBlueprint_NoRegister();
	QDFINAL_API UClass* Z_Construct_UClass_UEnemyAIBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_QDFinal();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyAIBlueprint::execAccelerateTowardsPlayer)
	{
		P_GET_OBJECT(AActor,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEnemyAIBlueprint::AccelerateTowardsPlayer(Z_Param_player);
		P_NATIVE_END;
	}
	void UEnemyAIBlueprint::StaticRegisterNativesUEnemyAIBlueprint()
	{
		UClass* Class = UEnemyAIBlueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AccelerateTowardsPlayer", &UEnemyAIBlueprint::execAccelerateTowardsPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyAIBlueprint_AccelerateTowardsPlayer_Statics
	{
		struct EnemyAIBlueprint_eventAccelerateTowardsPlayer_Parms
		{
			AActor* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyAIBlueprint_AccelerateTowardsPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyAIBlueprint_eventAccelerateTowardsPlayer_Parms, player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyAIBlueprint_AccelerateTowardsPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyAIBlueprint_AccelerateTowardsPlayer_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyAIBlueprint_AccelerateTowardsPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "EnemyAI" },
		{ "ModuleRelativePath", "EnemyAIBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAIBlueprint_AccelerateTowardsPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAIBlueprint, nullptr, "AccelerateTowardsPlayer", nullptr, nullptr, sizeof(EnemyAIBlueprint_eventAccelerateTowardsPlayer_Parms), Z_Construct_UFunction_UEnemyAIBlueprint_AccelerateTowardsPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAIBlueprint_AccelerateTowardsPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyAIBlueprint_AccelerateTowardsPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAIBlueprint_AccelerateTowardsPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyAIBlueprint_AccelerateTowardsPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyAIBlueprint_AccelerateTowardsPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemyAIBlueprint_NoRegister()
	{
		return UEnemyAIBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAIBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAIBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_QDFinal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyAIBlueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyAIBlueprint_AccelerateTowardsPlayer, "AccelerateTowardsPlayer" }, // 2560213817
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAIBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyAIBlueprint.h" },
		{ "ModuleRelativePath", "EnemyAIBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAIBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAIBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAIBlueprint_Statics::ClassParams = {
		&UEnemyAIBlueprint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyAIBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAIBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyAIBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyAIBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyAIBlueprint, 3529565083);
	template<> QDFINAL_API UClass* StaticClass<UEnemyAIBlueprint>()
	{
		return UEnemyAIBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyAIBlueprint(Z_Construct_UClass_UEnemyAIBlueprint, &UEnemyAIBlueprint::StaticClass, TEXT("/Script/QDFinal"), TEXT("UEnemyAIBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAIBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
