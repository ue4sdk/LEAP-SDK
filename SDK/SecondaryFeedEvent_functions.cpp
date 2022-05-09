// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SecondaryFeedEvent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SecondaryFeedEvent.SecondaryFeedEvent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USecondaryFeedEvent_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SecondaryFeedEvent.SecondaryFeedEvent_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SecondaryFeedEvent.SecondaryFeedEvent_C.Fade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USecondaryFeedEvent_C::Fade(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SecondaryFeedEvent.SecondaryFeedEvent_C.Fade"));

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


// Function SecondaryFeedEvent.SecondaryFeedEvent_C.Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USecondaryFeedEvent_C::Finished(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SecondaryFeedEvent.SecondaryFeedEvent_C.Finished"));

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


// Function SecondaryFeedEvent.SecondaryFeedEvent_C.FadeTo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          From                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          To                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USecondaryFeedEvent_C::FadeTo(float From, float To)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SecondaryFeedEvent.SecondaryFeedEvent_C.FadeTo"));

	struct
	{
		float                          From;
		float                          To;
	} params = {};

	params.From = From;
	params.To = To;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SecondaryFeedEvent.SecondaryFeedEvent_C.ExecuteUbergraph_SecondaryFeedEvent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USecondaryFeedEvent_C::ExecuteUbergraph_SecondaryFeedEvent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SecondaryFeedEvent.SecondaryFeedEvent_C.ExecuteUbergraph_SecondaryFeedEvent"));

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
