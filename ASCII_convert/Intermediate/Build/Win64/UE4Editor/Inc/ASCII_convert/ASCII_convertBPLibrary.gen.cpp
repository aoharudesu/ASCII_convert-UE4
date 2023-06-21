// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ASCII_convert/Public/ASCII_convertBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASCII_convertBPLibrary() {}
// Cross Module References
	ASCII_CONVERT_API UClass* Z_Construct_UClass_UASCII_convertBPLibrary_NoRegister();
	ASCII_CONVERT_API UClass* Z_Construct_UClass_UASCII_convertBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ASCII_convert();
// End Cross Module References
	DEFINE_FUNCTION(UASCII_convertBPLibrary::execConvertASCIIToString)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_InASCII);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UASCII_convertBPLibrary::ConvertASCIIToString(Z_Param_Out_InASCII);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASCII_convertBPLibrary::execConvertStringToASCII)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UASCII_convertBPLibrary::ConvertStringToASCII(Z_Param_InString);
		P_NATIVE_END;
	}
	void UASCII_convertBPLibrary::StaticRegisterNativesUASCII_convertBPLibrary()
	{
		UClass* Class = UASCII_convertBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertASCIIToString", &UASCII_convertBPLibrary::execConvertASCIIToString },
			{ "ConvertStringToASCII", &UASCII_convertBPLibrary::execConvertStringToASCII },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics
	{
		struct ASCII_convertBPLibrary_eventConvertASCIIToString_Parms
		{
			TArray<int32> InASCII;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InASCII_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InASCII_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InASCII;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::NewProp_InASCII_Inner = { "InASCII", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::NewProp_InASCII_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::NewProp_InASCII = { "InASCII", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCII_convertBPLibrary_eventConvertASCIIToString_Parms, InASCII), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::NewProp_InASCII_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::NewProp_InASCII_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCII_convertBPLibrary_eventConvertASCIIToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::NewProp_InASCII_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::NewProp_InASCII,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "ASCIIConversion" },
		{ "DisplayName", "Convert ASCII to String" },
		{ "Keywords", "ASCII_convert ASCII string conversion" },
		{ "ModuleRelativePath", "Public/ASCII_convertBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCII_convertBPLibrary, nullptr, "ConvertASCIIToString", nullptr, nullptr, sizeof(ASCII_convertBPLibrary_eventConvertASCIIToString_Parms), Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics
	{
		struct ASCII_convertBPLibrary_eventConvertStringToASCII_Parms
		{
			FString InString;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCII_convertBPLibrary_eventConvertStringToASCII_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::NewProp_InString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::NewProp_InString_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCII_convertBPLibrary_eventConvertStringToASCII_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::NewProp_InString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::Function_MetaDataParams[] = {
		{ "Category", "ASCIIConversion" },
		{ "DisplayName", "Convert String to ASCII" },
		{ "Keywords", "ASCII_convert string ASCII conversion" },
		{ "ModuleRelativePath", "Public/ASCII_convertBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCII_convertBPLibrary, nullptr, "ConvertStringToASCII", nullptr, nullptr, sizeof(ASCII_convertBPLibrary_eventConvertStringToASCII_Parms), Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UASCII_convertBPLibrary_NoRegister()
	{
		return UASCII_convertBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UASCII_convertBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASCII_convertBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ASCII_convert,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UASCII_convertBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertASCIIToString, "ConvertASCIIToString" }, // 3365174254
		{ &Z_Construct_UFunction_UASCII_convertBPLibrary_ConvertStringToASCII, "ConvertStringToASCII" }, // 3644285736
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASCII_convertBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ASCII_convertBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ASCII_convertBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASCII_convertBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASCII_convertBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASCII_convertBPLibrary_Statics::ClassParams = {
		&UASCII_convertBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UASCII_convertBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASCII_convertBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASCII_convertBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASCII_convertBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASCII_convertBPLibrary, 1532110596);
	template<> ASCII_CONVERT_API UClass* StaticClass<UASCII_convertBPLibrary>()
	{
		return UASCII_convertBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASCII_convertBPLibrary(Z_Construct_UClass_UASCII_convertBPLibrary, &UASCII_convertBPLibrary::StaticClass, TEXT("/Script/ASCII_convert"), TEXT("UASCII_convertBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASCII_convertBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
