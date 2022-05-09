// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_KingOfTheHillUI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.SelectUnformattedText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            CaptureTeam                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   EnemyText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   AllyText                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   TeamName                       (CPF_Parm, CPF_OutParm)

void UW_KingOfTheHillUI_C::SelectUnformattedText(int CaptureTeam, const struct FText& EnemyText, const struct FText& AllyText, struct FText* TeamName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.SelectUnformattedText"));

	struct
	{
		int                            CaptureTeam;
		struct FText                   EnemyText;
		struct FText                   AllyText;
		struct FText                   TeamName;
	} params = {};

	params.CaptureTeam = CaptureTeam;
	params.EnemyText = EnemyText;
	params.AllyText = AllyText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TeamName != nullptr)
		*TeamName = params.TeamName;
}


// Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.GetNotificationText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACapturePoint*           CapturePoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OwningTeam                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CaptureTeam                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Notification                   (CPF_Parm, CPF_OutParm)

void UW_KingOfTheHillUI_C::GetNotificationText(class ACapturePoint* CapturePoint, int OwningTeam, int CaptureTeam, struct FText* Notification)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.GetNotificationText"));

	struct
	{
		class ACapturePoint*           CapturePoint;
		int                            OwningTeam;
		int                            CaptureTeam;
		struct FText                   Notification;
	} params = {};

	params.CapturePoint = CapturePoint;
	params.OwningTeam = OwningTeam;
	params.CaptureTeam = CaptureTeam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Notification != nullptr)
		*Notification = params.Notification;
}


// Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.Get King Of the Hill Notification Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKingOfTheHillPhase            Phase                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class ACapturePoint*>   Points                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UW_KingOfTheHillUI_C::Get_King_Of_the_Hill_Notification_Text(EKingOfTheHillPhase Phase, TArray<class ACapturePoint*>* Points, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.Get King Of the Hill Notification Text"));

	struct
	{
		EKingOfTheHillPhase            Phase;
		TArray<class ACapturePoint*>   Points;
		struct FText                   Result;
	} params = {};

	params.Phase = Phase;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Points != nullptr)
		*Points = params.Points;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.OnGameStateAcquired_E9C754964FDB378424B5748B7FDAF92C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KingOfTheHillUI_C::OnGameStateAcquired_E9C754964FDB378424B5748B7FDAF92C(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.OnGameStateAcquired_E9C754964FDB378424B5748B7FDAF92C"));

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


// Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_KingOfTheHillUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.OnControlPointEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACapturePoint*           CapturePoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OwningTeam                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CaptureTeam                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KingOfTheHillUI_C::OnControlPointEvent(class ACapturePoint* CapturePoint, int OwningTeam, int CaptureTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.OnControlPointEvent"));

	struct
	{
		class ACapturePoint*           CapturePoint;
		int                            OwningTeam;
		int                            CaptureTeam;
	} params = {};

	params.CapturePoint = CapturePoint;
	params.OwningTeam = OwningTeam;
	params.CaptureTeam = CaptureTeam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.OnMatchStateEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewMatchState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousMatchState             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KingOfTheHillUI_C::OnMatchStateEvent(const struct FName& NewMatchState, const struct FName& PreviousMatchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.OnMatchStateEvent"));

	struct
	{
		struct FName                   NewMatchState;
		struct FName                   PreviousMatchState;
	} params = {};

	params.NewMatchState = NewMatchState;
	params.PreviousMatchState = PreviousMatchState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.OnPhaseChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKingOfTheHillPhaseInfo PhaseInfo                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_KingOfTheHillUI_C::OnPhaseChanged(const struct FKingOfTheHillPhaseInfo& PhaseInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.OnPhaseChanged"));

	struct
	{
		struct FKingOfTheHillPhaseInfo PhaseInfo;
	} params = {};

	params.PhaseInfo = PhaseInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_KingOfTheHillUI_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.PreConstruct"));

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


// Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.OnIconsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_KingOfTheHillUI_C::OnIconsUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.OnIconsUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.LowOnTickets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerController* PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KingOfTheHillUI_C::LowOnTickets(class AProjectXPlayerController* PlayerController, int Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.LowOnTickets"));

	struct
	{
		class AProjectXPlayerController* PlayerController;
		int                            Data;
	} params = {};

	params.PlayerController = PlayerController;
	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.ExecuteUbergraph_W_KingOfTheHillUI
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KingOfTheHillUI_C::ExecuteUbergraph_W_KingOfTheHillUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingOfTheHillUI.W_KingOfTheHillUI_C.ExecuteUbergraph_W_KingOfTheHillUI"));

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
