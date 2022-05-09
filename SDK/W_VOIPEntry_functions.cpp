// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_VOIPEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_VOIPEntry.W_VOIPEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_VOIPEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VOIPEntry.W_VOIPEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VOIPEntry.W_VOIPEntry_C.TalkingStateUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsTalking                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_VOIPEntry_C::TalkingStateUpdated(bool IsTalking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VOIPEntry.W_VOIPEntry_C.TalkingStateUpdated"));

	struct
	{
		bool                           IsTalking;
	} params = {};

	params.IsTalking = IsTalking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VOIPEntry.W_VOIPEntry_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VOIPEntry_C::FadeOut(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VOIPEntry.W_VOIPEntry_C.FadeOut"));

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


// Function W_VOIPEntry.W_VOIPEntry_C.OnFadeOutFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VOIPEntry_C::OnFadeOutFinished(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VOIPEntry.W_VOIPEntry_C.OnFadeOutFinished"));

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


// Function W_VOIPEntry.W_VOIPEntry_C.ExecuteUbergraph_W_VOIPEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VOIPEntry_C::ExecuteUbergraph_W_VOIPEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VOIPEntry.W_VOIPEntry_C.ExecuteUbergraph_W_VOIPEntry"));

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


// Function W_VOIPEntry.W_VOIPEntry_C.FadeFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_VOIPEntry_C::FadeFinished__DelegateSignature(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VOIPEntry.W_VOIPEntry_C.FadeFinished__DelegateSignature"));

	struct
	{
		struct FString                 Name;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
