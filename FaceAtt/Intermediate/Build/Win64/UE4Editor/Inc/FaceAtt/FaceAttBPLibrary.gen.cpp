// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FaceAtt/Public/FaceAttBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFaceAttBPLibrary() {}
// Cross Module References
	FACEATT_API UClass* Z_Construct_UClass_UFaceAttBPLibrary_NoRegister();
	FACEATT_API UClass* Z_Construct_UClass_UFaceAttBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FaceAtt();
// End Cross Module References
	DEFINE_FUNCTION(UFaceAttBPLibrary::execFaceAttSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFaceAttBPLibrary::FaceAttSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UFaceAttBPLibrary::StaticRegisterNativesUFaceAttBPLibrary()
	{
		UClass* Class = UFaceAttBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FaceAttSampleFunction", &UFaceAttBPLibrary::execFaceAttSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction_Statics
	{
		struct FaceAttBPLibrary_eventFaceAttSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FaceAttBPLibrary_eventFaceAttSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FaceAttBPLibrary_eventFaceAttSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "FaceAttTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "FaceAtt sample test testing" },
		{ "ModuleRelativePath", "Public/FaceAttBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFaceAttBPLibrary, nullptr, "FaceAttSampleFunction", nullptr, nullptr, sizeof(FaceAttBPLibrary_eventFaceAttSampleFunction_Parms), Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFaceAttBPLibrary_NoRegister()
	{
		return UFaceAttBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFaceAttBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFaceAttBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FaceAtt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFaceAttBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFaceAttBPLibrary_FaceAttSampleFunction, "FaceAttSampleFunction" }, // 735696994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaceAttBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n*   If you have any questions, please contact me\n*   Github: https://github.com/huang-lq\n*\x09""CSDN:   https://blog.csdn.net/weixin_44346103?type=blog\n*/" },
		{ "IncludePath", "FaceAttBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FaceAttBPLibrary.h" },
		{ "ToolTip", "*   If you have any questions, please contact me\n*   Github: https://github.com/huang-lq\n*      CSDN:   https://blog.csdn.net/weixin_44346103?type=blog" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFaceAttBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFaceAttBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFaceAttBPLibrary_Statics::ClassParams = {
		&UFaceAttBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFaceAttBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFaceAttBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFaceAttBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFaceAttBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFaceAttBPLibrary, 2659864261);
	template<> FACEATT_API UClass* StaticClass<UFaceAttBPLibrary>()
	{
		return UFaceAttBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFaceAttBPLibrary(Z_Construct_UClass_UFaceAttBPLibrary, &UFaceAttBPLibrary::StaticClass, TEXT("/Script/FaceAtt"), TEXT("UFaceAttBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFaceAttBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
