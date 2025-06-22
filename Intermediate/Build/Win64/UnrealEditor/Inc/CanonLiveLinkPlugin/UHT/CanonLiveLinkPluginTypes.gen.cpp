// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CanonLiveLinkPluginTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCanonLiveLinkPluginTypes() {}

// ********** Begin Cross Module References ********************************************************
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginStaticData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
LIVELINKLENS_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLensFrameData();
LIVELINKLENS_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLensStaticData();
UPackage* Z_Construct_UPackage__Script_CanonLiveLinkPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginStaticData ************************************
static_assert(std::is_polymorphic<FCanonLiveLinkPluginStaticData>() == std::is_polymorphic<FLiveLinkLensStaticData>(), "USTRUCT FCanonLiveLinkPluginStaticData cannot be polymorphic unless super FLiveLinkLensStaticData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginStaticData;
class UScriptStruct* FCanonLiveLinkPluginStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginStaticData, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginStaticData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginStaticData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct for static lens data\n */" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for static lens data" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginStaticData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginStaticData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	Z_Construct_UScriptStruct_FLiveLinkLensStaticData,
	&NewStructOps,
	"CanonLiveLinkPluginStaticData",
	nullptr,
	0,
	sizeof(FCanonLiveLinkPluginStaticData),
	alignof(FCanonLiveLinkPluginStaticData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginStaticData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginStaticData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginStaticData()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginStaticData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginStaticData.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginStaticData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginStaticData.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginStaticData **************************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraVer *************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraVer;
class UScriptStruct* FCanonLiveLinkPluginCameraVer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraVer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraVer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraVer"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraVer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Serial_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Serial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraVer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraVer, Model), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::NewProp_Serial = { "Serial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraVer, Serial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Serial_MetaData), NewProp_Serial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraVer, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::NewProp_Serial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraVer",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraVer),
	alignof(FCanonLiveLinkPluginCameraVer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraVer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraVer.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraVer.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraVer ***************************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraLens ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraLens;
class UScriptStruct* FCanonLiveLinkPluginCameraLens::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraLens.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraLens.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraLens"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraLens.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Serial_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Serial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraLens>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraLens, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::NewProp_Serial = { "Serial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraLens, Serial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Serial_MetaData), NewProp_Serial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraLens, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::NewProp_Serial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraLens",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraLens),
	alignof(FCanonLiveLinkPluginCameraLens),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraLens.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraLens.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraLens.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraLens **************************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraSensorSize ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize;
class UScriptStruct* FCanonLiveLinkPluginCameraSensorSize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraSensorSize"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraSensorSize>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraSensorSize, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraSensorSize, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraSensorSize",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraSensorSize),
	alignof(FCanonLiveLinkPluginCameraSensorSize),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraSensorSize ********************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraSensorPix *******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix;
class UScriptStruct* FCanonLiveLinkPluginCameraSensorPix::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraSensorPix"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraSensorPix>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraSensorPix, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraSensorPix, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraSensorPix",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraSensorPix),
	alignof(FCanonLiveLinkPluginCameraSensorPix),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraSensorPix *********************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraSensorFps *******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps;
class UScriptStruct* FCanonLiveLinkPluginCameraSensorFps::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraSensorFps"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Numerator_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Denominator_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Numerator;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Denominator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraSensorFps>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics::NewProp_Numerator = { "Numerator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraSensorFps, Numerator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Numerator_MetaData), NewProp_Numerator_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics::NewProp_Denominator = { "Denominator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraSensorFps, Denominator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Denominator_MetaData), NewProp_Denominator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics::NewProp_Numerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics::NewProp_Denominator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraSensorFps",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraSensorFps),
	alignof(FCanonLiveLinkPluginCameraSensorFps),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraSensorFps *********************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraSensor **********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensor;
