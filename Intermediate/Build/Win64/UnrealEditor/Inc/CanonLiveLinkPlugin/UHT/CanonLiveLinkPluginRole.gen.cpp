// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CanonLiveLinkPluginRole.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCanonLiveLinkPluginRole() {}

// ********** Begin Cross Module References ********************************************************
CANONLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UCanonLiveLinkPluginRole();
CANONLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UCanonLiveLinkPluginRole_NoRegister();
LIVELINKLENS_API UClass* Z_Construct_UClass_ULiveLinkLensRole();
UPackage* Z_Construct_UPackage__Script_CanonLiveLinkPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCanonLiveLinkPluginRole *************************************************
void UCanonLiveLinkPluginRole::StaticRegisterNativesUCanonLiveLinkPluginRole()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCanonLiveLinkPluginRole;
UClass* UCanonLiveLinkPluginRole::GetPrivateStaticClass()
{
	using TClass = UCanonLiveLinkPluginRole;
	if (!Z_Registration_Info_UClass_UCanonLiveLinkPluginRole.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CanonLiveLinkPluginRole"),
			Z_Registration_Info_UClass_UCanonLiveLinkPluginRole.InnerSingleton,
			StaticRegisterNativesUCanonLiveLinkPluginRole,
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
	return Z_Registration_Info_UClass_UCanonLiveLinkPluginRole.InnerSingleton;
}
UClass* Z_Construct_UClass_UCanonLiveLinkPluginRole_NoRegister()
{
	return UCanonLiveLinkPluginRole::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCanonLiveLinkPluginRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Role associated with lens data\n */" },
#endif
		{ "DisplayName", "Canon Role" },
		{ "IncludePath", "CanonLiveLinkPluginRole.h" },
		{ "ModuleRelativePath", "Public/CanonLiveLinkPluginRole.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Role associated with lens data" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanonLiveLinkPluginRole>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCanonLiveLinkPluginRole_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkLensRole,
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanonLiveLinkPluginRole_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCanonLiveLinkPluginRole_Statics::ClassParams = {
	&UCanonLiveLinkPluginRole::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCanonLiveLinkPluginRole_Statics::Class_MetaDataParams), Z_Construct_UClass_UCanonLiveLinkPluginRole_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCanonLiveLinkPluginRole()
{
	if (!Z_Registration_Info_UClass_UCanonLiveLinkPluginRole.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCanonLiveLinkPluginRole.OuterSingleton, Z_Construct_UClass_UCanonLiveLinkPluginRole_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCanonLiveLinkPluginRole.OuterSingleton;
}
UCanonLiveLinkPluginRole::UCanonLiveLinkPluginRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCanonLiveLinkPluginRole);
UCanonLiveLinkPluginRole::~UCanonLiveLinkPluginRole() {}
// ********** End Class UCanonLiveLinkPluginRole ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginRole_h__Script_CanonLiveLinkPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCanonLiveLinkPluginRole, UCanonLiveLinkPluginRole::StaticClass, TEXT("UCanonLiveLinkPluginRole"), &Z_Registration_Info_UClass_UCanonLiveLinkPluginRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanonLiveLinkPluginRole), 2891294165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginRole_h__Script_CanonLiveLinkPlugin_1960775337(TEXT("/Script/CanonLiveLinkPlugin"),
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginRole_h__Script_CanonLiveLinkPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Public_CanonLiveLinkPluginRole_h__Script_CanonLiveLinkPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
