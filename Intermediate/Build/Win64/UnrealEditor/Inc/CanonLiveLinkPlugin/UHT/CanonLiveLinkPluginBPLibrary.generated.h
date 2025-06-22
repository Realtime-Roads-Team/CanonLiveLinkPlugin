// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CanonLiveLinkPluginBPLibrary.h"

#ifdef CANONLIVELINKPLUGIN_CanonLiveLinkPluginBPLibrary_generated_h
#error "CanonLiveLinkPluginBPLibrary.generated.h already included, missing '#pragma once' in CanonLiveLinkPluginBPLibrary.h"
#endif
#define CANONLIVELINKPLUGIN_CanonLiveLinkPluginBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FCanonLiveLinkPluginBlueprintData;
struct FCanonLiveLinkPluginCameraAv;
struct FCanonLiveLinkPluginCameraCalib;
struct FCanonLiveLinkPluginCameraCorrection;
struct FCanonLiveLinkPluginCameraLens;
struct FCanonLiveLinkPluginCameraMatchMvData;
struct FCanonLiveLinkPluginCameraPicture;
struct FCanonLiveLinkPluginCameraSensor;
struct FCanonLiveLinkPluginCameraSv;
struct FCanonLiveLinkPluginCameraTv;
struct FCanonLiveLinkPluginCameraVer;

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary ************************************
#define FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginBPLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execgetCanonMetaDataCameraCalib); \
	DECLARE_FUNCTION(execgetCanonMetaDataCorrection); \
	DECLARE_FUNCTION(execgetCanonMetaDataTint); \
	DECLARE_FUNCTION(execgetCanonMetaDataColorTemperature); \
	DECLARE_FUNCTION(execgetCanonMetaDataRoll); \
	DECLARE_FUNCTION(execgetCanonMetaDataTilt); \
	DECLARE_FUNCTION(execgetCanonMetaDataMatchMvData); \
	DECLARE_FUNCTION(execgetCanonMetaDataFocalLength); \
	DECLARE_FUNCTION(execgetCanonMetaDataNd); \
	DECLARE_FUNCTION(execgetCanonMetaDataSv); \
	DECLARE_FUNCTION(execgetCanonMetaDataTv); \
	DECLARE_FUNCTION(execgetCanonMetaDataAv); \
	DECLARE_FUNCTION(execgetCanonMetaDataCameraIndex); \
	DECLARE_FUNCTION(execgetCanonMetaDataPicture); \
	DECLARE_FUNCTION(execgetCanonMetaDataSensor); \
	DECLARE_FUNCTION(execgetCanonMetaDataLens); \
	DECLARE_FUNCTION(execgetCanonMetaDataCamera); \
	DECLARE_FUNCTION(execgetCanonMetaDataVersion);


CANONLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary_NoRegister();

#define FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginBPLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCanonLiveLinkPluginMetadataBPLibrary(); \
	friend struct Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CANONLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UCanonLiveLinkPluginMetadataBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CanonLiveLinkPlugin"), Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UCanonLiveLinkPluginMetadataBPLibrary)


#define FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginBPLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanonLiveLinkPluginMetadataBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCanonLiveLinkPluginMetadataBPLibrary(UCanonLiveLinkPluginMetadataBPLibrary&&) = delete; \
	UCanonLiveLinkPluginMetadataBPLibrary(const UCanonLiveLinkPluginMetadataBPLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanonLiveLinkPluginMetadataBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanonLiveLinkPluginMetadataBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanonLiveLinkPluginMetadataBPLibrary) \
	NO_API virtual ~UCanonLiveLinkPluginMetadataBPLibrary();


#define FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginBPLibrary_h_10_PROLOG
#define FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginBPLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginBPLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginBPLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginBPLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCanonLiveLinkPluginMetadataBPLibrary;

// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
