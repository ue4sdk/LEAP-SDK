// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_HealProjectorOverlay_Damage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_HealProjectorOverlay_Damage.W_HealProjectorOverlay_Damage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_HealProjectorOverlay_Damage_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HealProjectorOverlay_Damage.W_HealProjectorOverlay_Damage_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HealProjectorOverlay_Damage.W_HealProjectorOverlay_Damage_C.Deactivate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_HealProjectorOverlay_Damage_C::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HealProjectorOverlay_Damage.W_HealProjectorOverlay_Damage_C.Deactivate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HealProjectorOverlay_Damage.W_HealProjectorOverlay_Damage_C.ExecuteUbergraph_W_HealProjectorOverlay_Damage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HealProjectorOverlay_Damage_C::ExecuteUbergraph_W_HealProjectorOverlay_Damage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HealProjectorOverlay_Damage.W_HealProjectorOverlay_Damage_C.ExecuteUbergraph_W_HealProjectorOverlay_Damage"));

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
