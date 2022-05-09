// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_CapturePoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_CapturePoint.W_CapturePoint_C.UpdateSquadOrderIcons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_CapturePoint_C::UpdateSquadOrderIcons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.UpdateSquadOrderIcons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturePoint.W_CapturePoint_C.GetProgressBarDMI
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* MaterialDMI                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturePoint_C::GetProgressBarDMI(class UMaterialInstanceDynamic** MaterialDMI)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.GetProgressBarDMI"));

	struct
	{
		class UMaterialInstanceDynamic* MaterialDMI;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MaterialDMI != nullptr)
		*MaterialDMI = params.MaterialDMI;
}


// Function W_CapturePoint.W_CapturePoint_C.GetTeamColour
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Colour                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturePoint_C::GetTeamColour(int Team, struct FLinearColor* Colour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.GetTeamColour"));

	struct
	{
		int                            Team;
		struct FLinearColor            Colour;
	} params = {};

	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Colour != nullptr)
		*Colour = params.Colour;
}


// Function W_CapturePoint.W_CapturePoint_C.UpdatePlayerCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Players                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturePoint_C::UpdatePlayerCount(int Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.UpdatePlayerCount"));

	struct
	{
		int                            Players;
	} params = {};

	params.Players = Players;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturePoint.W_CapturePoint_C.OnPlayerStateAcquired_ACADF0EE49FAF6A2E159BF858DC28C2A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturePoint_C::OnPlayerStateAcquired_ACADF0EE49FAF6A2E159BF858DC28C2A(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.OnPlayerStateAcquired_ACADF0EE49FAF6A2E159BF858DC28C2A"));

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


// Function W_CapturePoint.W_CapturePoint_C.OnGameStateAcquired_0177F0584C22CC1F9310BDBECF625FE6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturePoint_C::OnGameStateAcquired_0177F0584C22CC1F9310BDBECF625FE6(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.OnGameStateAcquired_0177F0584C22CC1F9310BDBECF625FE6"));

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


// Function W_CapturePoint.W_CapturePoint_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_CapturePoint_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturePoint.W_CapturePoint_C.OnCaptureInfoChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCaptureInfo            CaptureInfo                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UW_CapturePoint_C::OnCaptureInfoChanged(const struct FCaptureInfo& CaptureInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.OnCaptureInfoChanged"));

	struct
	{
		struct FCaptureInfo            CaptureInfo;
	} params = {};

	params.CaptureInfo = CaptureInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturePoint.W_CapturePoint_C.OnTeamOwnerChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TeamOwner                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ACapturePoint*           CapturePoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturePoint_C::OnTeamOwnerChanged(int TeamOwner, class ACapturePoint* CapturePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.OnTeamOwnerChanged"));

	struct
	{
		int                            TeamOwner;
		class ACapturePoint*           CapturePoint;
	} params = {};

	params.TeamOwner = TeamOwner;
	params.CapturePoint = CapturePoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturePoint.W_CapturePoint_C.OnCapturePointEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACapturePoint*           CapturePoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OwningTeam                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CaptureTeam                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturePoint_C::OnCapturePointEvent(class ACapturePoint* CapturePoint, int OwningTeam, int CaptureTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.OnCapturePointEvent"));

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


// Function W_CapturePoint.W_CapturePoint_C.ResetCooldown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_CapturePoint_C::ResetCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.ResetCooldown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturePoint.W_CapturePoint_C.OnPlayerChangedTeam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturePoint_C::OnPlayerChangedTeam(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.OnPlayerChangedTeam"));

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


// Function W_CapturePoint.W_CapturePoint_C.UpdateProgressMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturePoint_C::UpdateProgressMaterial(class UMaterialInstance* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.UpdateProgressMaterial"));

	struct
	{
		class UMaterialInstance*       Material;
	} params = {};

	params.Material = Material;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturePoint.W_CapturePoint_C.SquadMemberAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturePoint_C::SquadMemberAdded(int SquadID, class AProjectXPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.SquadMemberAdded"));

	struct
	{
		int                            SquadID;
		class AProjectXPlayerState*    PlayerState;
	} params = {};

	params.SquadID = SquadID;
	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturePoint.W_CapturePoint_C.ResetOrdersVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_CapturePoint_C::ResetOrdersVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.ResetOrdersVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturePoint.W_CapturePoint_C.QuickChatMessageReceived
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FQuickChatInfo          QuickChatData                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UW_CapturePoint_C::QuickChatMessageReceived(const struct FQuickChatInfo& QuickChatData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.QuickChatMessageReceived"));

	struct
	{
		struct FQuickChatInfo          QuickChatData;
	} params = {};

	params.QuickChatData = QuickChatData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CapturePoint.W_CapturePoint_C.ExecuteUbergraph_W_CapturePoint
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturePoint_C::ExecuteUbergraph_W_CapturePoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.ExecuteUbergraph_W_CapturePoint"));

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


// Function W_CapturePoint.W_CapturePoint_C.OnOwnerChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TeamOwner                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ACapturePoint*           CapturePoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CapturePoint_C::OnOwnerChanged__DelegateSignature(int TeamOwner, class ACapturePoint* CapturePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CapturePoint.W_CapturePoint_C.OnOwnerChanged__DelegateSignature"));

	struct
	{
		int                            TeamOwner;
		class ACapturePoint*           CapturePoint;
	} params = {};

	params.TeamOwner = TeamOwner;
	params.CapturePoint = CapturePoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
