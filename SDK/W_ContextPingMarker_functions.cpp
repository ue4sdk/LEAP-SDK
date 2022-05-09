// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ContextPingMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ContextPingMarker.W_ContextPingMarker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ContextPingMarker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ContextPingMarker.W_ContextPingMarker_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ContextPingMarker.W_ContextPingMarker_C.PlayPingAnimaion
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ContextPingMarker_C::PlayPingAnimaion()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ContextPingMarker.W_ContextPingMarker_C.PlayPingAnimaion"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ContextPingMarker.W_ContextPingMarker_C.ExecuteUbergraph_W_ContextPingMarker
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ContextPingMarker_C::ExecuteUbergraph_W_ContextPingMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ContextPingMarker.W_ContextPingMarker_C.ExecuteUbergraph_W_ContextPingMarker"));

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
