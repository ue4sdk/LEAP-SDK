// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_QuickChatOption_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_QuickChatOption.W_QuickChatOption_C.GetAttackDefendText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsAlly                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   InText                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UW_QuickChatOption_C::GetAttackDefendText(bool IsAlly, const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.GetAttackDefendText"));

	struct
	{
		bool                           IsAlly;
		struct FText                   InText;
		struct FText                   ReturnValue;
	} params = {};

	params.IsAlly = IsAlly;
	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_QuickChatOption.W_QuickChatOption_C.GetRequestOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FQuickChatData>  QuickChatDataArray             (CPF_Parm, CPF_OutParm)

void UW_QuickChatOption_C::GetRequestOptions(TArray<struct FQuickChatData>* QuickChatDataArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.GetRequestOptions"));

	struct
	{
		TArray<struct FQuickChatData>  QuickChatDataArray;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (QuickChatDataArray != nullptr)
		*QuickChatDataArray = params.QuickChatDataArray;
}


// Function W_QuickChatOption.W_QuickChatOption_C.Initialize Taunt Options
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_QuickChatOption_C::Initialize_Taunt_Options()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.Initialize Taunt Options"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.GetTeamColours
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsAlly                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FLinearColor UW_QuickChatOption_C::GetTeamColours(bool IsAlly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.GetTeamColours"));

	struct
	{
		bool                           IsAlly;
		struct FLinearColor            ReturnValue;
	} params = {};

	params.IsAlly = IsAlly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_QuickChatOption.W_QuickChatOption_C.InitializeQuickChatOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UW_QuickChatButton_C*> OPTIONS                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<class UW_QuickChatButton_C*> NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UW_QuickChatOption_C::InitializeQuickChatOptions(TArray<class UW_QuickChatButton_C*>* OPTIONS, TArray<class UW_QuickChatButton_C*>* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.InitializeQuickChatOptions"));

	struct
	{
		TArray<class UW_QuickChatButton_C*> OPTIONS;
		TArray<class UW_QuickChatButton_C*> NewParam;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OPTIONS != nullptr)
		*OPTIONS = params.OPTIONS;
	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function W_QuickChatOption.W_QuickChatOption_C.InitializeSquadChatKingOfTheHill
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UW_QuickChatButton_C*> SquadChatButtonWidget          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UW_QuickChatOption_C::InitializeSquadChatKingOfTheHill(TArray<class UW_QuickChatButton_C*>* SquadChatButtonWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.InitializeSquadChatKingOfTheHill"));

	struct
	{
		TArray<class UW_QuickChatButton_C*> SquadChatButtonWidget;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SquadChatButtonWidget != nullptr)
		*SquadChatButtonWidget = params.SquadChatButtonWidget;
}


// Function W_QuickChatOption.W_QuickChatOption_C.InitializeSquadChatAssault
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UW_QuickChatButton_C*> TargetArray                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<struct FQuickChatData>  InputPin                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_QuickChatOption_C::InitializeSquadChatAssault(TArray<class UW_QuickChatButton_C*> TargetArray, TArray<struct FQuickChatData> InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.InitializeSquadChatAssault"));

	struct
	{
		TArray<class UW_QuickChatButton_C*> TargetArray;
		TArray<struct FQuickChatData>  InputPin;
	} params = {};

	params.TargetArray = TargetArray;
	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.InitializeSquadChatBaseControl
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UW_QuickChatButton_C*> TargetArray                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<struct FQuickChatData>  InputPin                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_QuickChatOption_C::InitializeSquadChatBaseControl(TArray<class UW_QuickChatButton_C*> TargetArray, TArray<struct FQuickChatData> InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.InitializeSquadChatBaseControl"));

	struct
	{
		TArray<class UW_QuickChatButton_C*> TargetArray;
		TArray<struct FQuickChatData>  InputPin;
	} params = {};

	params.TargetArray = TargetArray;
	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.OnPreviewMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UW_QuickChatOption_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.OnPreviewMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_QuickChatOption.W_QuickChatOption_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UW_QuickChatOption_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.OnMouseButtonUp"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_QuickChatOption.W_QuickChatOption_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UW_QuickChatOption_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.OnMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_QuickChatOption.W_QuickChatOption_C.HideQuickChatOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UW_QuickChatButton_C*> TargetArray                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UW_QuickChatOption_C::HideQuickChatOptions(TArray<class UW_QuickChatButton_C*> TargetArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.HideQuickChatOptions"));

	struct
	{
		TArray<class UW_QuickChatButton_C*> TargetArray;
	} params = {};

	params.TargetArray = TargetArray;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.InitializeQuickChatButtons
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UW_QuickChatButton_C*> TargetArray                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<struct FQuickChatData>  InputPin                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_QuickChatOption_C::InitializeQuickChatButtons(TArray<class UW_QuickChatButton_C*> TargetArray, TArray<struct FQuickChatData> InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.InitializeQuickChatButtons"));

	struct
	{
		TArray<class UW_QuickChatButton_C*> TargetArray;
		TArray<struct FQuickChatData>  InputPin;
	} params = {};

	params.TargetArray = TargetArray;
	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.OnPlayerStateAcquired_08AD188A43993442C226149B80451425
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_QuickChatOption_C::OnPlayerStateAcquired_08AD188A43993442C226149B80451425(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.OnPlayerStateAcquired_08AD188A43993442C226149B80451425"));

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


// Function W_QuickChatOption.W_QuickChatOption_C.OnGameStateAcquired_8B8FDE0543955287CE3132BBBD4066F3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_QuickChatOption_C::OnGameStateAcquired_8B8FDE0543955287CE3132BBBD4066F3(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.OnGameStateAcquired_8B8FDE0543955287CE3132BBBD4066F3"));

	struct
	{
		class AGameState*              GameState;
	} params = {};

	params.GameState = GameState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_QuickChatOption_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_QuickChatOption_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.ShowRequestOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_QuickChatOption_C::ShowRequestOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.ShowRequestOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.ShowSocialOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_QuickChatOption_C::ShowSocialOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.ShowSocialOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.SetCurrentHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_QuickChatButton_C*    HoveredOption                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_QuickChatOption_C::SetCurrentHovered(class UW_QuickChatButton_C* HoveredOption)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.SetCurrentHovered"));

	struct
	{
		class UW_QuickChatButton_C*    HoveredOption;
	} params = {};

	params.HoveredOption = HoveredOption;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.BndEvt__SocialButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_QuickChatOption_C::BndEvt__SocialButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.BndEvt__SocialButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.BndEvt__RequestButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_QuickChatOption_C::BndEvt__RequestButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.BndEvt__RequestButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.UpdateSquadLeaderOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_QuickChatOption_C::UpdateSquadLeaderOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.UpdateSquadLeaderOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.ShowSquadLeaderOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_QuickChatOption_C::ShowSquadLeaderOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.ShowSquadLeaderOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.BndEvt__SquadLeaderButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_QuickChatOption_C::BndEvt__SquadLeaderButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.BndEvt__SquadLeaderButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.BndEvt__TauntButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_QuickChatOption_C::BndEvt__TauntButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.BndEvt__TauntButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.SendQuickChatMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_QuickChatOption_C::SendQuickChatMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.SendQuickChatMessage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.ShowTauntOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_QuickChatOption_C::ShowTauntOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.ShowTauntOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.UpdateOptionHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EQuickChatOptions> QuickChatOptions               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_QuickChatOption_C::UpdateOptionHovered(TEnumAsByte<EQuickChatOptions> QuickChatOptions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.UpdateOptionHovered"));

	struct
	{
		TEnumAsByte<EQuickChatOptions> QuickChatOptions;
	} params = {};

	params.QuickChatOptions = QuickChatOptions;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.HideAllWidgetOptions
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UW_QuickChatOption_C::HideAllWidgetOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.HideAllWidgetOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.OnSquadLeaderChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_QuickChatOption_C::OnSquadLeaderChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.OnSquadLeaderChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.ShowAllWidgetOptions
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UW_QuickChatOption_C::ShowAllWidgetOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.ShowAllWidgetOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_QuickChatOption.W_QuickChatOption_C.ExecuteUbergraph_W_QuickChatOption
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_QuickChatOption_C::ExecuteUbergraph_W_QuickChatOption(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_QuickChatOption.W_QuickChatOption_C.ExecuteUbergraph_W_QuickChatOption"));

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