class UScriptStruct* FCanonLiveLinkPluginCameraSensor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraSensor"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensor.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pix_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fps_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpTime_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraSensor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraSensor, Size), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) }; // 4009540399
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::NewProp_Pix = { "Pix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraSensor, Pix), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pix_MetaData), NewProp_Pix_MetaData) }; // 1963764695
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::NewProp_Fps = { "Fps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraSensor, Fps), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fps_MetaData), NewProp_Fps_MetaData) }; // 1556970394
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::NewProp_ExpTime = { "ExpTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraSensor, ExpTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpTime_MetaData), NewProp_ExpTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::NewProp_Pix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::NewProp_Fps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::NewProp_ExpTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraSensor",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraSensor),
	alignof(FCanonLiveLinkPluginCameraSensor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensor.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensor.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraSensor ************************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraPicturePix ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix;
class UScriptStruct* FCanonLiveLinkPluginCameraPicturePix::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraPicturePix"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraPicturePix>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraPicturePix, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraPicturePix, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraPicturePix",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraPicturePix),
	alignof(FCanonLiveLinkPluginCameraPicturePix),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraPicturePix ********************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraPicture *********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicture;
class UScriptStruct* FCanonLiveLinkPluginCameraPicture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraPicture"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicture.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pix_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fps_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scan_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timecode_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubFrame_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropFrame_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pix;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Fps;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Scan;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Timecode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubFrame;
	static void NewProp_DropFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DropFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraPicture>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_Pix = { "Pix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraPicture, Pix), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pix_MetaData), NewProp_Pix_MetaData) }; // 2760086517
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_Fps = { "Fps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraPicture, Fps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fps_MetaData), NewProp_Fps_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_Scan = { "Scan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraPicture, Scan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scan_MetaData), NewProp_Scan_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_Timecode = { "Timecode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraPicture, Timecode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timecode_MetaData), NewProp_Timecode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraPicture, SubFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubFrame_MetaData), NewProp_SubFrame_MetaData) };
void Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_DropFrame_SetBit(void* Obj)
{
	((FCanonLiveLinkPluginCameraPicture*)Obj)->DropFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_DropFrame = { "DropFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCanonLiveLinkPluginCameraPicture), &Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_DropFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropFrame_MetaData), NewProp_DropFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_Pix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_Fps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_Scan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_Timecode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_SubFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewProp_DropFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraPicture",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraPicture),
	alignof(FCanonLiveLinkPluginCameraPicture),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicture.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicture.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicture.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraPicture ***********************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraAv **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraAv;
class UScriptStruct* FCanonLiveLinkPluginCameraAv::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraAv.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraAv.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraAv"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraAv.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_F_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_F;
	static const UECodeGen_Private::FIntPropertyParams NewProp_T;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraAv>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraAv, F), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_F_MetaData), NewProp_F_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraAv, T), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_MetaData), NewProp_T_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraAv, Shape), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::NewProp_F,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::NewProp_T,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::NewProp_Shape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraAv",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraAv),
	alignof(FCanonLiveLinkPluginCameraAv),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraAv.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraAv.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraAv.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraAv ****************************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraTv **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraTv;
class UScriptStruct* FCanonLiveLinkPluginCameraTv::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraTv.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraTv.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraTv"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraTv.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraTv>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraTv, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angle_MetaData), NewProp_Angle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv_Statics::NewProp_Angle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraTv",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraTv),
	alignof(FCanonLiveLinkPluginCameraTv),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraTv.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraTv.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraTv.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraTv ****************************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraSv **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSv;
class UScriptStruct* FCanonLiveLinkPluginCameraSv::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSv.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSv.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraSv"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSv.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iso_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iso;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraSv>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv_Statics::NewProp_Iso = { "Iso", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraSv, Iso), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iso_MetaData), NewProp_Iso_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv_Statics::NewProp_Iso,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraSv",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraSv),
	alignof(FCanonLiveLinkPluginCameraSv),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSv.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSv.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSv.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraSv ****************************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraMatchMvData *****************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData;
