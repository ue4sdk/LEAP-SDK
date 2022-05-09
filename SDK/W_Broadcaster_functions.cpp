// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Broadcaster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Broadcaster.W_Broadcaster_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Broadcaster_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Broadcaster.W_Broadcaster_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Broadcaster.W_Broadcaster_C.OnServerBroadcastRecieved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_Broadcaster_C::OnServerBroadcastRecieved(const struct FText& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Broadcaster.W_Broadcaster_C.OnServerBroadcastRecieved"));

	struct
	{
		struct FText                   Message;
	} params = {};

	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Broadcaster.W_Broadcaster_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Broadcaster_C::FadeOut(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Broadcaster.W_Broadcaster_C.FadeOut"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Broadcaster.W_Broadcaster_C.FadeFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Broadcaster_C::FadeFinished(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Broadcaster.W_Broadcaster_C.FadeFinished"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Broadcaster.W_Broadcaster_C.ExecuteUbergraph_W_Broadcaster
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Broadcaster_C::ExecuteUbergraph_W_Broadcaster(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Broadcaster.W_Broadcaster_C.ExecuteUbergraph_W_Broadcaster"));

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
