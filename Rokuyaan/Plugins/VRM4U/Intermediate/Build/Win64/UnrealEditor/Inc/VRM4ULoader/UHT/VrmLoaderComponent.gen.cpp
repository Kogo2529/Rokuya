// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4ULoader/Public/VrmLoaderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmLoaderComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_VRM4ULoader();
VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmLoaderComponent();
VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmLoaderComponent_NoRegister();
VRM4ULOADER_API UFunction* Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnFinishLoad
struct Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics
{
	struct VrmLoaderComponent_eventOnFinishLoad_Parms
	{
		UVrmAssetListObject* AssetList;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_MULTICAST_DELEGATE_OneParam(FStaticOnDropFiles, FString);\n//static FStaticOnDropFiles\x09StaticOnDropFilesDelegate;\n" },
#endif
		{ "ModuleRelativePath", "Public/VrmLoaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_MULTICAST_DELEGATE_OneParam(FStaticOnDropFiles, FString);\nstatic FStaticOnDropFiles      StaticOnDropFilesDelegate;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::NewProp_AssetList = { "AssetList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmLoaderComponent_eventOnFinishLoad_Parms, AssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::NewProp_AssetList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmLoaderComponent, nullptr, "OnFinishLoad__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::VrmLoaderComponent_eventOnFinishLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::VrmLoaderComponent_eventOnFinishLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVrmLoaderComponent::FOnFinishLoad_DelegateWrapper(const FMulticastScriptDelegate& OnFinishLoad, UVrmAssetListObject* AssetList)
{
	struct VrmLoaderComponent_eventOnFinishLoad_Parms
	{
		UVrmAssetListObject* AssetList;
	};
	VrmLoaderComponent_eventOnFinishLoad_Parms Parms;
	Parms.AssetList=AssetList;
	OnFinishLoad.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFinishLoad

// Begin Class UVrmLoaderComponent Function LoadVRMFile
struct Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics
{
	struct VrmLoaderComponent_eventLoadVRMFile_Parms
	{
		const UVrmAssetListObject* InVrmAsset;
		UVrmAssetListObject* OutVrmAsset;
		FString filepath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//static const UVrmDropFilesComponent* getLatestActiveComponent() {\n//return s_LatestActiveComponent;\n//};\n" },
#endif
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "ModuleRelativePath", "Public/VrmLoaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "static const UVrmDropFilesComponent* getLatestActiveComponent() {\nreturn s_LatestActiveComponent;\n};" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVrmAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InVrmAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutVrmAsset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_filepath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_InVrmAsset = { "InVrmAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmLoaderComponent_eventLoadVRMFile_Parms, InVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVrmAsset_MetaData), NewProp_InVrmAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_OutVrmAsset = { "OutVrmAsset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmLoaderComponent_eventLoadVRMFile_Parms, OutVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_filepath = { "filepath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmLoaderComponent_eventLoadVRMFile_Parms, filepath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VrmLoaderComponent_eventLoadVRMFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmLoaderComponent_eventLoadVRMFile_Parms), &Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_InVrmAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_OutVrmAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_filepath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmLoaderComponent, nullptr, "LoadVRMFile", nullptr, nullptr, Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::VrmLoaderComponent_eventLoadVRMFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::VrmLoaderComponent_eventLoadVRMFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmLoaderComponent::execLoadVRMFile)
{
	P_GET_OBJECT(UVrmAssetListObject,Z_Param_InVrmAsset);
	P_GET_OBJECT_REF(UVrmAssetListObject,Z_Param_Out_OutVrmAsset);
	P_GET_PROPERTY(FStrProperty,Z_Param_filepath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadVRMFile(Z_Param_InVrmAsset,P_ARG_GC_BARRIER(Z_Param_Out_OutVrmAsset),Z_Param_filepath);
	P_NATIVE_END;
}
// End Class UVrmLoaderComponent Function LoadVRMFile

// Begin Class UVrmLoaderComponent Function LoadVRMFileAsync
struct Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics
{
	struct VrmLoaderComponent_eventLoadVRMFileAsync_Parms
	{
		const UVrmAssetListObject* InVrmAsset;
		FString filepath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "ModuleRelativePath", "Public/VrmLoaderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVrmAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InVrmAsset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_filepath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_InVrmAsset = { "InVrmAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmLoaderComponent_eventLoadVRMFileAsync_Parms, InVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVrmAsset_MetaData), NewProp_InVrmAsset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_filepath = { "filepath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmLoaderComponent_eventLoadVRMFileAsync_Parms, filepath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VrmLoaderComponent_eventLoadVRMFileAsync_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrmLoaderComponent_eventLoadVRMFileAsync_Parms), &Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_InVrmAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_filepath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmLoaderComponent, nullptr, "LoadVRMFileAsync", nullptr, nullptr, Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::VrmLoaderComponent_eventLoadVRMFileAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::VrmLoaderComponent_eventLoadVRMFileAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmLoaderComponent::execLoadVRMFileAsync)
{
	P_GET_OBJECT(UVrmAssetListObject,Z_Param_InVrmAsset);
	P_GET_PROPERTY(FStrProperty,Z_Param_filepath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadVRMFileAsync(Z_Param_InVrmAsset,Z_Param_filepath);
	P_NATIVE_END;
}
// End Class UVrmLoaderComponent Function LoadVRMFileAsync

// Begin Class UVrmLoaderComponent
void UVrmLoaderComponent::StaticRegisterNativesUVrmLoaderComponent()
{
	UClass* Class = UVrmLoaderComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadVRMFile", &UVrmLoaderComponent::execLoadVRMFile },
		{ "LoadVRMFileAsync", &UVrmLoaderComponent::execLoadVRMFileAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmLoaderComponent);
UClass* Z_Construct_UClass_UVrmLoaderComponent_NoRegister()
{
	return UVrmLoaderComponent::StaticClass();
}
struct Z_Construct_UClass_UVrmLoaderComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Component to handle receiving notifications from the OS about application state (activated, suspended, termination, etc). */" },
#endif
		{ "HideCategories", "Activation Components|Activation Collision" },
		{ "IncludePath", "VrmLoaderComponent.h" },
		{ "ModuleRelativePath", "Public/VrmLoaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component to handle receiving notifications from the OS about application state (activated, suspended, termination, etc)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinishLoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmLoaderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetList_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmLoaderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishLoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile, "LoadVRMFile" }, // 1206480224
		{ &Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync, "LoadVRMFileAsync" }, // 2623431588
		{ &Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature, "OnFinishLoad__DelegateSignature" }, // 1807893718
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmLoaderComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_OnFinishLoad = { "OnFinishLoad", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLoaderComponent, OnFinishLoad), Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinishLoad_MetaData), NewProp_OnFinishLoad_MetaData) }; // 1807893718
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_AssetList = { "AssetList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrmLoaderComponent, AssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetList_MetaData), NewProp_AssetList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmLoaderComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_OnFinishLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_AssetList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmLoaderComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmLoaderComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4ULoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmLoaderComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmLoaderComponent_Statics::ClassParams = {
	&UVrmLoaderComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVrmLoaderComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmLoaderComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmLoaderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmLoaderComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmLoaderComponent()
{
	if (!Z_Registration_Info_UClass_UVrmLoaderComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmLoaderComponent.OuterSingleton, Z_Construct_UClass_UVrmLoaderComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmLoaderComponent.OuterSingleton;
}
template<> VRM4ULOADER_API UClass* StaticClass<UVrmLoaderComponent>()
{
	return UVrmLoaderComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmLoaderComponent);
UVrmLoaderComponent::~UVrmLoaderComponent() {}
// End Class UVrmLoaderComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmLoaderComponent, UVrmLoaderComponent::StaticClass, TEXT("UVrmLoaderComponent"), &Z_Registration_Info_UClass_UVrmLoaderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmLoaderComponent), 2101706858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_2449329446(TEXT("/Script/VRM4ULoader"),
	Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGames_UEGame_Rokuya_Rokuyaan_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS