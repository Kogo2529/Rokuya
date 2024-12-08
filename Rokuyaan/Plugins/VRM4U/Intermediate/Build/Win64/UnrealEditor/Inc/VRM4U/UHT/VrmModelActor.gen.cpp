// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmModelActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmModelActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_AVrmModelActor();
VRM4U_API UClass* Z_Construct_UClass_AVrmModelActor_NoRegister();
// End Cross Module References

// Begin Class AVrmModelActor
void AVrmModelActor::StaticRegisterNativesAVrmModelActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVrmModelActor);
UClass* Z_Construct_UClass_AVrmModelActor_NoRegister()
{
	return AVrmModelActor::StaticClass();
}
struct Z_Construct_UClass_AVrmModelActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VrmModelActor.h" },
		{ "ModuleRelativePath", "Public/VrmModelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseOpaqueMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmModelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransparentMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmModelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmModelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmModelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmModelActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseOpaqueMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseTransparentMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVrmModelActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseOpaqueMaterial = { "BaseOpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVrmModelActor, BaseOpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseOpaqueMaterial_MetaData), NewProp_BaseOpaqueMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseTransparentMaterial = { "BaseTransparentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVrmModelActor, BaseTransparentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTransparentMaterial_MetaData), NewProp_BaseTransparentMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVrmModelActor, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Textures_MetaData), NewProp_Textures_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVrmModelActor, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVrmModelActor, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVrmModelActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseOpaqueMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseTransparentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Textures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Textures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_SkeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVrmModelActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVrmModelActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVrmModelActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVrmModelActor_Statics::ClassParams = {
	&AVrmModelActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVrmModelActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVrmModelActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVrmModelActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVrmModelActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVrmModelActor()
{
	if (!Z_Registration_Info_UClass_AVrmModelActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVrmModelActor.OuterSingleton, Z_Construct_UClass_AVrmModelActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVrmModelActor.OuterSingleton;
}
template<> VRM4U_API UClass* StaticClass<AVrmModelActor>()
{
	return AVrmModelActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVrmModelActor);
AVrmModelActor::~AVrmModelActor() {}
// End Class AVrmModelActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4U_Public_VrmModelActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVrmModelActor, AVrmModelActor::StaticClass, TEXT("AVrmModelActor"), &Z_Registration_Info_UClass_AVrmModelActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVrmModelActor), 1577469170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4U_Public_VrmModelActor_h_360537637(TEXT("/Script/VRM4U"),
	Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4U_Public_VrmModelActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4U_Public_VrmModelActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
