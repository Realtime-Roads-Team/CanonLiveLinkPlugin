// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CanonLiveLinkPluginController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCanonLiveLinkPluginController() {}

// ********** Begin Cross Module References ********************************************************
CANONLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UCanonLiveLinkPluginController();
CANONLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UCanonLiveLinkPluginController_NoRegister();
CANONLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase();
UPackage* Z_Construct_UPackage__Script_CanonLiveLinkPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCanonLiveLinkPluginControllerUpdateFlags *************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags;
class UScriptStruct* FCanonLiveLinkPluginControllerUpdateFlags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags, (UObject*)Z_Construct_UPackage__Script_CanonLiveLinkPlugin(), TEXT("CanonLiveLinkPluginControllerUpdateFlags"));
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Flags to control whether incoming values from LiveLink Canon FrameData should be applied or not */" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flags to control whether incoming values from LiveLink Canon FrameData should be applied or not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyShutterSpeed_MetaData[] = {
		{ "Category", "Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to apply Shutter Speed if it's available in LiveLink FrameData */" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to apply Shutter Speed if it's available in LiveLink FrameData" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bApplyShutterSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyShutterSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanonLiveLinkPluginControllerUpdateFlags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics::NewProp_bApplyShutterSpeed_SetBit(void* Obj)
{
	((FCanonLiveLinkPluginControllerUpdateFlags*)Obj)->bApplyShutterSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics::NewProp_bApplyShutterSpeed = { "bApplyShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCanonLiveLinkPluginControllerUpdateFlags), &Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics::NewProp_bApplyShutterSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyShutterSpeed_MetaData), NewProp_bApplyShutterSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics::NewProp_bApplyShutterSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
	nullptr,
	&NewStructOps,
	"CanonLiveLinkPluginControllerUpdateFlags",
	Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics::PropPointers),
	sizeof(FCanonLiveLinkPluginControllerUpdateFlags),
	alignof(FCanonLiveLinkPluginControllerUpdateFlags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags()
{
	if (!Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags.InnerSingleton, Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags.InnerSingleton;
}
// ********** End ScriptStruct FCanonLiveLinkPluginControllerUpdateFlags ***************************

// ********** Begin Class UCanonLiveLinkPluginController *******************************************
void UCanonLiveLinkPluginController::StaticRegisterNativesUCanonLiveLinkPluginController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCanonLiveLinkPluginController;
UClass* UCanonLiveLinkPluginController::GetPrivateStaticClass()
{
	using TClass = UCanonLiveLinkPluginController;
	if (!Z_Registration_Info_UClass_UCanonLiveLinkPluginController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CanonLiveLinkPluginController"),
			Z_Registration_Info_UClass_UCanonLiveLinkPluginController.InnerSingleton,
			StaticRegisterNativesUCanonLiveLinkPluginController,
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
	return Z_Registration_Info_UClass_UCanonLiveLinkPluginController.InnerSingleton;
}
UClass* Z_Construct_UClass_UCanonLiveLinkPluginController_NoRegister()
{
	return UCanonLiveLinkPluginController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCanonLiveLinkPluginController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * LiveLink Controller for the CanonRole to drive lens distortion data\n */" },
#endif
		{ "IncludePath", "CanonLiveLinkPluginController.h" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LiveLink Controller for the CanonRole to drive lens distortion data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFlags_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used to control which data from LiveLink is actually applied to camera */" },
#endif
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to control which data from LiveLink is actually applied to camera" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanonLiveLinkPluginController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCanonLiveLinkPluginController_Statics::NewProp_UpdateFlags = { "UpdateFlags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanonLiveLinkPluginController, UpdateFlags), Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateFlags_MetaData), NewProp_UpdateFlags_MetaData) }; // 2697554178
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCanonLiveLinkPluginController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanonLiveLinkPluginController_Statics::NewProp_UpdateFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanonLiveLinkPluginController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCanonLiveLinkPluginController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkControllerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanonLiveLinkPluginController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCanonLiveLinkPluginController_Statics::ClassParams = {
	&UCanonLiveLinkPluginController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCanonLiveLinkPluginController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCanonLiveLinkPluginController_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCanonLiveLinkPluginController_Statics::Class_MetaDataParams), Z_Construct_UClass_UCanonLiveLinkPluginController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCanonLiveLinkPluginController()
{
	if (!Z_Registration_Info_UClass_UCanonLiveLinkPluginController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCanonLiveLinkPluginController.OuterSingleton, Z_Construct_UClass_UCanonLiveLinkPluginController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCanonLiveLinkPluginController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCanonLiveLinkPluginController);
UCanonLiveLinkPluginController::~UCanonLiveLinkPluginController() {}
// ********** End Class UCanonLiveLinkPluginController *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginController_h__Script_CanonLiveLinkPlugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCanonLiveLinkPluginControllerUpdateFlags::StaticStruct, Z_Construct_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags_Statics::NewStructOps, TEXT("CanonLiveLinkPluginControllerUpdateFlags"), &Z_Registration_Info_UScriptStruct_FCanonLiveLinkPluginControllerUpdateFlags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanonLiveLinkPluginControllerUpdateFlags), 2697554178U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCanonLiveLinkPluginController, UCanonLiveLinkPluginController::StaticClass, TEXT("UCanonLiveLinkPluginController"), &Z_Registration_Info_UClass_UCanonLiveLinkPluginController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanonLiveLinkPluginController), 1068114183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginController_h__Script_CanonLiveLinkPlugin_3777043067(TEXT("/Script/CanonLiveLinkPlugin"),
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginController_h__Script_CanonLiveLinkPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginController_h__Script_CanonLiveLinkPlugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginController_h__Script_CanonLiveLinkPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginController_h__Script_CanonLiveLinkPlugin_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
