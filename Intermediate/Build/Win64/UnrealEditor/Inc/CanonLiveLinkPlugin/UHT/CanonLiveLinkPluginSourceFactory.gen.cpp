// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CanonLiveLinkPluginSourceFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCanonLiveLinkPluginSourceFactory() {}

// ********** Begin Cross Module References ********************************************************
CANONLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UCanonLiveLinkPluginSourceFactory();
CANONLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UCanonLiveLinkPluginSourceFactory_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
UPackage* Z_Construct_UPackage__Script_CanonLiveLinkPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCanonLiveLinkPluginSourceFactory ****************************************
void UCanonLiveLinkPluginSourceFactory::StaticRegisterNativesUCanonLiveLinkPluginSourceFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCanonLiveLinkPluginSourceFactory;
UClass* UCanonLiveLinkPluginSourceFactory::GetPrivateStaticClass()
{
	using TClass = UCanonLiveLinkPluginSourceFactory;
	if (!Z_Registration_Info_UClass_UCanonLiveLinkPluginSourceFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CanonLiveLinkPluginSourceFactory"),
			Z_Registration_Info_UClass_UCanonLiveLinkPluginSourceFactory.InnerSingleton,
			StaticRegisterNativesUCanonLiveLinkPluginSourceFactory,
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
	return Z_Registration_Info_UClass_UCanonLiveLinkPluginSourceFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UCanonLiveLinkPluginSourceFactory_NoRegister()
{
	return UCanonLiveLinkPluginSourceFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCanonLiveLinkPluginSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CanonLiveLinkPluginSourceFactory.h" },
		{ "ModuleRelativePath", "Private/CanonLiveLinkPluginSourceFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanonLiveLinkPluginSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCanonLiveLinkPluginSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_CanonLiveLinkPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanonLiveLinkPluginSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCanonLiveLinkPluginSourceFactory_Statics::ClassParams = {
	&UCanonLiveLinkPluginSourceFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCanonLiveLinkPluginSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UCanonLiveLinkPluginSourceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCanonLiveLinkPluginSourceFactory()
{
	if (!Z_Registration_Info_UClass_UCanonLiveLinkPluginSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCanonLiveLinkPluginSourceFactory.OuterSingleton, Z_Construct_UClass_UCanonLiveLinkPluginSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCanonLiveLinkPluginSourceFactory.OuterSingleton;
}
UCanonLiveLinkPluginSourceFactory::UCanonLiveLinkPluginSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCanonLiveLinkPluginSourceFactory);
UCanonLiveLinkPluginSourceFactory::~UCanonLiveLinkPluginSourceFactory() {}
// ********** End Class UCanonLiveLinkPluginSourceFactory ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Private_CanonLiveLinkPluginSourceFactory_h__Script_CanonLiveLinkPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCanonLiveLinkPluginSourceFactory, UCanonLiveLinkPluginSourceFactory::StaticClass, TEXT("UCanonLiveLinkPluginSourceFactory"), &Z_Registration_Info_UClass_UCanonLiveLinkPluginSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanonLiveLinkPluginSourceFactory), 2337146057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Private_CanonLiveLinkPluginSourceFactory_h__Script_CanonLiveLinkPlugin_1966863849(TEXT("/Script/CanonLiveLinkPlugin"),
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Private_CanonLiveLinkPluginSourceFactory_h__Script_CanonLiveLinkPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_CanonLiveLinkPlugin_Source_CanonLiveLinkPlugin_Private_CanonLiveLinkPluginSourceFactory_h__Script_CanonLiveLinkPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
