// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_MainMenu_NavigationList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.Focus_Blackmarket
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UW_MainMenu_NavigationList_C::Focus_Blackmarket(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.Focus_Blackmarket"));

	struct
	{
		EUINavigation                  Navigation;
		class UWidget*                 ReturnValue;
	} params = {};

	params.Navigation = Navigation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.Focus_Leaderboards
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UW_MainMenu_NavigationList_C::Focus_Leaderboards(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.Focus_Leaderboards"));

	struct
	{
		EUINavigation                  Navigation;
		class UWidget*                 ReturnValue;
	} params = {};

	params.Navigation = Navigation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.Focus_Stats
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UW_MainMenu_NavigationList_C::Focus_Stats(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.Focus_Stats"));

	struct
	{
		EUINavigation                  Navigation;
		class UWidget*                 ReturnValue;
	} params = {};

	params.Navigation = Navigation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.Focus_Armory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UW_MainMenu_NavigationList_C::Focus_Armory(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.Focus_Armory"));

	struct
	{
		EUINavigation                  Navigation;
		class UWidget*                 ReturnValue;
	} params = {};

	params.Navigation = Navigation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.InitializeOptionsMap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_NavigationList_C::InitializeOptionsMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.InitializeOptionsMap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_MainMenu_NavigationList_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.PreConstruct"));

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


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.BndEvt__btn_Armory_K2Node_ComponentBoundEvent_0_NavClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_MainMenu_NavigationList_C::BndEvt__btn_Armory_K2Node_ComponentBoundEvent_0_NavClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.BndEvt__btn_Armory_K2Node_ComponentBoundEvent_0_NavClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.BndEvt__btn_Leaderboard_K2Node_ComponentBoundEvent_1_NavClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_MainMenu_NavigationList_C::BndEvt__btn_Leaderboard_K2Node_ComponentBoundEvent_1_NavClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.BndEvt__btn_Leaderboard_K2Node_ComponentBoundEvent_1_NavClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.BndEvt__btn_Stats_K2Node_ComponentBoundEvent_3_NavClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_MainMenu_NavigationList_C::BndEvt__btn_Stats_K2Node_ComponentBoundEvent_3_NavClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.BndEvt__btn_Stats_K2Node_ComponentBoundEvent_3_NavClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.BndEvt__btn_Store_K2Node_ComponentBoundEvent_4_NavClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_MainMenu_NavigationList_C::BndEvt__btn_Store_K2Node_ComponentBoundEvent_4_NavClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.BndEvt__btn_Store_K2Node_ComponentBoundEvent_4_NavClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.SetActiveButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMainMenuOptions>  MainMenuOption                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_NavigationList_C::SetActiveButton(TEnumAsByte<EMainMenuOptions> MainMenuOption)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.SetActiveButton"));

	struct
	{
		TEnumAsByte<EMainMenuOptions>  MainMenuOption;
	} params = {};

	params.MainMenuOption = MainMenuOption;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_MainMenu_NavigationList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.DisableButtons
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_NavigationList_C::DisableButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.DisableButtons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.ExecuteUbergraph_W_MainMenu_NavigationList
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MainMenu_NavigationList_C::ExecuteUbergraph_W_MainMenu_NavigationList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.ExecuteUbergraph_W_MainMenu_NavigationList"));

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


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.LoadoutButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_NavigationList_C::LoadoutButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.LoadoutButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.StoreButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_NavigationList_C::StoreButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.StoreButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.StatsButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_NavigationList_C::StatsButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.StatsButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.ServersButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_NavigationList_C::ServersButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.ServersButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.LeaderboardButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_NavigationList_C::LeaderboardButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.LeaderboardButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.ArmoryButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MainMenu_NavigationList_C::ArmoryButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MainMenu_NavigationList.W_MainMenu_NavigationList_C.ArmoryButtonClicked__DelegateSignature"));

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
