// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_MainMenuHeader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_MainMenuHeader.W_MainMenuHeader_C.UpdateCurrency
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Currency                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_MainMenuHeader_C::UpdateCurrency(const struct FText& Currency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.UpdateCurrency"));

	struct
	{
		struct FText                   Currency;
	} params = {};

	params.Currency = Currency;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.UpdateParentWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     ParentWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenuHeader_C::UpdateParentWidget(class UAdvancedUserWidget* ParentWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.UpdateParentWidget"));

	struct
	{
		class UAdvancedUserWidget*     ParentWidget;
	} params = {};

	params.ParentWidget = ParentWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.OnPartyStatusUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPartyStatus                   OutPartyStatus                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenuHeader_C::OnPartyStatusUpdated(EPartyStatus OutPartyStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.OnPartyStatusUpdated"));

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


// Function W_MainMenuHeader.W_MainMenuHeader_C.SetActiveButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMainMenuOptions>  MenuOption                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenuHeader_C::SetActiveButton(TEnumAsByte<EMainMenuOptions> MenuOption)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.SetActiveButton"));

	struct
	{
		TEnumAsByte<EMainMenuOptions>  MenuOption;
	} params = {};

	params.MenuOption = MenuOption;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_3_ArmoryButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_MainMenuHeader_C::BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_3_ArmoryButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_3_ArmoryButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_4_LeaderboardButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_MainMenuHeader_C::BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_4_LeaderboardButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_4_LeaderboardButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_5_StatsButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_MainMenuHeader_C::BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_5_StatsButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_5_StatsButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_10_StoreButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_MainMenuHeader_C::BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_10_StoreButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.BndEvt__W_MainMenu_NavigationList_K2Node_ComponentBoundEvent_10_StoreButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.BndEvt__W_btnPlay_K2Node_ComponentBoundEvent_0_PlayClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_MainMenuHeader_C::BndEvt__W_btnPlay_K2Node_ComponentBoundEvent_0_PlayClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.BndEvt__W_btnPlay_K2Node_ComponentBoundEvent_0_PlayClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.OnMatchmakingInfoupdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 GameType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_MainMenuHeader_C::OnMatchmakingInfoupdated(const struct FString& GameType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.OnMatchmakingInfoupdated"));

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


// Function W_MainMenuHeader.W_MainMenuHeader_C.DisableButtons
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenuHeader_C::DisableButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.DisableButtons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.ExecuteUbergraph_W_MainMenuHeader
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenuHeader_C::ExecuteUbergraph_W_MainMenuHeader(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.ExecuteUbergraph_W_MainMenuHeader"));

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


// Function W_MainMenuHeader.W_MainMenuHeader_C.LoadoutButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenuHeader_C::LoadoutButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.LoadoutButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.AnyNavButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UAdvancedUserWidget*/ AdvancedUserWidgetClass        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenuHeader_C::AnyNavButtonClicked__DelegateSignature(class UClass* /*UAdvancedUserWidget*/ AdvancedUserWidgetClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.AnyNavButtonClicked__DelegateSignature"));

	struct
	{
		class UClass* /*UAdvancedUserWidget*/ AdvancedUserWidgetClass;
	} params = {};

	params.AdvancedUserWidgetClass = AdvancedUserWidgetClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.LeaderboardButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenuHeader_C::LeaderboardButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.LeaderboardButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.Challenges Button Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenuHeader_C::Challenges_Button_Clicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.Challenges Button Clicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.Armory Button Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenuHeader_C::Armory_Button_Clicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.Armory Button Clicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.Stats Button Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenuHeader_C::Stats_Button_Clicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.Stats Button Clicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.Store Button Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenuHeader_C::Store_Button_Clicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.Store Button Clicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenuHeader.W_MainMenuHeader_C.Play Button Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenuHeader_C::Play_Button_Clicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenuHeader.W_MainMenuHeader_C.Play Button Clicked__DelegateSignature"));

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
