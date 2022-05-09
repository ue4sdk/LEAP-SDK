// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SimpleUGC_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SimpleUGC.UGCRegistry.GetPackageModID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FUGCPackage             Package                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UUGCRegistry::GetPackageModID(const struct FUGCPackage& Package)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SimpleUGC.UGCRegistry.GetPackageModID"));

	struct
	{
		struct FUGCPackage             Package;
		int                            ReturnValue;
	} params = {};

	params.Package = Package;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SimpleUGC.UGCRegistry.GetMapsInPackage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FUGCPackage             Package                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FName>           Maps                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUGCRegistry::GetMapsInPackage(const struct FUGCPackage& Package, TArray<struct FName>* Maps)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SimpleUGC.UGCRegistry.GetMapsInPackage"));

	struct
	{
		struct FUGCPackage             Package;
		TArray<struct FName>           Maps;
		bool                           ReturnValue;
	} params = {};

	params.Package = Package;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Maps != nullptr)
		*Maps = params.Maps;

	return params.ReturnValue;
}


// Function SimpleUGC.UGCRegistry.GetAllClassesInPackage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FUGCPackage             Package                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<class UClass* /*UObject*/> Classes                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUGCRegistry::GetAllClassesInPackage(const struct FUGCPackage& Package, TArray<class UClass* /*UObject*/>* Classes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SimpleUGC.UGCRegistry.GetAllClassesInPackage"));

	struct
	{
		struct FUGCPackage             Package;
		TArray<class UClass* /*UObject*/> Classes;
		bool                           ReturnValue;
	} params = {};

	params.Package = Package;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Classes != nullptr)
		*Classes = params.Classes;

	return params.ReturnValue;
}


// Function SimpleUGC.UGCRegistry.FindUGCPackages
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bRescanPlugins                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUGCRegistry::FindUGCPackages(bool bRescanPlugins)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SimpleUGC.UGCRegistry.FindUGCPackages"));

	struct
	{
		bool                           bRescanPlugins;
		bool                           ReturnValue;
	} params = {};

	params.bRescanPlugins = bRescanPlugins;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
