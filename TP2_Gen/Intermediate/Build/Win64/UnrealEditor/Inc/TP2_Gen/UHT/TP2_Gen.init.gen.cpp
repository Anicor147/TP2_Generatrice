// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP2_Gen_init() {}
	TP2_GEN_API UFunction* Z_Construct_UDelegateFunction_TP2_Gen_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TP2_Gen;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TP2_Gen()
	{
		if (!Z_Registration_Info_UPackage__Script_TP2_Gen.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TP2_Gen_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TP2_Gen",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x98223884,
				0x45988411,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TP2_Gen.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TP2_Gen.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TP2_Gen(Z_Construct_UPackage__Script_TP2_Gen, TEXT("/Script/TP2_Gen"), Z_Registration_Info_UPackage__Script_TP2_Gen, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x98223884, 0x45988411));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
