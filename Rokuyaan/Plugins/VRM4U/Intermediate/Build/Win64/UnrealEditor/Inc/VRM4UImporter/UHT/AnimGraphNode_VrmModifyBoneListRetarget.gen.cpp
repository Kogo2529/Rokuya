// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AnimGraphNode_VrmModifyBoneListRetarget.h"
#include "VRM4U/Public/AnimNode_VrmModifyBoneListRetarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmModifyBoneListRetarget() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_NoRegister();
// End Cross Module References

// Begin Class UAnimGraphNode_VrmModifyBoneListRetarget
void UAnimGraphNode_VrmModifyBoneListRetarget::StaticRegisterNativesUAnimGraphNode_VrmModifyBoneListRetarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_VrmModifyBoneListRetarget);
UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_NoRegister()
{
	return UAnimGraphNode_VrmModifyBoneListRetarget::StaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_VrmModifyBoneListRetarget.h" },
		{ "Keywords", "Modify Transform" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyBoneListRetarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyBoneListRetarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewLive_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyBoneListRetarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewForeground_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyBoneListRetarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static void NewProp_bPreviewLive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewLive;
	static void NewProp_bPreviewForeground_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewForeground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmModifyBoneListRetarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_VrmModifyBoneListRetarget, Node), Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 1498819867
void Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewLive_SetBit(void* Obj)
{
	((UAnimGraphNode_VrmModifyBoneListRetarget*)Obj)->bPreviewLive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewLive = { "bPreviewLive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_VrmModifyBoneListRetarget), &Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewLive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewLive_MetaData), NewProp_bPreviewLive_MetaData) };
void Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewForeground_SetBit(void* Obj)
{
	((UAnimGraphNode_VrmModifyBoneListRetarget*)Obj)->bPreviewForeground = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewForeground = { "bPreviewForeground", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_VrmModifyBoneListRetarget), &Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewForeground_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewForeground_MetaData), NewProp_bPreviewForeground_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewLive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewForeground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::ClassParams = {
	&UAnimGraphNode_VrmModifyBoneListRetarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_VrmModifyBoneListRetarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_VrmModifyBoneListRetarget.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_VrmModifyBoneListRetarget.OuterSingleton;
}
template<> VRM4UIMPORTER_API UClass* StaticClass<UAnimGraphNode_VrmModifyBoneListRetarget>()
{
	return UAnimGraphNode_VrmModifyBoneListRetarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmModifyBoneListRetarget);
UAnimGraphNode_VrmModifyBoneListRetarget::~UAnimGraphNode_VrmModifyBoneListRetarget() {}
// End Class UAnimGraphNode_VrmModifyBoneListRetarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyBoneListRetarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget, UAnimGraphNode_VrmModifyBoneListRetarget::StaticClass, TEXT("UAnimGraphNode_VrmModifyBoneListRetarget"), &Z_Registration_Info_UClass_UAnimGraphNode_VrmModifyBoneListRetarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_VrmModifyBoneListRetarget), 64727932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyBoneListRetarget_h_1514356836(TEXT("/Script/VRM4UImporter"),
	Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyBoneListRetarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyBoneListRetarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
