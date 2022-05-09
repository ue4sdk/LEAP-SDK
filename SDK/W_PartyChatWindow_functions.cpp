// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PartyChatWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PartyChatWindow.W_PartyChatWindow_C.ClearChatLog
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InPlayerId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UW_PartyChatWindow_C::ClearChatLog(const struct FUniqueNetIdRepl& InPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyChatWindow.W_PartyChatWindow_C.ClearChatLog"));

	struct
	{
		struct FUniqueNetIdRepl        InPlayerId;
	} params = {};

	params.InPlayerId = InPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.ClearAllChatLogs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyChatWindow_C::ClearAllChatLogs()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyChatWindow.W_PartyChatWindow_C.ClearAllChatLogs"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatLogToGlobal
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyChatWindow_C::SetChatLogToGlobal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatLogToGlobal"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatLogToWhisper
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InPlayerId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UW_PartyChatWindow_C::SetChatLogToWhisper(const struct FUniqueNetIdRepl& InPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatLogToWhisper"));

	struct
	{
		struct FUniqueNetIdRepl        InPlayerId;
	} params = {};

	params.InPlayerId = InPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.GetText_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UW_PartyChatWindow_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyChatWindow.W_PartyChatWindow_C.GetText_1"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatTarget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InTargetPlayer                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UW_PartyChatWindow_C::SetChatTarget(const struct FUniqueNetIdRepl& InTargetPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyChatWindow.W_PartyChatWindow_C.SetChatTarget"));

	struct
	{
		struct FUniqueNetIdRepl        InTargetPlayer;
	} params = {};

	params.InTargetPlayer = InTargetPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.MessageReceived
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPartyMessage           InMessage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bPlaySound                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PartyChatWindow_C::MessageReceived(const struct FPartyMessage& InMessage, bool bPlaySound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyChatWindow.W_PartyChatWindow_C.MessageReceived"));

	struct
	{
		struct FPartyMessage           InMessage;
		bool                           bPlaySound;
	} params = {};

	params.InMessage = InMessage;
	params.bPlaySound = bPlaySound;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.BndEvt__EditableTextBox_ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyChatWindow_C::BndEvt__EditableTextBox_ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyChatWindow.W_PartyChatWindow_C.BndEvt__EditableTextBox_ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params = {};

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.BndEvt__btn_Party_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyChatWindow_C::BndEvt__btn_Party_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyChatWindow.W_PartyChatWindow_C.BndEvt__btn_Party_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature"));

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


// Function W_PartyChatWindow.W_PartyChatWindow_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyChatWindow_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyChatWindow.W_PartyChatWindow_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature"));

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


// Function W_PartyChatWindow.W_PartyChatWindow_C.Show Chat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyChatWindow_C::Show_Chat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyChatWindow.W_PartyChatWindow_C.Show Chat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.Hide Chat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyChatWindow_C::Hide_Chat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyChatWindow.W_PartyChatWindow_C.Hide Chat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyChatWindow.W_PartyChatWindow_C.ExecuteUbergraph_W_PartyChatWindow
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyChatWindow_C::ExecuteUbergraph_W_PartyChatWindow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyChatWindow.W_PartyChatWindow_C.ExecuteUbergraph_W_PartyChatWindow"));

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
