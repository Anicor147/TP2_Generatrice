// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_Gen/TP2_GenGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP2_GenGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TP2_GEN_API UClass* Z_Construct_UClass_ATP2_GenGameMode();
TP2_GEN_API UClass* Z_Construct_UClass_ATP2_GenGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_Gen();
// End Cross Module References

// Begin Class ATP2_GenGameMode
void ATP2_GenGameMode::StaticRegisterNativesATP2_GenGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP2_GenGameMode);
UClass* Z_Construct_UClass_ATP2_GenGameMode_NoRegister()
{
	return ATP2_GenGameMode::StaticClass();
}
struct Z_Construct_UClass_ATP2_GenGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TP2_GenGameMode.h" },
		{ "ModuleRelativePath", "TP2_GenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP2_GenGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATP2_GenGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_Gen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP2_GenGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP2_GenGameMode_Statics::ClassParams = {
	&ATP2_GenGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP2_GenGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP2_GenGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATP2_GenGameMode()
{
	if (!Z_Registration_Info_UClass_ATP2_GenGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP2_GenGameMode.OuterSingleton, Z_Construct_UClass_ATP2_GenGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATP2_GenGameMode.OuterSingleton;
}
template<> TP2_GEN_API UClass* StaticClass<ATP2_GenGameMode>()
{
	return ATP2_GenGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATP2_GenGameMode);
ATP2_GenGameMode::~ATP2_GenGameMode() {}
// End Class ATP2_GenGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATP2_GenGameMode, ATP2_GenGameMode::StaticClass, TEXT("ATP2_GenGameMode"), &Z_Registration_Info_UClass_ATP2_GenGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP2_GenGameMode), 601045565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenGameMode_h_2031607555(TEXT("/Script/TP2_Gen"),
	Z_CompiledInDeferFile_FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
