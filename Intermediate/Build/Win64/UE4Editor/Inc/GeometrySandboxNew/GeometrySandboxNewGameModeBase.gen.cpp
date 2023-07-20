// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandboxNew/GeometrySandboxNewGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometrySandboxNewGameModeBase() {}
// Cross Module References
	GEOMETRYSANDBOXNEW_API UClass* Z_Construct_UClass_AGeometrySandboxNewGameModeBase_NoRegister();
	GEOMETRYSANDBOXNEW_API UClass* Z_Construct_UClass_AGeometrySandboxNewGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GeometrySandboxNew();
// End Cross Module References
	void AGeometrySandboxNewGameModeBase::StaticRegisterNativesAGeometrySandboxNewGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGeometrySandboxNewGameModeBase_NoRegister()
	{
		return AGeometrySandboxNewGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGeometrySandboxNewGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometrySandboxNewGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandboxNew,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometrySandboxNewGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GeometrySandboxNewGameModeBase.h" },
		{ "ModuleRelativePath", "GeometrySandboxNewGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometrySandboxNewGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometrySandboxNewGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeometrySandboxNewGameModeBase_Statics::ClassParams = {
		&AGeometrySandboxNewGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeometrySandboxNewGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometrySandboxNewGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometrySandboxNewGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeometrySandboxNewGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeometrySandboxNewGameModeBase, 960351592);
	template<> GEOMETRYSANDBOXNEW_API UClass* StaticClass<AGeometrySandboxNewGameModeBase>()
	{
		return AGeometrySandboxNewGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometrySandboxNewGameModeBase(Z_Construct_UClass_AGeometrySandboxNewGameModeBase, &AGeometrySandboxNewGameModeBase::StaticClass, TEXT("/Script/GeometrySandboxNew"), TEXT("AGeometrySandboxNewGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometrySandboxNewGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
