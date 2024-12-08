// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmRetargetFromMannequin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmRetargetFromMannequin() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin();
// End Cross Module References

// Begin ScriptStruct FAnimNode_VrmRetargetFromMannequin
static_assert(std::is_polymorphic<FAnimNode_VrmRetargetFromMannequin>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmRetargetFromMannequin cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmRetargetFromMannequin;
class UScriptStruct* FAnimNode_VrmRetargetFromMannequin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmRetargetFromMannequin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmRetargetFromMannequin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmRetargetFromMannequin"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmRetargetFromMannequin.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmRetargetFromMannequin>()
{
	return FAnimNode_VrmRetargetFromMannequin::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAttachedParent_MetaData[] = {
		{ "Category", "Skeleton" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If SourceMeshComponent is not valid, and if this is true, it will look for attached parent as a source */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "NeverAsPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If SourceMeshComponent is not valid, and if this is true, it will look for attached parent as a source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_srcMannequinMesh_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCenterLocation_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterLocationScaleByHeightScale_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterLocationOffset_MetaData[] = {
		{ "Category", "Skeleton" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FVector(1.0f, 1.0f, 1.0f);\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FVector(1.0f, 1.0f, 1.0f);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MannequinVrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FVector(1.0f, 1.0f, 1.0f);\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FVector(1.0f, 1.0f, 1.0f);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_srcSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dstSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseAttachedParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAttachedParent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_srcMannequinMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmMetaObject;
	static void NewProp_bIgnoreCenterLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCenterLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterLocationScaleByHeightScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterLocationOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MannequinVrmMetaObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_srcSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_dstSkeletalMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmRetargetFromMannequin>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bUseAttachedParent_SetBit(void* Obj)
{
	((FAnimNode_VrmRetargetFromMannequin*)Obj)->bUseAttachedParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bUseAttachedParent = { "bUseAttachedParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmRetargetFromMannequin), &Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bUseAttachedParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAttachedParent_MetaData), NewProp_bUseAttachedParent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcMannequinMesh = { "srcMannequinMesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, srcMannequinMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_srcMannequinMesh_MetaData), NewProp_srcMannequinMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VrmMetaObject_MetaData), NewProp_VrmMetaObject_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bIgnoreCenterLocation_SetBit(void* Obj)
{
	((FAnimNode_VrmRetargetFromMannequin*)Obj)->bIgnoreCenterLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bIgnoreCenterLocation = { "bIgnoreCenterLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_VrmRetargetFromMannequin), &Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bIgnoreCenterLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreCenterLocation_MetaData), NewProp_bIgnoreCenterLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationScaleByHeightScale = { "CenterLocationScaleByHeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, CenterLocationScaleByHeightScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterLocationScaleByHeightScale_MetaData), NewProp_CenterLocationScaleByHeightScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationOffset = { "CenterLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, CenterLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterLocationOffset_MetaData), NewProp_CenterLocationOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_MannequinVrmMetaObject = { "MannequinVrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, MannequinVrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MannequinVrmMetaObject_MetaData), NewProp_MannequinVrmMetaObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcSkeletalMesh = { "srcSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, srcSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_srcSkeletalMesh_MetaData), NewProp_srcSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_dstSkeletalMesh = { "dstSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, dstSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dstSkeletalMesh_MetaData), NewProp_dstSkeletalMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bUseAttachedParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcMannequinMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_VrmMetaObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bIgnoreCenterLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationScaleByHeightScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_MannequinVrmMetaObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_dstSkeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_VrmRetargetFromMannequin",
	Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::PropPointers),
	sizeof(FAnimNode_VrmRetargetFromMannequin),
	alignof(FAnimNode_VrmRetargetFromMannequin),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmRetargetFromMannequin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmRetargetFromMannequin.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmRetargetFromMannequin.InnerSingleton;
}
// End ScriptStruct FAnimNode_VrmRetargetFromMannequin

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmRetargetFromMannequin_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_VrmRetargetFromMannequin::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewStructOps, TEXT("AnimNode_VrmRetargetFromMannequin"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmRetargetFromMannequin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmRetargetFromMannequin), 3282094367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmRetargetFromMannequin_h_2122174739(TEXT("/Script/VRM4U"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmRetargetFromMannequin_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmRetargetFromMannequin_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS