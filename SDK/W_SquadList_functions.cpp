// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SquadList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SquadList.W_SquadList_C.CheckIfCurrentSquad
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            SquadID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsCurrentSquad                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SquadList_C::CheckIfCurrentSquad(int SquadID, bool* IsCurrentSquad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadList.W_SquadList_C.CheckIfCurrentSquad"));

	struct
	{
		int                            SquadID;
		bool                           IsCurrentSquad;
	} params = {};

	params.SquadID = SquadID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsCurrentSquad != nullptr)
		*IsCurrentSquad = params.IsCurrentSquad;
}


// Function W_SquadList.W_SquadList_C.OnPlayerStateAcquired_C78901A84F2FBEDDEEFC14869F3BB50B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadList_C::OnPlayerStateAcquired_C78901A84F2FBEDDEEFC14869F3BB50B(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadList.W_SquadList_C.OnPlayerStateAcquired_C78901A84F2FBEDDEEFC14869F3BB50B"));

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


// Function W_SquadList.W_SquadList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SquadList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadList.W_SquadList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadList.W_SquadList_C.OnSquadListChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SquadList_C::OnSquadListChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadList.W_SquadList_C.OnSquadListChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadList.W_SquadList_C.OnPlayersTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadList_C::OnPlayersTeamChanged(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadList.W_SquadList_C.OnPlayersTeamChanged"));

	struct
	{
		class AProjectXPlayerState*    PlayerState;
		unsigned char                  Team;
	} params = {};

	params.PlayerState = PlayerState;
	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadList.W_SquadList_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SquadList_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadList.W_SquadList_C.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadList.W_SquadList_C.Squad Change Confirmed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SquadList_C::Squad_Change_Confirmed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadList.W_SquadList_C.Squad Change Confirmed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadList.W_SquadList_C.ExecuteUbergraph_W_SquadList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadList_C::ExecuteUbergraph_W_SquadList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadList.W_SquadList_C.ExecuteUbergraph_W_SquadList"));

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


// Function W_SquadList.W_SquadList_C.OnSquadChangeConfirmed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SquadList_C::OnSquadChangeConfirmed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadList.W_SquadList_C.OnSquadChangeConfirmed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadList.W_SquadList_C.SquadChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            SquadNumber                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadList_C::SquadChanged__DelegateSignature(int SquadID, int SquadNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadList.W_SquadList_C.SquadChanged__DelegateSignature"));

	struct
	{
		int                            SquadID;
		int                            SquadNumber;
	} params = {};

	params.SquadID = SquadID;
	params.SquadNumber = SquadNumber;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadList.W_SquadList_C.CurrentSquadInfo__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentSquadID                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CurrentSquadNumber             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadList_C::CurrentSquadInfo__DelegateSignature(int CurrentSquadID, int CurrentSquadNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadList.W_SquadList_C.CurrentSquadInfo__DelegateSignature"));

	struct
	{
		int                            CurrentSquadID;
		int                            CurrentSquadNumber;
	} params = {};

	params.CurrentSquadID = CurrentSquadID;
	params.CurrentSquadNumber = CurrentSquadNumber;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
