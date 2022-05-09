// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Deployable_ReviveBeacon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.CreateHologram
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Deployable_ReviveBeacon_C::CreateHologram()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.CreateHologram"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnGameStateAcquired_E6CA78434408222AABA3EEAB9A1C94A0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ReviveBeacon_C::OnGameStateAcquired_E6CA78434408222AABA3EEAB9A1C94A0(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnGameStateAcquired_E6CA78434408222AABA3EEAB9A1C94A0"));

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


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Deployable_ReviveBeacon_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.Interpolate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ReviveBeacon_C::Interpolate(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.Interpolate"));

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


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnDeployStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_ReviveBeacon_C::OnDeployStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnDeployStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnDeployComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_ReviveBeacon_C::OnDeployComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnDeployComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.InitializeForTeam
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ReviveBeacon_C::InitializeForTeam(int Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.InitializeForTeam"));

	struct
	{
		int                            Team;
	} params = {};

	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnHoldExited
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Deployable_ReviveBeacon_C::OnHoldExited()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnHoldExited"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnHoldStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Deployable_ReviveBeacon_C::OnHoldStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnHoldStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.UpdateTeamColouring
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Deployable_ReviveBeacon_C::UpdateTeamColouring()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.UpdateTeamColouring"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnDeployableDied
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_ReviveBeacon_C::OnDeployableDied()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnDeployableDied"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnRequestHelp
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Deployable_ReviveBeacon_C::OnRequestHelp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnRequestHelp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.Occilate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Forwards                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_Deployable_ReviveBeacon_C::Occilate(bool Forwards)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.Occilate"));

	struct
	{
		bool                           Forwards;
	} params = {};

	params.Forwards = Forwards;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.UpdateLocation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ReviveBeacon_C::UpdateLocation(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.UpdateLocation"));

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


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OccilationComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ReviveBeacon_C::OccilationComplete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OccilationComplete"));

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


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ReviveBeacon_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.StartTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTime                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ReviveBeacon_C::StartTimer(float NewTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.StartTimer"));

	struct
	{
		float                          NewTime;
	} params = {};

	params.NewTime = NewTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnReviveStartTimeReplicated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          InReviveStartTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ReviveBeacon_C::OnReviveStartTimeReplicated(float InReviveStartTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnReviveStartTimeReplicated"));

	struct
	{
		float                          InReviveStartTime;
	} params = {};

	params.InReviveStartTime = InReviveStartTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnReviveRespawnActive
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Deployable_ReviveBeacon_C::OnReviveRespawnActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnReviveRespawnActive"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnDeadPlayerCanRedeploy
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Deployable_ReviveBeacon_C::OnDeadPlayerCanRedeploy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.OnDeadPlayerCanRedeploy"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.ExecuteUbergraph_BP_Deployable_ReviveBeacon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ReviveBeacon_C::ExecuteUbergraph_BP_Deployable_ReviveBeacon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.ExecuteUbergraph_BP_Deployable_ReviveBeacon"));

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


// Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.Revive Start Time Replicated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InReviveStartTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ReviveBeacon_C::Revive_Start_Time_Replicated__DelegateSignature(float InReviveStartTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ReviveBeacon.BP_Deployable_ReviveBeacon_C.Revive Start Time Replicated__DelegateSignature"));

	struct
	{
		float                          InReviveStartTime;
	} params = {};

	params.InReviveStartTime = InReviveStartTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
