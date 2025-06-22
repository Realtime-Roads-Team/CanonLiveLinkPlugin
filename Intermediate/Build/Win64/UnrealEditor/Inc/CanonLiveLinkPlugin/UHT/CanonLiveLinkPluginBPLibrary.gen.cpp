// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CanonLiveLinkPluginBPLibrary.h"
#include "CanonLiveLinkPluginTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCanonLiveLinkPluginBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
CANONLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary();
CANONLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary_NoRegister();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CanonLiveLinkPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataAv ********
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataAv_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		FCanonLiveLinkPluginCameraAv ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataAv_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataAv_Parms, ReturnValue), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv, METADATA_PARAMS(0, nullptr) }; // 449872341
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataAv", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataAv_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataAv_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataAv)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCanonLiveLinkPluginCameraAv*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataAv(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataAv **********

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataCamera ****
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCamera_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		FCanonLiveLinkPluginCameraVer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCamera_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCamera_Parms, ReturnValue), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer, METADATA_PARAMS(0, nullptr) }; // 3792201613
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataCamera", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataCamera)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCanonLiveLinkPluginCameraVer*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataCamera(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataCamera ******

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataCameraCalib 
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCameraCalib_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		FCanonLiveLinkPluginCameraCalib ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCameraCalib_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCameraCalib_Parms, ReturnValue), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib, METADATA_PARAMS(0, nullptr) }; // 3143371273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataCameraCalib", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCameraCalib_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCameraCalib_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataCameraCalib)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCanonLiveLinkPluginCameraCalib*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataCameraCalib(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataCameraCalib *

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataCameraIndex 
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCameraIndex_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCameraIndex_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCameraIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataCameraIndex", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCameraIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCameraIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataCameraIndex)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataCameraIndex(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataCameraIndex *

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataColorTemperature 
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataColorTemperature_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataColorTemperature_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataColorTemperature_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataColorTemperature", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataColorTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataColorTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataColorTemperature)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataColorTemperature(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataColorTemperature 

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataCorrection 
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCorrection_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		FCanonLiveLinkPluginCameraCorrection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCorrection_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCorrection_Parms, ReturnValue), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection, METADATA_PARAMS(0, nullptr) }; // 1765025305
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataCorrection", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCorrection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataCorrection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataCorrection)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCanonLiveLinkPluginCameraCorrection*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataCorrection(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataCorrection **

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataFocalLength 
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataFocalLength_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataFocalLength_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataFocalLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataFocalLength", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataFocalLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataFocalLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataFocalLength)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataFocalLength(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataFocalLength *

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataLens ******
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataLens_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		FCanonLiveLinkPluginCameraLens ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataLens_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataLens_Parms, ReturnValue), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens, METADATA_PARAMS(0, nullptr) }; // 1514333581
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataLens", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataLens_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataLens_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataLens)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCanonLiveLinkPluginCameraLens*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataLens(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataLens ********

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataMatchMvData 
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataMatchMvData_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		FCanonLiveLinkPluginCameraMatchMvData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataMatchMvData_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataMatchMvData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData, METADATA_PARAMS(0, nullptr) }; // 3316846387
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataMatchMvData", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataMatchMvData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataMatchMvData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataMatchMvData)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCanonLiveLinkPluginCameraMatchMvData*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataMatchMvData(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataMatchMvData *

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataNd ********
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataNd_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataNd_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataNd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataNd", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataNd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataNd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataNd)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataNd(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataNd **********

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataPicture ***
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataPicture_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		FCanonLiveLinkPluginCameraPicture ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataPicture_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataPicture_Parms, ReturnValue), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture, METADATA_PARAMS(0, nullptr) }; // 3262996005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataPicture", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataPicture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataPicture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataPicture)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCanonLiveLinkPluginCameraPicture*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataPicture(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataPicture *****

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataRoll ******
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataRoll_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataRoll_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataRoll_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataRoll", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataRoll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataRoll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataRoll)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataRoll(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataRoll ********

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataSensor ****
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataSensor_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		FCanonLiveLinkPluginCameraSensor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataSensor_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataSensor_Parms, ReturnValue), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor, METADATA_PARAMS(0, nullptr) }; // 764231268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataSensor", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataSensor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataSensor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataSensor)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCanonLiveLinkPluginCameraSensor*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataSensor(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataSensor ******

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataSv ********
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataSv_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		FCanonLiveLinkPluginCameraSv ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataSv_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataSv_Parms, ReturnValue), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv, METADATA_PARAMS(0, nullptr) }; // 319166043
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataSv", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataSv_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataSv_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataSv)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCanonLiveLinkPluginCameraSv*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataSv(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataSv **********

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataTilt ******
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTilt_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTilt_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTilt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataTilt", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTilt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTilt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataTilt)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataTilt(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataTilt ********

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataTint ******
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTint_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTint_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTint_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataTint", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataTint)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataTint(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataTint ********

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataTv ********
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTv_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		FCanonLiveLinkPluginCameraTv ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTv_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTv_Parms, ReturnValue), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv, METADATA_PARAMS(0, nullptr) }; // 2440860875
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataTv", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTv_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataTv_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataTv)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCanonLiveLinkPluginCameraTv*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataTv(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataTv **********

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataVersion ***
struct Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics
{
	struct CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataVersion_Parms
	{
		FCanonLiveLinkPluginBlueprintData CV_MetaData;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Canon" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CV_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CV_MetaData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::NewProp_CV_MetaData = { "CV_MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataVersion_Parms, CV_MetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CV_MetaData_MetaData), NewProp_CV_MetaData_MetaData) }; // 729412263
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::NewProp_CV_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, nullptr, "getCanonMetaDataVersion", Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::CanonLiveLinkPluginMetadataBPLibrary_eventgetCanonMetaDataVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataVersion)
{
	P_GET_STRUCT(FCanonLiveLinkPluginBlueprintData,Z_Param_CV_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UCanonLiveLinkPluginMetadataBPLibrary::getCanonMetaDataVersion(Z_Param_CV_MetaData);
	P_NATIVE_END;
}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary Function getCanonMetaDataVersion *****

// ********** Begin Class UCanonLiveLinkPluginMetadataBPLibrary ************************************
void UCanonLiveLinkPluginMetadataBPLibrary::StaticRegisterNativesUCanonLiveLinkPluginMetadataBPLibrary()
{
	UClass* Class = UCanonLiveLinkPluginMetadataBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "getCanonMetaDataAv", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataAv },
		{ "getCanonMetaDataCamera", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataCamera },
		{ "getCanonMetaDataCameraCalib", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataCameraCalib },
		{ "getCanonMetaDataCameraIndex", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataCameraIndex },
		{ "getCanonMetaDataColorTemperature", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataColorTemperature },
		{ "getCanonMetaDataCorrection", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataCorrection },
		{ "getCanonMetaDataFocalLength", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataFocalLength },
		{ "getCanonMetaDataLens", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataLens },
		{ "getCanonMetaDataMatchMvData", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataMatchMvData },
		{ "getCanonMetaDataNd", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataNd },
		{ "getCanonMetaDataPicture", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataPicture },
		{ "getCanonMetaDataRoll", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataRoll },
		{ "getCanonMetaDataSensor", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataSensor },
		{ "getCanonMetaDataSv", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataSv },
		{ "getCanonMetaDataTilt", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataTilt },
		{ "getCanonMetaDataTint", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataTint },
		{ "getCanonMetaDataTv", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataTv },
		{ "getCanonMetaDataVersion", &UCanonLiveLinkPluginMetadataBPLibrary::execgetCanonMetaDataVersion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCanonLiveLinkPluginMetadataBPLibrary;
UClass* UCanonLiveLinkPluginMetadataBPLibrary::GetPrivateStaticClass()
{
	using TClass = UCanonLiveLinkPluginMetadataBPLibrary;
	if (!Z_Registration_Info_UClass_UCanonLiveLinkPluginMetadataBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CanonLiveLinkPluginMetadataBPLibrary"),
			Z_Registration_Info_UClass_UCanonLiveLinkPluginMetadataBPLibrary.InnerSingleton,
			StaticRegisterNativesUCanonLiveLinkPluginMetadataBPLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCanonLiveLinkPluginMetadataBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary_NoRegister()
{
	return UCanonLiveLinkPluginMetadataBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CanonLiveLinkPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataAv, "getCanonMetaDataAv" }, // 3164732418
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCamera, "getCanonMetaDataCamera" }, // 938057733
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraCalib, "getCanonMetaDataCameraCalib" }, // 2951096931
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCameraIndex, "getCanonMetaDataCameraIndex" }, // 3552235576
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataColorTemperature, "getCanonMetaDataColorTemperature" }, // 2794812391
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataCorrection, "getCanonMetaDataCorrection" }, // 2972044495
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataFocalLength, "getCanonMetaDataFocalLength" }, // 2826712852
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataLens, "getCanonMetaDataLens" }, // 3672291241
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataMatchMvData, "getCanonMetaDataMatchMvData" }, // 2636152850
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataNd, "getCanonMetaDataNd" }, // 474752143
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataPicture, "getCanonMetaDataPicture" }, // 2148610151
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataRoll, "getCanonMetaDataRoll" }, // 1579392595
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSensor, "getCanonMetaDataSensor" }, // 2482480501
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataSv, "getCanonMetaDataSv" }, // 1459562904
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTilt, "getCanonMetaDataTilt" }, // 668428690
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTint, "getCanonMetaDataTint" }, // 519580726
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataTv, "getCanonMetaDataTv" }, // 2205727472
		{ &Z_Construct_UFunction_UCanonLiveLinkPluginMetadataBPLibrary_getCanonMetaDataVersion, "getCanonMetaDataVersion" }, // 1753950273
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanonLiveLinkPluginMetadataBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary_Statics::ClassParams = {
	&UCanonLiveLinkPluginMetadataBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary()
{
	if (!Z_Registration_Info_UClass_UCanonLiveLinkPluginMetadataBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCanonLiveLinkPluginMetadataBPLibrary.OuterSingleton, Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCanonLiveLinkPluginMetadataBPLibrary.OuterSingleton;
}
UCanonLiveLinkPluginMetadataBPLibrary::UCanonLiveLinkPluginMetadataBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCanonLiveLinkPluginMetadataBPLibrary);
UCanonLiveLinkPluginMetadataBPLibrary::~UCanonLiveLinkPluginMetadataBPLibrary() {}
// ********** End Class UCanonLiveLinkPluginMetadataBPLibrary **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginBPLibrary_h__Script_CanonLiveLinkPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCanonLiveLinkPluginMetadataBPLibrary, UCanonLiveLinkPluginMetadataBPLibrary::StaticClass, TEXT("UCanonLiveLinkPluginMetadataBPLibrary"), &Z_Registration_Info_UClass_UCanonLiveLinkPluginMetadataBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanonLiveLinkPluginMetadataBPLibrary), 3543339639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginBPLibrary_h__Script_CanonLiveLinkPlugin_952969265(TEXT("/Script/CanonLiveLinkPlugin"),
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginBPLibrary_h__Script_CanonLiveLinkPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginBPLibrary_h__Script_CanonLiveLinkPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
