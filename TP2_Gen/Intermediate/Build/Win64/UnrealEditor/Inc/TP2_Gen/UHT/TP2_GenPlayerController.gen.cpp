// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_Gen/TP2_GenPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP2_GenPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TP2_GEN_API UClass* Z_Construct_UClass_ATP2_GenPlayerController();
TP2_GEN_API UClass* Z_Construct_UClass_ATP2_GenPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_Gen();
// End Cross Module References

// Begin Class ATP2_GenPlayerController
void ATP2_GenPlayerController::StaticRegisterNativesATP2_GenPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP2_GenPlayerController);
UClass* Z_Construct_UClass_ATP2_GenPlayerController_NoRegister()
{
	return ATP2_GenPlayerController::StaticClass();
}
struct Z_Construct_UClass_ATP2_GenPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TP2_GenPlayerController.h" },
		{ "ModuleRelativePath", "TP2_GenPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "TP2_GenPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP2_GenPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP2_GenPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP2_GenPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP2_GenPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP2_GenPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP2_GenPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATP2_GenPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_Gen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP2_GenPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP2_GenPlayerController_Statics::ClassParams = {
	&ATP2_GenPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATP2_GenPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATP2_GenPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP2_GenPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP2_GenPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATP2_GenPlayerController()
{
	if (!Z_Registration_Info_UClass_ATP2_GenPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP2_GenPlayerController.OuterSingleton, Z_Construct_UClass_ATP2_GenPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATP2_GenPlayerController.OuterSingleton;
}
template<> TP2_GEN_API UClass* StaticClass<ATP2_GenPlayerController>()
{
	return ATP2_GenPlayerController::StaticClass();
}
ATP2_GenPlayerController::ATP2_GenPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATP2_GenPlayerController);
ATP2_GenPlayerController::~ATP2_GenPlayerController() {}
// End Class ATP2_GenPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATP2_GenPlayerController, ATP2_GenPlayerController::StaticClass, TEXT("ATP2_GenPlayerController"), &Z_Registration_Info_UClass_ATP2_GenPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP2_GenPlayerController), 3059329343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenPlayerController_h_719447950(TEXT("/Script/TP2_Gen"),
	Z_CompiledInDeferFile_FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
