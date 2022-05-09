// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_btnPlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_btnPlay.W_btnPlay_C.UpdatePlayBtnState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESessionState                  Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_btnPlay_C::UpdatePlayBtnState(ESessionState Selection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_btnPlay.W_btnPlay_C.UpdatePlayBtnState"));

	struct
	{
		ESessionState                  Selection;
	} params = {};

	params.Selection = Selection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_btnPlay.W_btnPlay_C.Set Default
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_btnPlay_C::Set_Default()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_btnPlay.W_btnPlay_C.Set Default"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_btnPlay.W_btnPlay_C.Set Joining
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Status_Text                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_btnPlay_C::Set_Joining(const struct FText& Status_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_btnPlay.W_btnPlay_C.Set Joining"));

	struct
	{
		struct FText                   Status_Text;
	} params = {};

	params.Status_Text = Status_Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_btnPlay.W_btnPlay_C.Set Searching
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_btnPlay_C::Set_Searching()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_btnPlay.W_btnPlay_C.Set Searching"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_btnPlay.W_btnPlay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_btnPlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_btnPlay.W_btnPlay_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_btnPlay.W_btnPlay_C.OnSessionStateUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESessionState                  State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_btnPlay_C::OnSessionStateUpdated(ESessionState State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_btnPlay.W_btnPlay_C.OnSessionStateUpdated"));

	struct
	{
		ESessionState                  State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_btnPlay.W_btnPlay_C.BndEvt__btn_Play_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_btnPlay_C::BndEvt__btn_Play_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_btnPlay.W_btnPlay_C.BndEvt__btn_Play_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

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


// Function W_btnPlay.W_btnPlay_C.Update Game Type
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 inString                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_btnPlay_C::Update_Game_Type(const struct FString& inString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_btnPlay.W_btnPlay_C.Update Game Type"));

	struct
	{
		struct FString                 inString;
	} params = {};

	params.inString = inString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_btnPlay.W_btnPlay_C.ExecuteUbergraph_W_btnPlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_btnPlay_C::ExecuteUbergraph_W_btnPlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_btnPlay.W_btnPlay_C.ExecuteUbergraph_W_btnPlay"));

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


// Function W_btnPlay.W_btnPlay_C.PlayClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_btnPlay_C::PlayClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_btnPlay.W_btnPlay_C.PlayClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
