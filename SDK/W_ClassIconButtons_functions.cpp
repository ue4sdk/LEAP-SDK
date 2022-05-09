// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ClassIconButtons_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ClassIconButtons.W_ClassIconButtons_C.BumperLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ClassIconButtons_C::BumperLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassIconButtons.W_ClassIconButtons_C.BumperLeft"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ClassIconButtons.W_ClassIconButtons_C.BumperRight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ClassIconButtons_C::BumperRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassIconButtons.W_ClassIconButtons_C.BumperRight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ClassIconButtons.W_ClassIconButtons_C.OnClassClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ClassIconButtons_C::OnClassClicked(class UClass* /*AProjectXCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassIconButtons.W_ClassIconButtons_C.OnClassClicked"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ClassIconButtons.W_ClassIconButtons_C.InitializeClassButtons
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ClassIconButtons_C::InitializeClassButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassIconButtons.W_ClassIconButtons_C.InitializeClassButtons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ClassIconButtons.W_ClassIconButtons_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ClassIconButtons_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassIconButtons.W_ClassIconButtons_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ClassIconButtons.W_ClassIconButtons_C.Break
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ClassIconButtons_C::Break()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassIconButtons.W_ClassIconButtons_C.Break"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ClassIconButtons.W_ClassIconButtons_C.ExecuteUbergraph_W_ClassIconButtons
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ClassIconButtons_C::ExecuteUbergraph_W_ClassIconButtons(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassIconButtons.W_ClassIconButtons_C.ExecuteUbergraph_W_ClassIconButtons"));

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


// Function W_ClassIconButtons.W_ClassIconButtons_C.OnClassSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ClassIconButtons_C::OnClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ClassIconButtons.W_ClassIconButtons_C.OnClassSelected__DelegateSignature"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
