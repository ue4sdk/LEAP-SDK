// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ImgMedia_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ImgMedia.ImgMediaSource.SetSequencePath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UImgMediaSource::SetSequencePath(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ImgMedia.ImgMediaSource.SetSequencePath"));

	struct
	{
		struct FString                 Path;
	} params = {};

	params.Path = Path;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ImgMedia.ImgMediaSource.GetSequencePath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UImgMediaSource::GetSequencePath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ImgMedia.ImgMediaSource.GetSequencePath"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ImgMedia.ImgMediaSource.GetProxies
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FString>         OutProxies                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UImgMediaSource::GetProxies(TArray<struct FString>* OutProxies)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ImgMedia.ImgMediaSource.GetProxies"));

	struct
	{
		TArray<struct FString>         OutProxies;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutProxies != nullptr)
		*OutProxies = params.OutProxies;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
