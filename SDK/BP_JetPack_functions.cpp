// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_JetPack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_JetPack.BP_JetPack_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_JetPack_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_JetPack.BP_JetPack_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_JetPack.BP_JetPack_C.JetPackStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_JetPack_C::JetPackStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_JetPack.BP_JetPack_C.JetPackStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_JetPack.BP_JetPack_C.JetpackStop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_JetPack_C::JetpackStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_JetPack.BP_JetPack_C.JetpackStop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_JetPack.BP_JetPack_C.ExecuteUbergraph_BP_JetPack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_JetPack_C::ExecuteUbergraph_BP_JetPack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_JetPack.BP_JetPack_C.ExecuteUbergraph_BP_JetPack"));

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
