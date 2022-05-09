// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_NamedButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_NamedButton.W_NamedButton_C.highlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_NamedButton_C::highlight(bool NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_NamedButton.W_NamedButton_C.highlight"));

	struct
	{
		bool                           NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_NamedButton.W_NamedButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_NamedButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_NamedButton.W_NamedButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_NamedButton.W_NamedButton_C.SetName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FText                   DisplayText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_NamedButton_C::SetName(const struct FString& Name, const struct FText& DisplayText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_NamedButton.W_NamedButton_C.SetName"));

	struct
	{
		struct FString                 Name;
		struct FText                   DisplayText;
	} params = {};

	params.Name = Name;
	params.DisplayText = DisplayText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_NamedButton.W_NamedButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_NamedButton_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_NamedButton.W_NamedButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_NamedButton.W_NamedButton_C.ExecuteUbergraph_W_NamedButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_NamedButton_C::ExecuteUbergraph_W_NamedButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_NamedButton.W_NamedButton_C.ExecuteUbergraph_W_NamedButton"));

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


// Function W_NamedButton.W_NamedButton_C.Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_NamedButton_C::Clicked__DelegateSignature(const struct FString& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_NamedButton.W_NamedButton_C.Clicked__DelegateSignature"));

	struct
	{
		struct FString                 NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