class UScriptStruct* FCanonLiveLinkPluginCameraMatchMvData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraMatchMvData"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchMvDataX_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchMvDataY_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchMvDataZ_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchMvDataPicth_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchMvDataYaw_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchMvDataRoll_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MatchMvDataX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MatchMvDataY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MatchMvDataZ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MatchMvDataPicth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MatchMvDataYaw;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MatchMvDataRoll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraMatchMvData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::NewProp_MatchMvDataX = { "MatchMvDataX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMatchMvData, MatchMvDataX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchMvDataX_MetaData), NewProp_MatchMvDataX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::NewProp_MatchMvDataY = { "MatchMvDataY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMatchMvData, MatchMvDataY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchMvDataY_MetaData), NewProp_MatchMvDataY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::NewProp_MatchMvDataZ = { "MatchMvDataZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMatchMvData, MatchMvDataZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchMvDataZ_MetaData), NewProp_MatchMvDataZ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::NewProp_MatchMvDataPicth = { "MatchMvDataPicth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMatchMvData, MatchMvDataPicth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchMvDataPicth_MetaData), NewProp_MatchMvDataPicth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::NewProp_MatchMvDataYaw = { "MatchMvDataYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMatchMvData, MatchMvDataYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchMvDataYaw_MetaData), NewProp_MatchMvDataYaw_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::NewProp_MatchMvDataRoll = { "MatchMvDataRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMatchMvData, MatchMvDataRoll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchMvDataRoll_MetaData), NewProp_MatchMvDataRoll_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::NewProp_MatchMvDataX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::NewProp_MatchMvDataY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::NewProp_MatchMvDataZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::NewProp_MatchMvDataPicth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::NewProp_MatchMvDataYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::NewProp_MatchMvDataRoll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraMatchMvData",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraMatchMvData),
	alignof(FCanonLiveLinkPluginCameraMatchMvData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraMatchMvData *******************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraCorrection ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCorrection;
class UScriptStruct* FCanonLiveLinkPluginCameraCorrection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCorrection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCorrection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraCorrection"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCorrection.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distortion_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shading_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChromaAberration_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusBreathing_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Distortion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Shading;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChromaAberration;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FocusBreathing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraCorrection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::NewProp_Distortion = { "Distortion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCorrection, Distortion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distortion_MetaData), NewProp_Distortion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::NewProp_Shading = { "Shading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCorrection, Shading), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shading_MetaData), NewProp_Shading_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::NewProp_ChromaAberration = { "ChromaAberration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCorrection, ChromaAberration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChromaAberration_MetaData), NewProp_ChromaAberration_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::NewProp_FocusBreathing = { "FocusBreathing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCorrection, FocusBreathing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusBreathing_MetaData), NewProp_FocusBreathing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::NewProp_Distortion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::NewProp_Shading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::NewProp_ChromaAberration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::NewProp_FocusBreathing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraCorrection",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraCorrection),
	alignof(FCanonLiveLinkPluginCameraCorrection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCorrection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCorrection.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCorrection.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraCorrection ********************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraCalibSensorSize *************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize;
class UScriptStruct* FCanonLiveLinkPluginCameraCalibSensorSize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraCalibSensorSize"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraCalibSensorSize>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibSensorSize, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibSensorSize, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraCalibSensorSize",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraCalibSensorSize),
	alignof(FCanonLiveLinkPluginCameraCalibSensorSize),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraCalibSensorSize ***************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraCalibFlPix ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix;
class UScriptStruct* FCanonLiveLinkPluginCameraCalibFlPix::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraCalibFlPix"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fx_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fy_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Fx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Fy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraCalibFlPix>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics::NewProp_Fx = { "Fx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibFlPix, Fx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fx_MetaData), NewProp_Fx_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics::NewProp_Fy = { "Fy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibFlPix, Fy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fy_MetaData), NewProp_Fy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics::NewProp_Fx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics::NewProp_Fy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraCalibFlPix",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraCalibFlPix),
	alignof(FCanonLiveLinkPluginCameraCalibFlPix),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraCalibFlPix ********************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraCalibCenterPix **************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix;
