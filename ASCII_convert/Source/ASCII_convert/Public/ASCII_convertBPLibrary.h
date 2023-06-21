// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ASCII_convertBPLibrary.generated.h"

UCLASS()
class UASCII_convertBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Convert String to ASCII", Keywords = "ASCII_convert string ASCII conversion"), Category = "ASCIIConversion")
		static TArray<int32> ConvertStringToASCII(const FString& InString);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Convert ASCII to String", Keywords = "ASCII_convert ASCII string conversion"), Category = "ASCIIConversion")
		static FString ConvertASCIIToString(const TArray<int32>& InASCII);
};
