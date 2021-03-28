// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcanoidC/PlayerPawn_Player_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawn_Player_Controller() {}
// Cross Module References
	ARCANOIDC_API UClass* Z_Construct_UClass_APlayerPawn_Player_Controller_NoRegister();
	ARCANOIDC_API UClass* Z_Construct_UClass_APlayerPawn_Player_Controller();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ArcanoidC();
// End Cross Module References
	DEFINE_FUNCTION(APlayerPawn_Player_Controller::execSetupInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInputComponent();
		P_NATIVE_END;
	}
	void APlayerPawn_Player_Controller::StaticRegisterNativesAPlayerPawn_Player_Controller()
	{
		UClass* Class = APlayerPawn_Player_Controller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupInputComponent", &APlayerPawn_Player_Controller::execSetupInputComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerPawn_Player_Controller_SetupInputComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_Player_Controller_SetupInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPawn_Player_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_Player_Controller_SetupInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn_Player_Controller, nullptr, "SetupInputComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawn_Player_Controller_SetupInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_Player_Controller_SetupInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawn_Player_Controller_SetupInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerPawn_Player_Controller_SetupInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerPawn_Player_Controller_NoRegister()
	{
		return APlayerPawn_Player_Controller::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPawn_Player_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPawn_Player_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcanoidC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerPawn_Player_Controller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerPawn_Player_Controller_SetupInputComponent, "SetupInputComponent" }, // 268878104
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Player_Controller_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class ABall;\n" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerPawn_Player_Controller.h" },
		{ "ModuleRelativePath", "PlayerPawn_Player_Controller.h" },
		{ "ToolTip", "class ABall;" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPawn_Player_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawn_Player_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawn_Player_Controller_Statics::ClassParams = {
		&APlayerPawn_Player_Controller::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Player_Controller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Player_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerPawn_Player_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerPawn_Player_Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerPawn_Player_Controller, 832664971);
	template<> ARCANOIDC_API UClass* StaticClass<APlayerPawn_Player_Controller>()
	{
		return APlayerPawn_Player_Controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerPawn_Player_Controller(Z_Construct_UClass_APlayerPawn_Player_Controller, &APlayerPawn_Player_Controller::StaticClass, TEXT("/Script/ArcanoidC"), TEXT("APlayerPawn_Player_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawn_Player_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
