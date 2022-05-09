// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_LeapPartyChatLogButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_LeapPartyChatLogButton.W_LeapPartyChatLogButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_LeapPartyChatLogButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LeapPartyChatLogButton.W_LeapPartyChatLogButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LeapPartyChatLogButton.W_LeapPartyChatLogButton_C.BndEvt__Btn_Whisper_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LeapPartyChatLogButton_C::BndEvt__Btn_Whisper_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LeapPartyChatLogButton.W_LeapPartyChatLogButton_C.BndEvt__Btn_Whisper_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LeapPartyChatLogButton.W_LeapPartyChatLogButton_C.ExecuteUbergraph_W_LeapPartyChatLogButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LeapPartyChatLogButton_C::ExecuteUbergraph_W_LeapPartyChatLogButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LeapPartyChatLogButton.W_LeapPartyChatLogButton_C.ExecuteUbergraph_W_LeapPartyChatLogButton"));

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
