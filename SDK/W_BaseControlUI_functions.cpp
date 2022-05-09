// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_BaseControlUI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_BaseControlUI.W_BaseControlUI_C.SelectUnformattedText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            CaptureTeam                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   EnemyText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   AllyText                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   TeamName                       (CPF_Parm, CPF_OutParm)

void UW_BaseControlUI_C::SelectUnformattedText(int CaptureTeam, const struct FText& EnemyText, const struct FText& AllyText, struct FText* TeamName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BaseControlUI.W_BaseControlUI_C.SelectUnformattedText"));

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


// Function W_BaseControlUI.W_BaseControlUI_C.GetNotificationText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACapturePoint*           CapturePoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OwningTeam                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CaptureTeam                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Notification                   (CPF_Parm, CPF_OutParm)

void UW_BaseControlUI_C::GetNotificationText(class ACapturePoint* CapturePoint, int OwningTeam, int CaptureTeam, struct FText* Notification)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BaseControlUI.W_BaseControlUI_C.GetNotificationText"));

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


// Function W_BaseControlUI.W_BaseControlUI_C.OnGameStateAcquired_9E9A8D844E809847D455099504A59B54
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_BaseControlUI_C::OnGameStateAcquired_9E9A8D844E809847D455099504A59B54(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BaseControlUI.W_BaseControlUI_C.OnGameStateAcquired_9E9A8D844E809847D455099504A59B54"));

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


// Function W_BaseControlUI.W_BaseControlUI_C.OnControlPointEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACapturePoint*           CapturePoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OwningTeam                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CaptureTeam                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_BaseControlUI_C::OnControlPointEvent(class ACapturePoint* CapturePoint, int OwningTeam, int CaptureTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BaseControlUI.W_BaseControlUI_C.OnControlPointEvent"));

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


// Function W_BaseControlUI.W_BaseControlUI_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_BaseControlUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BaseControlUI.W_BaseControlUI_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_BaseControlUI.W_BaseControlUI_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewMatchState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousMatchState             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_BaseControlUI_C::CustomEvent_1(const struct FName& NewMatchState, const struct FName& PreviousMatchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BaseControlUI.W_BaseControlUI_C.CustomEvent_1"));

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


// Function W_BaseControlUI.W_BaseControlUI_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_BaseControlUI_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BaseControlUI.W_BaseControlUI_C.PreConstruct"));

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


// Function W_BaseControlUI.W_BaseControlUI_C.LowTicketCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerController* PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_BaseControlUI_C::LowTicketCount(class AProjectXPlayerController* PlayerController, int Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BaseControlUI.W_BaseControlUI_C.LowTicketCount"));

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


// Function W_BaseControlUI.W_BaseControlUI_C.ExecuteUbergraph_W_BaseControlUI
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_BaseControlUI_C::ExecuteUbergraph_W_BaseControlUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BaseControlUI.W_BaseControlUI_C.ExecuteUbergraph_W_BaseControlUI"));

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
