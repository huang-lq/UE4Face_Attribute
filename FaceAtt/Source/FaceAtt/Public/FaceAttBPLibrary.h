// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FaceAttBPLibrary.generated.h"

/*
*   If you have any questions, please contact me
*   Github: https://github.com/huang-lq
*	CSDN:   https://blog.csdn.net/weixin_44346103?type=blog
*/

UCLASS()
class UFaceAttBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "FaceAtt sample test testing"), Category = "FaceAttTesting")
	static float FaceAttSampleFunction(float Param);
};
