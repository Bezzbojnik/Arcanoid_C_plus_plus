// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcanoidC/ArcanoidCGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcanoidCGameModeBase() {}
// Cross Module References
	ARCANOIDC_API UClass* Z_Construct_UClass_AArcanoidCGameModeBase_NoRegister();
	ARCANOIDC_API UClass* Z_Construct_UClass_AArcanoidCGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ArcanoidC();
// End Cross Module References
	void AArcanoidCGameModeBase::StaticRegisterNativesAArcanoidCGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AArcanoidCGameModeBase_NoRegister()
	{
		return AArcanoidCGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AArcanoidCGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArcanoidCGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcanoidC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcanoidCGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ArcanoidCGameModeBase.h" },
		{ "ModuleRelativePath", "ArcanoidCGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArcanoidCGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArcanoidCGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArcanoidCGameModeBase_Statics::ClassParams = {
		&AArcanoidCGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AArcanoidCGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArcanoidCGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArcanoidCGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArcanoidCGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArcanoidCGameModeBase, 1312755694);
	template<> ARCANOIDC_API UClass* StaticClass<AArcanoidCGameModeBase>()
	{
		return AArcanoidCGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArcanoidCGameModeBase(Z_Construct_UClass_AArcanoidCGameModeBase, &AArcanoidCGameModeBase::StaticClass, TEXT("/Script/ArcanoidC"), TEXT("AArcanoidCGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArcanoidCGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
