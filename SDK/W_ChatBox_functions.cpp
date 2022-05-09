// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ChatBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ChatBox.W_ChatBox_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UW_ChatBox_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.OnFocusReceived"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FFocusEvent             InFocusEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ChatBox.W_ChatBox_C.GetIsUserTyping
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_ChatBox_C::GetIsUserTyping()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.GetIsUserTyping"));

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


// Function W_ChatBox.W_ChatBox_C.SetChannel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EMessageType                   MessageType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChatBox_C::SetChannel(EMessageType MessageType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.SetChannel"));

	struct
	{
		EMessageType                   MessageType;
	} params = {};

	params.MessageType = MessageType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.CheckForWhisperTargetAndSet
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Command                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           bFoundTarget                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ChatBox_C::CheckForWhisperTargetAndSet(const struct FString& Text, const struct FString& Command, bool* bFoundTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.CheckForWhisperTargetAndSet"));

	struct
	{
		struct FString                 Text;
		struct FString                 Command;
		bool                           bFoundTarget;
	} params = {};

	params.Text = Text;
	params.Command = Command;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bFoundTarget != nullptr)
		*bFoundTarget = params.bFoundTarget;
}


// Function W_ChatBox.W_ChatBox_C.OnPlayerStateAcquired_151BC77C4CD0A6E45AC927BF910D869F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChatBox_C::OnPlayerStateAcquired_151BC77C4CD0A6E45AC927BF910D869F(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.OnPlayerStateAcquired_151BC77C4CD0A6E45AC927BF910D869F"));

	struct
	{
		class APlayerState*            PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ChatBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.BndEvt__EditableText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChatBox_C::BndEvt__EditableText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.BndEvt__EditableText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature"));

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


// Function W_ChatBox.W_ChatBox_C.BndEvt__EditableText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_ChatBox_C::BndEvt__EditableText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.BndEvt__EditableText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.OpenChatBox
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChatBox_C::OpenChatBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.OpenChatBox"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.CloseChatBox
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChatBox_C::CloseChatBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.CloseChatBox"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.FadeOutText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChatBox_C::FadeOutText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.FadeOutText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.FadeInText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChatBox_C::FadeInText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.FadeInText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.DeferredFadeOutText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChatBox_C::DeferredFadeOutText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.DeferredFadeOutText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.OnChatCollapsed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UW_ChatBox_C::OnChatCollapsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.OnChatCollapsed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.OnChatToggled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EWindowToggleCommand> ToggleCommand                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChatBox_C::OnChatToggled(TEnumAsByte<EWindowToggleCommand> ToggleCommand)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.OnChatToggled"));

	struct
	{
		TEnumAsByte<EWindowToggleCommand> ToggleCommand;
	} params = {};

	params.ToggleCommand = ToggleCommand;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.HUDVisibilityChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShowHUD                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ChatBox_C::HUDVisibilityChanged(bool bShowHUD)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.HUDVisibilityChanged"));

	struct
	{
		bool                           bShowHUD;
	} params = {};

	params.bShowHUD = bShowHUD;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.OnHUDChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChatBox_C::OnHUDChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.OnHUDChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.MessageReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class AProjectXPlayerState*    Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EMessageType                   MessageType                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChatBox_C::MessageReceived(const struct FString& Message, class AProjectXPlayerState* Sender, EMessageType MessageType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.MessageReceived"));

	struct
	{
		struct FString                 Message;
		class AProjectXPlayerState*    Sender;
		EMessageType                   MessageType;
	} params = {};

	params.Message = Message;
	params.Sender = Sender;
	params.MessageType = MessageType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.OnMessageTypeSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EMessageType                   ChatMode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChatBox_C::OnMessageTypeSet(EMessageType ChatMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.OnMessageTypeSet"));

	struct
	{
		EMessageType                   ChatMode;
	} params = {};

	params.ChatMode = ChatMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChatBox.W_ChatBox_C.ExecuteUbergraph_W_ChatBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChatBox_C::ExecuteUbergraph_W_ChatBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChatBox.W_ChatBox_C.ExecuteUbergraph_W_ChatBox"));

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