class UScriptStruct* FCanonLiveLinkPluginCameraCalibCenterPix::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraCalibCenterPix"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cx_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cy_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraCalibCenterPix>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics::NewProp_Cx = { "Cx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibCenterPix, Cx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cx_MetaData), NewProp_Cx_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics::NewProp_Cy = { "Cy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibCenterPix, Cy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cy_MetaData), NewProp_Cy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics::NewProp_Cx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics::NewProp_Cy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraCalibCenterPix",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraCalibCenterPix),
	alignof(FCanonLiveLinkPluginCameraCalibCenterPix),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraCalibCenterPix ****************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraCalibKn *********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn;
class UScriptStruct* FCanonLiveLinkPluginCameraCalibKn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraCalibKn"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_K1_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_K2_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_K3_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_K4_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_K5_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_K6_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K3;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K4;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K5;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K6;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraCalibKn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::NewProp_K1 = { "K1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibKn, K1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_K1_MetaData), NewProp_K1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::NewProp_K2 = { "K2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibKn, K2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_K2_MetaData), NewProp_K2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::NewProp_K3 = { "K3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibKn, K3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_K3_MetaData), NewProp_K3_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::NewProp_K4 = { "K4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibKn, K4), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_K4_MetaData), NewProp_K4_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::NewProp_K5 = { "K5", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibKn, K5), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_K5_MetaData), NewProp_K5_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::NewProp_K6 = { "K6", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibKn, K6), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_K6_MetaData), NewProp_K6_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::NewProp_K1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::NewProp_K2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::NewProp_K3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::NewProp_K4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::NewProp_K5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::NewProp_K6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraCalibKn",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraCalibKn),
	alignof(FCanonLiveLinkPluginCameraCalibKn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraCalibKn ***********************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraCalibPn *********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn;
class UScriptStruct* FCanonLiveLinkPluginCameraCalibPn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraCalibPn"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_P1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_P2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraCalibPn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibPn, P1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P1_MetaData), NewProp_P1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibPn, P2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2_MetaData), NewProp_P2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics::NewProp_P1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics::NewProp_P2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraCalibPn",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraCalibPn),
	alignof(FCanonLiveLinkPluginCameraCalibPn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraCalibPn ***********************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraCalibDistortion *************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion;
class UScriptStruct* FCanonLiveLinkPluginCameraCalibDistortion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraCalibDistortion"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Kn_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pn_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Kn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraCalibDistortion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics::NewProp_Kn = { "Kn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibDistortion, Kn), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Kn_MetaData), NewProp_Kn_MetaData) }; // 2425809405
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics::NewProp_Pn = { "Pn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibDistortion, Pn), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pn_MetaData), NewProp_Pn_MetaData) }; // 3600651963
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics::NewProp_Kn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics::NewProp_Pn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraCalibDistortion",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraCalibDistortion),
	alignof(FCanonLiveLinkPluginCameraCalibDistortion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraCalibDistortion ***************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraCalibOpenCV *****************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV;
class UScriptStruct* FCanonLiveLinkPluginCameraCalibOpenCV::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraCalibOpenCV"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlPix_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterPix_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distortion_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FlPix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterPix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Distortion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraCalibOpenCV>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::NewProp_FlPix = { "FlPix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibOpenCV, FlPix), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlPix_MetaData), NewProp_FlPix_MetaData) }; // 1179547634
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::NewProp_CenterPix = { "CenterPix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibOpenCV, CenterPix), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterPix_MetaData), NewProp_CenterPix_MetaData) }; // 2566291299
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::NewProp_Distortion = { "Distortion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalibOpenCV, Distortion), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distortion_MetaData), NewProp_Distortion_MetaData) }; // 2432515608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::NewProp_FlPix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::NewProp_CenterPix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::NewProp_Distortion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraCalibOpenCV",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraCalibOpenCV),
	alignof(FCanonLiveLinkPluginCameraCalibOpenCV),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraCalibOpenCV *******************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraCalib ***********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalib;
class UScriptStruct* FCanonLiveLinkPluginCameraCalib::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalib.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalib.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraCalib"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalib.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensorSize_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlOutImg_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenCV_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SensorSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlOutImg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpenCV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraCalib>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::NewProp_SensorSize = { "SensorSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalib, SensorSize), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensorSize_MetaData), NewProp_SensorSize_MetaData) }; // 931207668
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::NewProp_FlOutImg = { "FlOutImg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalib, FlOutImg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlOutImg_MetaData), NewProp_FlOutImg_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::NewProp_OpenCV = { "OpenCV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraCalib, OpenCV), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenCV_MetaData), NewProp_OpenCV_MetaData) }; // 147826688
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::NewProp_SensorSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::NewProp_FlOutImg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::NewProp_OpenCV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraCalib",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraCalib),
	alignof(FCanonLiveLinkPluginCameraCalib),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalib.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalib.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalib.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraCalib *************************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginCameraMetaData ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMetaData;
