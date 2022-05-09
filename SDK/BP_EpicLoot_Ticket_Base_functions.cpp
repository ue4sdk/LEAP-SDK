// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_EpicLoot_Ticket_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EpicLoot_Ticket_Base.BP_EpicLoot_Ticket_Base_C.GetTickets
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AProjectXCharacter*      Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TicketsOut                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_EpicLoot_Ticket_Base_C::GetTickets(class AProjectXCharacter* Character, int* TicketsOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EpicLoot_Ticket_Base.BP_EpicLoot_Ticket_Base_C.GetTickets"));

	struct
	{
		class AProjectXCharacter*      Character;
		int                            TicketsOut;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TicketsOut != nullptr)
		*TicketsOut = params.TicketsOut;
}


// Function BP_EpicLoot_Ticket_Base.BP_EpicLoot_Ticket_Base_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_ActorSelectedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_EpicLoot_Ticket_Base_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_1_ActorSelectedSignature__DelegateSignature(class APlayerController* Sender, class UPrimitiveComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EpicLoot_Ticket_Base.BP_EpicLoot_Ticket_Base_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_ActorSelectedSignature__DelegateSignature"));

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


// Function BP_EpicLoot_Ticket_Base.BP_EpicLoot_Ticket_Base_C.ExecuteUbergraph_BP_EpicLoot_Ticket_Base
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_EpicLoot_Ticket_Base_C::ExecuteUbergraph_BP_EpicLoot_Ticket_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EpicLoot_Ticket_Base.BP_EpicLoot_Ticket_Base_C.ExecuteUbergraph_BP_EpicLoot_Ticket_Base"));

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
