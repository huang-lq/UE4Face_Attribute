// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACEATT_Face_generated_h
#error "Face.generated.h already included, missing '#pragma once' in Face.h"
#endif
#define FACEATT_Face_generated_h

#define Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_SPARSE_DATA
#define Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseFaceCheakThread); \
	DECLARE_FUNCTION(execOpenFaceCheakThread);


#define Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseFaceCheakThread); \
	DECLARE_FUNCTION(execOpenFaceCheakThread);


#define Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFace(); \
	friend struct Z_Construct_UClass_AFace_Statics; \
public: \
	DECLARE_CLASS(AFace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FaceAtt"), NO_API) \
	DECLARE_SERIALIZER(AFace)


#define Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAFace(); \
	friend struct Z_Construct_UClass_AFace_Statics; \
public: \
	DECLARE_CLASS(AFace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FaceAtt"), NO_API) \
	DECLARE_SERIALIZER(AFace)


#define Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFace(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFace(AFace&&); \
	NO_API AFace(const AFace&); \
public:


#define Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFace(AFace&&); \
	NO_API AFace(const AFace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFace)


#define Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_PRIVATE_PROPERTY_OFFSET
#define Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_18_PROLOG
#define Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_PRIVATE_PROPERTY_OFFSET \
	Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_SPARSE_DATA \
	Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_RPC_WRAPPERS \
	Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_INCLASS \
	Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_PRIVATE_PROPERTY_OFFSET \
	Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_SPARSE_DATA \
	Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_INCLASS_NO_PURE_DECLS \
	Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACEATT_API UClass* StaticClass<class AFace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Demo_Plugins_FaceAtt_Source_FaceAtt_Public_Face_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
