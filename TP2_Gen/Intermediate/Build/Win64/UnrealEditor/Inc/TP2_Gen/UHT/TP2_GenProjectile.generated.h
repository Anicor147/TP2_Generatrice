// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TP2_GenProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TP2_GEN_TP2_GenProjectile_generated_h
#error "TP2_GenProjectile.generated.h already included, missing '#pragma once' in TP2_GenProjectile.h"
#endif
#define TP2_GEN_TP2_GenProjectile_generated_h

#define FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP2_GenProjectile(); \
	friend struct Z_Construct_UClass_ATP2_GenProjectile_Statics; \
public: \
	DECLARE_CLASS(ATP2_GenProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP2_Gen"), NO_API) \
	DECLARE_SERIALIZER(ATP2_GenProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATP2_GenProjectile(ATP2_GenProjectile&&); \
	ATP2_GenProjectile(const ATP2_GenProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP2_GenProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP2_GenProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP2_GenProjectile) \
	NO_API virtual ~ATP2_GenProjectile();


#define FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenProjectile_h_12_PROLOG
#define FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TP2_GEN_API UClass* StaticClass<class ATP2_GenProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealGame_TP2_Generatrice_TP2_Gen_Source_TP2_Gen_TP2_GenProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
