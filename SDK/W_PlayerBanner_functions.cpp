// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlayerBanner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PlayerBanner.W_PlayerBanner_C.ForceAsset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCosmeticAssetBase*      NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerBanner_C::ForceAsset(class UCosmeticAssetBase* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerBanner.W_PlayerBanner_C.ForceAsset"));

	struct
	{
		class UCosmeticAssetBase*      NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerBanner.W_PlayerBanner_C.UpdateMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerBanner_C::UpdateMaterial(class UMaterialInterface* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerBanner.W_PlayerBanner_C.UpdateMaterial"));

	struct
	{
		class UMaterialInterface*      Material;
	} params = {};

	params.Material = Material;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerBanner.W_PlayerBanner_C.ExecuteUbergraph_W_PlayerBanner
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerBanner_C::ExecuteUbergraph_W_PlayerBanner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerBanner.W_PlayerBanner_C.ExecuteUbergraph_W_PlayerBanner"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
