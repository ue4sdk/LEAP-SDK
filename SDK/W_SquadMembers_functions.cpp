// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SquadMembers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SquadMembers.W_SquadMembers_C.RefreshList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AProjectXPlayerState*> PlayerStates                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_SquadMembers_C::RefreshList(TArray<class AProjectXPlayerState*> PlayerStates)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMembers.W_SquadMembers_C.RefreshList"));

	struct
	{
		TArray<class AProjectXPlayerState*> PlayerStates;
	} params = {};

	params.PlayerStates = PlayerStates;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadMembers.W_SquadMembers_C.GetSquadComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USquadComponent*         SquadComponent                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadMembers_C::GetSquadComponent(class USquadComponent** SquadComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMembers.W_SquadMembers_C.GetSquadComponent"));

	struct
	{
		class USquadComponent*         SquadComponent;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SquadComponent != nullptr)
		*SquadComponent = params.SquadComponent;
}


// Function W_SquadMembers.W_SquadMembers_C.OnPlayersTeamChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadMembers_C::OnPlayersTeamChanged(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMembers.W_SquadMembers_C.OnPlayersTeamChanged"));

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


// Function W_SquadMembers.W_SquadMembers_C.OnPlayerStateAcquired_A4A300B348BD0F9B7459BE8B230B2164
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadMembers_C::OnPlayerStateAcquired_A4A300B348BD0F9B7459BE8B230B2164(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMembers.W_SquadMembers_C.OnPlayerStateAcquired_A4A300B348BD0F9B7459BE8B230B2164"));

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


// Function W_SquadMembers.W_SquadMembers_C.OnPlayerStateAcquired_D69486904C72B7E8E78DEFB5FBD2AE5E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadMembers_C::OnPlayerStateAcquired_D69486904C72B7E8E78DEFB5FBD2AE5E(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMembers.W_SquadMembers_C.OnPlayerStateAcquired_D69486904C72B7E8E78DEFB5FBD2AE5E"));

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


// Function W_SquadMembers.W_SquadMembers_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SquadMembers_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMembers.W_SquadMembers_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadMembers.W_SquadMembers_C.OnSquadChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadMembers_C::OnSquadChanged(int SquadID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMembers.W_SquadMembers_C.OnSquadChanged"));

	struct
	{
		int                            SquadID;
	} params = {};

	params.SquadID = SquadID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadMembers.W_SquadMembers_C.ExecuteUbergraph_W_SquadMembers
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadMembers_C::ExecuteUbergraph_W_SquadMembers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMembers.W_SquadMembers_C.ExecuteUbergraph_W_SquadMembers"));

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