class UScriptStruct* FCanonLiveLinkPluginCameraMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginCameraMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMetaData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// version\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "version" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// camera\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lens_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// lens\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "lens" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sensor_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//sensor\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "sensor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Picture_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//picture\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "picture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraIndex_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//cameraIdx\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "cameraIdx" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Av_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//av\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "av" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tv_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//tv\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "tv" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sv_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//sv\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "sv" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nd_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//nd\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "nd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//focalLength\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "focalLength" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusDistance_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//focusDistance\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "focusDistance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchMvData_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//matchMvData\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "matchMvData" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tilt_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//tilt\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "tilt" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//roll\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "roll" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorTemperature_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//colorTemp\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "colorTemp" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//tint\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "tint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Correction_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//correction\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "correction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntrancePupil_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//entPupilPos\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "entPupilPos" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraCalib_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//cameraCalib\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "cameraCalib" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Lens;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sensor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Picture;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CameraIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Av;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tv;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sv;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Nd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MatchMvData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tilt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Roll;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ColorTemperature;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Correction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EntrancePupil;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraCalib;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginCameraMetaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, Camera), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) }; // 3792201613
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Lens = { "Lens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, Lens), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lens_MetaData), NewProp_Lens_MetaData) }; // 1514333581
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Sensor = { "Sensor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, Sensor), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sensor_MetaData), NewProp_Sensor_MetaData) }; // 764231268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Picture = { "Picture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, Picture), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Picture_MetaData), NewProp_Picture_MetaData) }; // 3262996005
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_CameraIndex = { "CameraIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, CameraIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraIndex_MetaData), NewProp_CameraIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Av = { "Av", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, Av), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Av_MetaData), NewProp_Av_MetaData) }; // 449872341
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Tv = { "Tv", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, Tv), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tv_MetaData), NewProp_Tv_MetaData) }; // 2440860875
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Sv = { "Sv", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, Sv), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sv_MetaData), NewProp_Sv_MetaData) }; // 319166043
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Nd = { "Nd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, Nd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nd_MetaData), NewProp_Nd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, FocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocalLength_MetaData), NewProp_FocalLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_FocusDistance = { "FocusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, FocusDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusDistance_MetaData), NewProp_FocusDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_MatchMvData = { "MatchMvData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, MatchMvData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchMvData_MetaData), NewProp_MatchMvData_MetaData) }; // 3316846387
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Tilt = { "Tilt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, Tilt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tilt_MetaData), NewProp_Tilt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, Roll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roll_MetaData), NewProp_Roll_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_ColorTemperature = { "ColorTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, ColorTemperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorTemperature_MetaData), NewProp_ColorTemperature_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, Tint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tint_MetaData), NewProp_Tint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Correction = { "Correction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, Correction), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Correction_MetaData), NewProp_Correction_MetaData) }; // 1765025305
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_EntrancePupil = { "EntrancePupil", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, EntrancePupil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntrancePupil_MetaData), NewProp_EntrancePupil_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_CameraCalib = { "CameraCalib", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginCameraMetaData, CameraCalib), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraCalib_MetaData), NewProp_CameraCalib_MetaData) }; // 3143371273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Lens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Sensor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Picture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_CameraIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Av,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Tv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Sv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Nd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_FocalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_FocusDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_MatchMvData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Tilt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Roll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_ColorTemperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_Correction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_EntrancePupil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewProp_CameraCalib,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginCameraMetaData",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginCameraMetaData),
	alignof(FCanonLiveLinkPluginCameraMetaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMetaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMetaData.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMetaData.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginCameraMetaData **********************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginFrameData *************************************
static_assert(std::is_polymorphic<FCanonLiveLinkPluginFrameData>() == std::is_polymorphic<FLiveLinkLensFrameData>(), "USTRUCT FCanonLiveLinkPluginFrameData cannot be polymorphic unless super FLiveLinkLensFrameData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginFrameData;
class UScriptStruct* FCanonLiveLinkPluginFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginFrameData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct for dynamic (per-frame) lens data\n */" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for dynamic (per-frame) lens data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntrancePupil_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Entrance Pupil Position of the camera\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entrance Pupil Position of the camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShutterSpeed_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shutter Speed of the camera in terms of seconds\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shutter Speed of the camera in terms of seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMetaData_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional CameraMetaData\n" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional CameraMetaData" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EntrancePupil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShutterSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginFrameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::NewProp_EntrancePupil = { "EntrancePupil", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginFrameData, EntrancePupil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntrancePupil_MetaData), NewProp_EntrancePupil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::NewProp_ShutterSpeed = { "ShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginFrameData, ShutterSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShutterSpeed_MetaData), NewProp_ShutterSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::NewProp_CameraMetaData = { "CameraMetaData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginFrameData, CameraMetaData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMetaData_MetaData), NewProp_CameraMetaData_MetaData) }; // 1572773922
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::NewProp_EntrancePupil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::NewProp_ShutterSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::NewProp_CameraMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	Z_Construct_UScriptStruct_FLiveLinkLensFrameData,
	&NewStructOps,
	"CanonLiveLinkPluginFrameData",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginFrameData),
	alignof(FCanonLiveLinkPluginFrameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginFrameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginFrameData.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginFrameData.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginFrameData ***************************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginBlueprintData *********************************
static_assert(std::is_polymorphic<FCanonLiveLinkPluginBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FCanonLiveLinkPluginBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginBlueprintData;
class UScriptStruct* FCanonLiveLinkPluginBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginBlueprintData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Facility structure to handle lens data in blueprint\n */" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Facility structure to handle lens data in blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Static data that should not change every frame */" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static data that should not change every frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic data that can change every frame  */" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic data that can change every frame" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginBlueprintData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginBlueprintData, StaticData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginStaticData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticData_MetaData), NewProp_StaticData_MetaData) }; // 278504156
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCanonLiveLinkPluginBlueprintData, FrameData), Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameData_MetaData), NewProp_FrameData_MetaData) }; // 3275924128
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics::NewProp_StaticData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics::NewProp_FrameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
	&NewStructOps,
	"CanonLiveLinkPluginBlueprintData",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginBlueprintData),
	alignof(FCanonLiveLinkPluginBlueprintData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginBlueprintData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginBlueprintData.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginBlueprintData ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginTypes_h__Script_CanonLiveLinkPlugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCanonLiveLinkPluginStaticData::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginStaticData_Statics::NewStructOps, TEXT("CanonLiveLinkPluginStaticData"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginStaticData), 278504156U) },
		{ FCanonLiveLinkPluginCameraVer::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraVer_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraVer"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraVer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraVer), 3792201613U) },
		{ FCanonLiveLinkPluginCameraLens::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraLens_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraLens"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraLens, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraLens), 1514333581U) },
		{ FCanonLiveLinkPluginCameraSensorSize::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraSensorSize"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorSize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraSensorSize), 4009540399U) },
		{ FCanonLiveLinkPluginCameraSensorPix::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraSensorPix"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorPix, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraSensorPix), 1963764695U) },
		{ FCanonLiveLinkPluginCameraSensorFps::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraSensorFps"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensorFps, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraSensorFps), 1556970394U) },
		{ FCanonLiveLinkPluginCameraSensor::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSensor_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraSensor"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSensor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraSensor), 764231268U) },
		{ FCanonLiveLinkPluginCameraPicturePix::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraPicturePix"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicturePix, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraPicturePix), 2760086517U) },
		{ FCanonLiveLinkPluginCameraPicture::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraPicture_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraPicture"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraPicture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraPicture), 3262996005U) },
		{ FCanonLiveLinkPluginCameraAv::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraAv_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraAv"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraAv, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraAv), 449872341U) },
		{ FCanonLiveLinkPluginCameraTv::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraTv_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraTv"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraTv, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraTv), 2440860875U) },
		{ FCanonLiveLinkPluginCameraSv::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraSv_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraSv"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraSv, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraSv), 319166043U) },
		{ FCanonLiveLinkPluginCameraMatchMvData::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraMatchMvData"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMatchMvData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraMatchMvData), 3316846387U) },
		{ FCanonLiveLinkPluginCameraCorrection::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCorrection_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraCorrection"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCorrection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraCorrection), 1765025305U) },
		{ FCanonLiveLinkPluginCameraCalibSensorSize::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraCalibSensorSize"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibSensorSize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraCalibSensorSize), 931207668U) },
		{ FCanonLiveLinkPluginCameraCalibFlPix::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraCalibFlPix"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibFlPix, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraCalibFlPix), 1179547634U) },
		{ FCanonLiveLinkPluginCameraCalibCenterPix::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraCalibCenterPix"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibCenterPix, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraCalibCenterPix), 2566291299U) },
		{ FCanonLiveLinkPluginCameraCalibKn::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraCalibKn"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibKn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraCalibKn), 2425809405U) },
		{ FCanonLiveLinkPluginCameraCalibPn::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraCalibPn"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibPn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraCalibPn), 3600651963U) },
		{ FCanonLiveLinkPluginCameraCalibDistortion::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraCalibDistortion"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibDistortion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraCalibDistortion), 2432515608U) },
		{ FCanonLiveLinkPluginCameraCalibOpenCV::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraCalibOpenCV"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalibOpenCV, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraCalibOpenCV), 147826688U) },
		{ FCanonLiveLinkPluginCameraCalib::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraCalib_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraCalib"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraCalib, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraCalib), 3143371273U) },
		{ FCanonLiveLinkPluginCameraMetaData::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginCameraMetaData_Statics::NewStructOps, TEXT("CanonLiveLinkPluginCameraMetaData"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginCameraMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginCameraMetaData), 1572773922U) },
		{ FCanonLiveLinkPluginFrameData::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginFrameData_Statics::NewStructOps, TEXT("CanonLiveLinkPluginFrameData"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginFrameData), 3275924128U) },
		{ FCanonLiveLinkPluginBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginBlueprintData_Statics::NewStructOps, TEXT("CanonLiveLinkPluginBlueprintData"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginBlueprintData), 729412263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginTypes_h__Script_CanonLiveLinkPlugin_323221971(TEXT("/Script/CanonLiveLinkPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginTypes_h__Script_CanonLiveLinkPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginTypes_h__Script_CanonLiveLinkPlugin_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
