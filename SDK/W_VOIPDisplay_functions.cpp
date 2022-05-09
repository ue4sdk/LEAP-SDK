// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_VOIPDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_VOIPDisplay.W_VOIPDisplay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_VOIPDisplay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VOIPDisplay.W_VOIPDisplay_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VOIPDisplay.W_VOIPDisplay_C.RemoveEntry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_VOIPDisplay_C::RemoveEntry(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VOIPDisplay.W_VOIPDisplay_C.RemoveEntry"));

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


// Function W_VOIPDisplay.W_VOIPDisplay_C.Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_VOIPDisplay_C::Pressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VOIPDisplay.W_VOIPDisplay_C.Pressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VOIPDisplay.W_VOIPDisplay_C.Released
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_VOIPDisplay_C::Released()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VOIPDisplay.W_VOIPDisplay_C.Released"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VOIPDisplay.W_VOIPDisplay_C.OnParticipantUpdatedDelegate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsSelf                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           bIsSpeaking                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_VOIPDisplay_C::OnParticipantUpdatedDelegate(bool bIsSelf, const struct FString& PlayerName, bool bIsSpeaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VOIPDisplay.W_VOIPDisplay_C.OnParticipantUpdatedDelegate"));

	struct
	{
		bool                           bIsSelf;
		struct FString                 PlayerName;
		bool                           bIsSpeaking;
	} params = {};

	params.bIsSelf = bIsSelf;
	params.PlayerName = PlayerName;
	params.bIsSpeaking = bIsSpeaking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VOIPDisplay.W_VOIPDisplay_C.ExecuteUbergraph_W_VOIPDisplay
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VOIPDisplay_C::ExecuteUbergraph_W_VOIPDisplay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VOIPDisplay.W_VOIPDisplay_C.ExecuteUbergraph_W_VOIPDisplay"));

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
