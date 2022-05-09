// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PostGameMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PostGameMenu.W_PostGameMenu_C.ToggleDisplayMethod
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           EndGameInfo                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PostGameMenu_C::ToggleDisplayMethod(bool EndGameInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.ToggleDisplayMethod"));

	struct
	{
		bool                           EndGameInfo;
	} params = {};

	params.EndGameInfo = EndGameInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.OnGameStateAcquired_E4522C3C4C991E2F62A716AED0DDDBCA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PostGameMenu_C::OnGameStateAcquired_E4522C3C4C991E2F62A716AED0DDDBCA(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.OnGameStateAcquired_E4522C3C4C991E2F62A716AED0DDDBCA"));

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


// Function W_PostGameMenu.W_PostGameMenu_C.OnPlayerStateAcquired_778E84CC48760B06C0882E875E583198
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PostGameMenu_C::OnPlayerStateAcquired_778E84CC48760B06C0882E875E583198(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.OnPlayerStateAcquired_778E84CC48760B06C0882E875E583198"));

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


// Function W_PostGameMenu.W_PostGameMenu_C.OnGameStateAcquired_CD2016CB4E8A3F9EB2DAA5A664E047BE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PostGameMenu_C::OnGameStateAcquired_CD2016CB4E8A3F9EB2DAA5A664E047BE(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.OnGameStateAcquired_CD2016CB4E8A3F9EB2DAA5A664E047BE"));

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


// Function W_PostGameMenu.W_PostGameMenu_C.OnWidgetVisible
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PostGameMenu_C::OnWidgetVisible(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.OnWidgetVisible"));

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


// Function W_PostGameMenu.W_PostGameMenu_C.TimerEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PostGameMenu_C::TimerEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.TimerEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.LevelUpCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PostGameMenu_C::LevelUpCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.LevelUpCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PostGameMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PostGameMenu_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.UpdateTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PostGameMenu_C::UpdateTimer(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.UpdateTimer"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.Complete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PostGameMenu_C::Complete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.Complete"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.OnWinnerDecided
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Winner                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PostGameMenu_C::OnWinnerDecided(int Winner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.OnWinnerDecided"));

	struct
	{
		int                            Winner;
	} params = {};

	params.Winner = Winner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.BndEvt__btn_scoreboard_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PostGameMenu_C::BndEvt__btn_scoreboard_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.BndEvt__btn_scoreboard_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature"));

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


// Function W_PostGameMenu.W_PostGameMenu_C.BndEvt__btn_summary_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PostGameMenu_C::BndEvt__btn_summary_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.BndEvt__btn_summary_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature"));

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


// Function W_PostGameMenu.W_PostGameMenu_C.DisplayLevelUpPopUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PostGameMenu_C::DisplayLevelUpPopUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.DisplayLevelUpPopUp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.BndEvt__BP_EndGameInfo_K2Node_ComponentBoundEvent_4_LevelUpEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PostGameMenu_C::BndEvt__BP_EndGameInfo_K2Node_ComponentBoundEvent_4_LevelUpEvent__DelegateSignature(const struct FString& Class, int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.BndEvt__BP_EndGameInfo_K2Node_ComponentBoundEvent_4_LevelUpEvent__DelegateSignature"));

	struct
	{
		struct FString                 Class;
		int                            Level;
	} params = {};

	params.Class = Class;
	params.Level = Level;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.UpdateLevel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PostGameMenu_C::UpdateLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.UpdateLevel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.CloseLevelUpNotification
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PostGameMenu_C::CloseLevelUpNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.CloseLevelUpNotification"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.TestLevelUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PostGameMenu_C::TestLevelUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.TestLevelUp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.OnLevelupNotificationClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PostGameMenu_C::OnLevelupNotificationClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.OnLevelupNotificationClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PostGameMenu.W_PostGameMenu_C.ExecuteUbergraph_W_PostGameMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PostGameMenu_C::ExecuteUbergraph_W_PostGameMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PostGameMenu.W_PostGameMenu_C.ExecuteUbergraph_W_PostGameMenu"));

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
