// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_EpicLoot_Weapon_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EpicLoot_Weapon_Base.BP_EpicLoot_Weapon_Base_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_ActorSelectedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_EpicLoot_Weapon_Base_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_0_ActorSelectedSignature__DelegateSignature(class APlayerController* Sender, class UPrimitiveComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EpicLoot_Weapon_Base.BP_EpicLoot_Weapon_Base_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_ActorSelectedSignature__DelegateSignature"));

	struct
	{
		class APlayerController*       Sender;
		class UPrimitiveComponent*     Component;
	} params = {};

	params.Sender = Sender;
	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_EpicLoot_Weapon_Base.BP_EpicLoot_Weapon_Base_C.ExecuteUbergraph_BP_EpicLoot_Weapon_Base
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_EpicLoot_Weapon_Base_C::ExecuteUbergraph_BP_EpicLoot_Weapon_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EpicLoot_Weapon_Base.BP_EpicLoot_Weapon_Base_C.ExecuteUbergraph_BP_EpicLoot_Weapon_Base"));

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
