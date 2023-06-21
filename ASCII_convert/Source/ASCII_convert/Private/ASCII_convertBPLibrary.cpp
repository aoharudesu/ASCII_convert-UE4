// Copyright Epic Games, Inc. All Rights Reserved.

#include "ASCII_convertBPLibrary.h"
#include "ASCII_convert.h"

UASCII_convertBPLibrary::UASCII_convertBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

TArray<int32> UASCII_convertBPLibrary::ConvertStringToASCII(const FString& InString)
{
	TArray<int32> OutASCII;
	for (TCHAR c : InString)
	{
		OutASCII.Add((int32)c);
	}
	return OutASCII;
}

FString UASCII_convertBPLibrary::ConvertASCIIToString(const TArray<int32>& InASCII)
{
	FString OutString;
	for (int32 ascii : InASCII)
	{
		OutString += TCHAR(ascii);
	}
	return OutString;
}
