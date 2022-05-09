// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Challenge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Challenge.W_Challenge_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Challenge_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Challenge.W_Challenge_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Challenge.W_Challenge_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FChallenge              Challenge                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_Challenge_C::Init(const struct FChallenge& Challenge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Challenge.W_Challenge_C.Init"));

	struct
	{
		struct FChallenge              Challenge;
	} params = {};

	params.Challenge = Challenge;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Challenge.W_Challenge_C.UpdateClaimed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Challenge_C::UpdateClaimed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Challenge.W_Challenge_C.UpdateClaimed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Challenge.W_Challenge_C.UpdateCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Challenge_C::UpdateCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Challenge.W_Challenge_C.UpdateCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Challenge.W_Challenge_C.ExecuteUbergraph_W_Challenge
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Challenge_C::ExecuteUbergraph_W_Challenge(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Challenge.W_Challenge_C.ExecuteUbergraph_W_Challenge"));

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
