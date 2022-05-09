// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlaySubmenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PlaySubmenu.W_PlaySubmenu_C.SelectBackBtn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UW_PlaySubmenu_C::SelectBackBtn(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.SelectBackBtn"));

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


// Function W_PlaySubmenu.W_PlaySubmenu_C.SelectLastFocusedCard
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UW_PlaySubmenu_C::SelectLastFocusedCard(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.SelectLastFocusedCard"));

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


// Function W_PlaySubmenu.W_PlaySubmenu_C.OnCardNavigation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UW_PlaySubmenu_C::OnCardNavigation(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.OnCardNavigation"));

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


// Function W_PlaySubmenu.W_PlaySubmenu_C.OnWidgetVisible
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_C::OnWidgetVisible(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.OnWidgetVisible"));

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


// Function W_PlaySubmenu.W_PlaySubmenu_C.BindToCardEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_C::BindToCardEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.BindToCardEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.CardFinishedReveal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_C::CardFinishedReveal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.CardFinishedReveal"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlaySubmenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.CollapseWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlaySubmenu_C::CollapseWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.CollapseWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.OnWidgetDelayedCollapseStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_C::OnWidgetDelayedCollapseStart(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.OnWidgetDelayedCollapseStart"));

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


// Function W_PlaySubmenu.W_PlaySubmenu_C.OnCardSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_PlaySubmenu_CardGameMode_C* CardClicked                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_C::OnCardSelected(class UW_PlaySubmenu_CardGameMode_C* CardClicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.OnCardSelected"));

	struct
	{
		class UW_PlaySubmenu_CardGameMode_C* CardClicked;
	} params = {};

	params.CardClicked = CardClicked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.Set Initial Style
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_C::Set_Initial_Style()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.Set Initial Style"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.BndEvt__btn_FindMatch_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_C::BndEvt__btn_FindMatch_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.BndEvt__btn_FindMatch_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

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


// Function W_PlaySubmenu.W_PlaySubmenu_C.OnMatchMaking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_C::OnMatchMaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.OnMatchMaking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.CancelMatchmaking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_C::CancelMatchmaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.CancelMatchmaking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.OnSessionStateUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESessionState                  State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_C::OnSessionStateUpdated(ESessionState State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.OnSessionStateUpdated"));

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


// Function W_PlaySubmenu.W_PlaySubmenu_C.UpdateSessionStateInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESessionState                  SessionState                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_C::UpdateSessionStateInfo(ESessionState SessionState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.UpdateSessionStateInfo"));

	struct
	{
		ESessionState                  SessionState;
	} params = {};

	params.SessionState = SessionState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.ToggleCardsLocks
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bLock                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlaySubmenu_C::ToggleCardsLocks(bool bLock)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.ToggleCardsLocks"));

	struct
	{
		bool                           bLock;
	} params = {};

	params.bLock = bLock;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.OnFiltersUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, EGameType> Filters                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_PlaySubmenu_C::OnFiltersUpdated(TMap<struct FString, EGameType> Filters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.OnFiltersUpdated"));

	struct
	{
		TMap<struct FString, EGameType> Filters;
	} params = {};

	params.Filters = Filters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_C::BndEvt__btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature"));

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


// Function W_PlaySubmenu.W_PlaySubmenu_C.On Join Session Result
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EJoinSessionResponse           JoinResult                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_C::On_Join_Session_Result(EJoinSessionResponse JoinResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.On Join Session Result"));

	struct
	{
		EJoinSessionResponse           JoinResult;
	} params = {};

	params.JoinResult = JoinResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.Close Dialogue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_C::Close_Dialogue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.Close Dialogue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.Re-try Matchmaking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_C::Re_try_Matchmaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.Re-try Matchmaking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.OnHordeModeDifficultiesUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, EDifficultyLevel> Difficulties                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_PlaySubmenu_C::OnHordeModeDifficultiesUpdated(TMap<struct FString, EDifficultyLevel> Difficulties)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.OnHordeModeDifficultiesUpdated"));

	struct
	{
		TMap<struct FString, EDifficultyLevel> Difficulties;
	} params = {};

	params.Difficulties = Difficulties;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.OnMenuBack
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlaySubmenu_C::OnMenuBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.OnMenuBack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.ExecuteUbergraph_W_PlaySubmenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_C::ExecuteUbergraph_W_PlaySubmenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.ExecuteUbergraph_W_PlaySubmenu"));

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


// Function W_PlaySubmenu.W_PlaySubmenu_C.MatchmakingStopped__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_C::MatchmakingStopped__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.MatchmakingStopped__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu.W_PlaySubmenu_C.MatchmakingStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 GameType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_C::MatchmakingStarted__DelegateSignature(const struct FString& GameType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu.W_PlaySubmenu_C.MatchmakingStarted__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
