// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ImageWriteQueue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                Texture                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FImageWriteOptions      OPTIONS                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UImageWriteBlueprintLibrary::ExportToDisk(class UTexture* Texture, const struct FString& Filename, const struct FImageWriteOptions& OPTIONS)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk"));

	struct
	{
		class UTexture*                Texture;
		struct FString                 Filename;
		struct FImageWriteOptions      OPTIONS;
	} params = {};

	params.Texture = Texture;
	params.Filename = Filename;
	params.OPTIONS = OPTIONS;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
