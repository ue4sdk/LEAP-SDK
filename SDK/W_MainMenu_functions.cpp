// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_MainMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_MainMenu.W_MainMenu_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UW_MainMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.OnFocusReceived"));

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


// Function W_MainMenu.W_MainMenu_C.DisplayRewardsPopup
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ERewardType                    RewardType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FScriptDelegate         Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor)

void UW_MainMenu_C::DisplayRewardsPopup(ERewardType RewardType, const struct FScriptDelegate& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.DisplayRewardsPopup"));

	struct
	{
		ERewardType                    RewardType;
		struct FScriptDelegate         Event;
	} params = {};

	params.RewardType = RewardType;
	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.ListenForTravelFailuresOrKickMessages
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::ListenForTravelFailuresOrKickMessages()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.ListenForTravelFailuresOrKickMessages"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.ShowItemUnlocks
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::ShowItemUnlocks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.ShowItemUnlocks"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.ShowFoundersPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::ShowFoundersPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.ShowFoundersPrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.OnConfirmQuit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::OnConfirmQuit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.OnConfirmQuit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.OnWorldReady
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UW_MainMenu_C::OnWorldReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.OnWorldReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.DisplayKickMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 KickMessage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::DisplayKickMessage(const struct FString& KickMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.DisplayKickMessage"));

	struct
	{
		struct FString                 KickMessage;
	} params = {};

	params.KickMessage = KickMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.OnIntroductionComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::OnIntroductionComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.OnIntroductionComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.BndEvt__btn_quit_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::BndEvt__btn_quit_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.BndEvt__btn_quit_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature"));

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


// Function W_MainMenu.W_MainMenu_C.BndEvt__btn_quit_1_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::BndEvt__btn_quit_1_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.BndEvt__btn_quit_1_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature"));

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


// Function W_MainMenu.W_MainMenu_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

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


// Function W_MainMenu.W_MainMenu_C.Decline
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::Decline()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.Decline"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.StartRewardQue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::StartRewardQue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.StartRewardQue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.OnRewardsClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::OnRewardsClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.OnRewardsClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.NextRewardQue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::NextRewardQue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.NextRewardQue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.OnVisible
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::OnVisible(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.OnVisible"));

	struct
	{
		class UObject*                 ContextObject;
	} params = {};

	params.ContextObject = ContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.OnNakamaFailedConnection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::OnNakamaFailedConnection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.OnNakamaFailedConnection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::CustomEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.CustomEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_MainMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.BndEvt__btn_play_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::BndEvt__btn_play_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.BndEvt__btn_play_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature"));

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


// Function W_MainMenu.W_MainMenu_C.OnMatchmakingInfoupdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 GameType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::OnMatchmakingInfoupdated(const struct FString& GameType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.OnMatchmakingInfoupdated"));

	struct
	{
		struct FString                 GameType;
	} params = {};

	params.GameType = GameType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.BndEvt__btn_Armory_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::BndEvt__btn_Armory_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.BndEvt__btn_Armory_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature"));

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


// Function W_MainMenu.W_MainMenu_C.BndEvt__btn_BlackMarket_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::BndEvt__btn_BlackMarket_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.BndEvt__btn_BlackMarket_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature"));

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


// Function W_MainMenu.W_MainMenu_C.BndEvt__btn_Stats_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::BndEvt__btn_Stats_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.BndEvt__btn_Stats_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature"));

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


// Function W_MainMenu.W_MainMenu_C.BndEvt__btn_Leaderboard_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::BndEvt__btn_Leaderboard_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.BndEvt__btn_Leaderboard_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature"));

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


// Function W_MainMenu.W_MainMenu_C.BndEvt__btn_challenges_K2Node_ComponentBoundEvent_20_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::BndEvt__btn_challenges_K2Node_ComponentBoundEvent_20_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.BndEvt__btn_challenges_K2Node_ComponentBoundEvent_20_Clicked__DelegateSignature"));

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


// Function W_MainMenu.W_MainMenu_C.BndEvt__btn_Social_K2Node_ComponentBoundEvent_25_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::BndEvt__btn_Social_K2Node_ComponentBoundEvent_25_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.BndEvt__btn_Social_K2Node_ComponentBoundEvent_25_Clicked__DelegateSignature"));

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


// Function W_MainMenu.W_MainMenu_C.BndEvt__Wishlist_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::BndEvt__Wishlist_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.BndEvt__Wishlist_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature"));

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


// Function W_MainMenu.W_MainMenu_C.BndEvt__JoinDiscord_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::BndEvt__JoinDiscord_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.BndEvt__JoinDiscord_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature"));

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


// Function W_MainMenu.W_MainMenu_C.OnNoMatchmaking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::OnNoMatchmaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.OnNoMatchmaking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.OnReconnectRequest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::OnReconnectRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.OnReconnectRequest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.OnNakamaManagerInitialized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_C::OnNakamaManagerInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.OnNakamaManagerInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu.W_MainMenu_C.ExecuteUbergraph_W_MainMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_C::ExecuteUbergraph_W_MainMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu.W_MainMenu_C.ExecuteUbergraph_W_MainMenu"));

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
