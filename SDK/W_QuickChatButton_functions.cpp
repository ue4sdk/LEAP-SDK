// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_QuickChatButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_QuickChatButton.W_QuickChatButton_C.ShouldSetVisible
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_QuickChatButton_C::ShouldSetVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatButton.W_QuickChatButton_C.ShouldSetVisible"));

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


// Function W_QuickChatButton.W_QuickChatButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_QuickChatButton_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatButton.W_QuickChatButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatButton.W_QuickChatButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_4_OnHoveredOff__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_QuickChatButton_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_4_OnHoveredOff__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatButton.W_QuickChatButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_4_OnHoveredOff__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatButton.W_QuickChatButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_QuickChatButton_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatButton.W_QuickChatButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature"));

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


// Function W_QuickChatButton.W_QuickChatButton_C.InitializeQuickChatButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FQuickChatData          QuickChatData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class AActor*                  SquadOrderActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_QuickChatButton_C::InitializeQuickChatButton(const struct FQuickChatData& QuickChatData, class AActor* SquadOrderActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatButton.W_QuickChatButton_C.InitializeQuickChatButton"));

	struct
	{
		struct FQuickChatData          QuickChatData;
		class AActor*                  SquadOrderActor;
	} params = {};

	params.QuickChatData = QuickChatData;
	params.SquadOrderActor = SquadOrderActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatButton.W_QuickChatButton_C.SetButtonColorAndOpacity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_QuickChatButton_C::SetButtonColorAndOpacity(const struct FLinearColor& NewColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatButton.W_QuickChatButton_C.SetButtonColorAndOpacity"));

	struct
	{
		struct FLinearColor            NewColor;
	} params = {};

	params.NewColor = NewColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatButton.W_QuickChatButton_C.ExecuteUbergraph_W_QuickChatButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_QuickChatButton_C::ExecuteUbergraph_W_QuickChatButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatButton.W_QuickChatButton_C.ExecuteUbergraph_W_QuickChatButton"));

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


// Function W_QuickChatButton.W_QuickChatButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_QuickChatButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatButton.W_QuickChatButton_C.OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatButton.W_QuickChatButton_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_QuickChatButton_C*    HoveredButton                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_QuickChatButton_C::OnHovered__DelegateSignature(class UW_QuickChatButton_C* HoveredButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatButton.W_QuickChatButton_C.OnHovered__DelegateSignature"));

	struct
	{
		class UW_QuickChatButton_C*    HoveredButton;
	} params = {};

	params.HoveredButton = HoveredButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
