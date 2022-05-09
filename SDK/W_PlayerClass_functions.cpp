// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlayerClass_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PlayerClass.W_PlayerClass_C.IsButtonEnabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_PlayerClass_C::IsButtonEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerClass.W_PlayerClass_C.IsButtonEnabled"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_PlayerClass.W_PlayerClass_C.OnLoaded_8CC36D684496D20E5C7B2FB285960339
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerClass_C::OnLoaded_8CC36D684496D20E5C7B2FB285960339(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerClass.W_PlayerClass_C.OnLoaded_8CC36D684496D20E5C7B2FB285960339"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerClass.W_PlayerClass_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlayerClass_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerClass.W_PlayerClass_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerClass.W_PlayerClass_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_PlayerClass_C::BndEvt__SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerClass.W_PlayerClass_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerClass.W_PlayerClass_C.LoadIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerClass_C::LoadIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerClass.W_PlayerClass_C.LoadIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerClass.W_PlayerClass_C.ExecuteUbergraph_W_PlayerClass
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerClass_C::ExecuteUbergraph_W_PlayerClass(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerClass.W_PlayerClass_C.ExecuteUbergraph_W_PlayerClass"));

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


// Function W_PlayerClass.W_PlayerClass_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_PlayerClass_C*        Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ PlayerClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerClass_C::OnClicked__DelegateSignature(class UW_PlayerClass_C* Button, class UClass* /*AProjectXCharacter*/ PlayerClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerClass.W_PlayerClass_C.OnClicked__DelegateSignature"));

	struct
	{
		class UW_PlayerClass_C*        Button;
		class UClass* /*AProjectXCharacter*/ PlayerClass;
	} params = {};

	params.Button = Button;
	params.PlayerClass = PlayerClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
