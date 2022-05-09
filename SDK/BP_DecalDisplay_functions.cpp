// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DecalDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DecalDisplay.BP_DecalDisplay_C.OnLoaded_8B2388A74CDD748C7886EABCFF787EAF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DecalDisplay_C::OnLoaded_8B2388A74CDD748C7886EABCFF787EAF(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DecalDisplay.BP_DecalDisplay_C.OnLoaded_8B2388A74CDD748C7886EABCFF787EAF"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DecalDisplay.BP_DecalDisplay_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_DecalDisplay_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DecalDisplay.BP_DecalDisplay_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DecalDisplay.BP_DecalDisplay_C.LoadCosmetic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponInstance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCosmeticAssetBase*      CosmeticAsset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DecalDisplay_C::LoadCosmetic(ECosmeticType Type, class UClass* /*UWeaponInstance*/ WeaponInstance, class UCosmeticAssetBase* CosmeticAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DecalDisplay.BP_DecalDisplay_C.LoadCosmetic"));

	struct
	{
		ECosmeticType                  Type;
		class UClass* /*UWeaponInstance*/ WeaponInstance;
		class UCosmeticAssetBase*      CosmeticAsset;
	} params = {};

	params.Type = Type;
	params.WeaponInstance = WeaponInstance;
	params.CosmeticAsset = CosmeticAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DecalDisplay.BP_DecalDisplay_C.ClearDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DecalDisplay_C::ClearDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DecalDisplay.BP_DecalDisplay_C.ClearDisplay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DecalDisplay.BP_DecalDisplay_C.OnTypeSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DecalDisplay_C::OnTypeSelected(ECosmeticType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DecalDisplay.BP_DecalDisplay_C.OnTypeSelected"));

	struct
	{
		ECosmeticType                  Type;
	} params = {};

	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DecalDisplay.BP_DecalDisplay_C.ExecuteUbergraph_BP_DecalDisplay
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DecalDisplay_C::ExecuteUbergraph_BP_DecalDisplay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DecalDisplay.BP_DecalDisplay_C.ExecuteUbergraph_BP_DecalDisplay"));

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
