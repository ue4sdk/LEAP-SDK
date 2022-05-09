// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PartyPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PartyPanel.W_PartyPanel_C.ToggleFriendsList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyPanel_C::ToggleFriendsList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.ToggleFriendsList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.ShowFriendsList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShowFriendsList              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PartyPanel_C::ShowFriendsList(bool InShowFriendsList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.ShowFriendsList"));

	struct
	{
		bool                           InShowFriendsList;
	} params = {};

	params.InShowFriendsList = InShowFriendsList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.ShowPartyChat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShow                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PartyPanel_C::ShowPartyChat(bool InShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.ShowPartyChat"));

	struct
	{
		bool                           InShow;
	} params = {};

	params.InShow = InShow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.ShowPartyBrowser
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShow                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PartyPanel_C::ShowPartyBrowser(bool InShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.ShowPartyBrowser"));

	struct
	{
		bool                           InShow;
	} params = {};

	params.InShow = InShow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.ExitParty
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyPanel_C::ExitParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.ExitParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.Get_TextBlock_9_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UW_PartyPanel_C::Get_TextBlock_9_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.Get_TextBlock_9_Text_1"));

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


// Function W_PartyPanel.W_PartyPanel_C.ReconnectPartyHost
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyPanel_C::ReconnectPartyHost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.ReconnectPartyHost"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.GetText_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UW_PartyPanel_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.GetText_1"));

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


// Function W_PartyPanel.W_PartyPanel_C.PartyInviteReceived
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PartyPanel_C::PartyInviteReceived(const struct FString& PlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.PartyInviteReceived"));

	struct
	{
		struct FString                 PlayerName;
	} params = {};

	params.PlayerName = PlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.PartyHostConnectionFailure
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyPanel_C::PartyHostConnectionFailure()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.PartyHostConnectionFailure"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.PartyJoiningGame
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyPanel_C::PartyJoiningGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.PartyJoiningGame"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.UpdateDisplays
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyPanel_C::UpdateDisplays()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.UpdateDisplays"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.CloseFlyoutMenus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyPanel_C::CloseFlyoutMenus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.CloseFlyoutMenus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.StartChat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyPanel_C::StartChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.StartChat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.PartyStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyPanel_C::PartyStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.PartyStateChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.PartyLeaderChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UW_PartyPanel_C::PartyLeaderChanged(const struct FUniqueNetIdRepl& InUniqueId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.PartyLeaderChanged"));

	struct
	{
		struct FUniqueNetIdRepl        InUniqueId;
	} params = {};

	params.InUniqueId = InUniqueId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.PlayerStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InSteamBeaconPlayerState       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyPanel_C::PlayerStateChanged(class ASteamBeaconPlayerState* InSteamBeaconPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.PlayerStateChanged"));

	struct
	{
		class ASteamBeaconPlayerState* InSteamBeaconPlayerState;
	} params = {};

	params.InSteamBeaconPlayerState = InSteamBeaconPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.PlayerLeftParty
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InBeaconPlayerState            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyPanel_C::PlayerLeftParty(class ASteamBeaconPlayerState* InBeaconPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.PlayerLeftParty"));

	struct
	{
		class ASteamBeaconPlayerState* InBeaconPlayerState;
	} params = {};

	params.InBeaconPlayerState = InBeaconPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.PlayerJoinedParty
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InBeaconPlayerState            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyPanel_C::PlayerJoinedParty(class ASteamBeaconPlayerState* InBeaconPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.PlayerJoinedParty"));

	struct
	{
		class ASteamBeaconPlayerState* InBeaconPlayerState;
	} params = {};

	params.InBeaconPlayerState = InBeaconPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.StartPartyHost
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyPanel_C::StartPartyHost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.StartPartyHost"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.UpdatePartyPanel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyPanel_C::UpdatePartyPanel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.UpdatePartyPanel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_PartyPanel_C::BndEvt__Button_15_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.Tick"));

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


// Function W_PartyPanel.W_PartyPanel_C.BndEvt__But_InviteAccept_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_PartyPanel_C::BndEvt__But_InviteAccept_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.BndEvt__But_InviteAccept_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.BndEvt__But_InviteDecline_K2Node_ComponentBoundEvent_191_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_PartyPanel_C::BndEvt__But_InviteDecline_K2Node_ComponentBoundEvent_191_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.BndEvt__But_InviteDecline_K2Node_ComponentBoundEvent_191_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PartyPanel_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PartyPanel_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.PreConstruct"));

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


// Function W_PartyPanel.W_PartyPanel_C.AcceptInvite
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyPanel_C::AcceptInvite()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.AcceptInvite"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.BndEvt__btn_ReconnectingLeave_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyPanel_C::BndEvt__btn_ReconnectingLeave_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.BndEvt__btn_ReconnectingLeave_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

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


// Function W_PartyPanel.W_PartyPanel_C.DenyInvite
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyPanel_C::DenyInvite()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.DenyInvite"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.ExecuteUbergraph_W_PartyPanel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyPanel_C::ExecuteUbergraph_W_PartyPanel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.ExecuteUbergraph_W_PartyPanel"));

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


// Function W_PartyPanel.W_PartyPanel_C.OnShowExternalFriendsList__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShowFriendsList              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PartyPanel_C::OnShowExternalFriendsList__DelegateSignature(bool InShowFriendsList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.OnShowExternalFriendsList__DelegateSignature"));

	struct
	{
		bool                           InShowFriendsList;
	} params = {};

	params.InShowFriendsList = InShowFriendsList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyPanel.W_PartyPanel_C.PartyStatusUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPartyStatus                   OutPartyStatus                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyPanel_C::PartyStatusUpdated__DelegateSignature(EPartyStatus OutPartyStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyPanel.W_PartyPanel_C.PartyStatusUpdated__DelegateSignature"));

	struct
	{
		EPartyStatus                   OutPartyStatus;
	} params = {};

	params.OutPartyStatus = OutPartyStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
