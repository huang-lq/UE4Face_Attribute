// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FaceAtt/Public/Face.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFace() {}
// Cross Module References
	FACEATT_API UClass* Z_Construct_UClass_AFace_NoRegister();
	FACEATT_API UClass* Z_Construct_UClass_AFace();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FaceAtt();
// End Cross Module References
	DEFINE_FUNCTION(AFace::execCloseFaceCheakThread)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseFaceCheakThread();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFace::execOpenFaceCheakThread)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CamNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenFaceCheakThread(Z_Param_CamNum);
		P_NATIVE_END;
	}
	void AFace::StaticRegisterNativesAFace()
	{
		UClass* Class = AFace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseFaceCheakThread", &AFace::execCloseFaceCheakThread },
			{ "OpenFaceCheakThread", &AFace::execOpenFaceCheakThread },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFace_CloseFaceCheakThread_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFace_CloseFaceCheakThread_Statics::Function_MetaDataParams[] = {
		{ "Category", "Face" },
		{ "ModuleRelativePath", "Public/Face.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFace_CloseFaceCheakThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFace, nullptr, "CloseFaceCheakThread", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFace_CloseFaceCheakThread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFace_CloseFaceCheakThread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFace_CloseFaceCheakThread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFace_CloseFaceCheakThread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFace_OpenFaceCheakThread_Statics
	{
		struct Face_eventOpenFaceCheakThread_Parms
		{
			int32 CamNum;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CamNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFace_OpenFaceCheakThread_Statics::NewProp_CamNum = { "CamNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Face_eventOpenFaceCheakThread_Parms, CamNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFace_OpenFaceCheakThread_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFace_OpenFaceCheakThread_Statics::NewProp_CamNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFace_OpenFaceCheakThread_Statics::Function_MetaDataParams[] = {
		{ "Category", "Face" },
		{ "ModuleRelativePath", "Public/Face.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFace_OpenFaceCheakThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFace, nullptr, "OpenFaceCheakThread", nullptr, nullptr, sizeof(Face_eventOpenFaceCheakThread_Parms), Z_Construct_UFunction_AFace_OpenFaceCheakThread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFace_OpenFaceCheakThread_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFace_OpenFaceCheakThread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFace_OpenFaceCheakThread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFace_OpenFaceCheakThread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFace_OpenFaceCheakThread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFace_NoRegister()
	{
		return AFace::StaticClass();
	}
	struct Z_Construct_UClass_AFace_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FaceAtt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFace_CloseFaceCheakThread, "CloseFaceCheakThread" }, // 3229054753
		{ &Z_Construct_UFunction_AFace_OpenFaceCheakThread, "OpenFaceCheakThread" }, // 4091418796
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Face.h" },
		{ "ModuleRelativePath", "Public/Face.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFace_Statics::ClassParams = {
		&AFace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFace, 1010657267);
	template<> FACEATT_API UClass* StaticClass<AFace>()
	{
		return AFace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFace(Z_Construct_UClass_AFace, &AFace::StaticClass, TEXT("/Script/FaceAtt"), TEXT("AFace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
