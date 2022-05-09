// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Deployable_ControlledRocket_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.GetControlledMesh
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UStaticMeshComponent* ABP_Deployable_ControlledRocket_C::GetControlledMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.GetControlledMesh"));

	struct
	{
		class UStaticMeshComponent*    ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.InitializeForTeam
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ControlledRocket_C::InitializeForTeam(int Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.InitializeForTeam"));

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


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_ControlledRocket_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ControlledRocket_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.ReceiveEndPlay"));

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


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeployComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_ControlledRocket_C::OnDeployComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeployComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeployableDied
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_ControlledRocket_C::OnDeployableDied()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeployableDied"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeployDeactivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_ControlledRocket_C::OnDeployDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeployDeactivated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.Toggle Warning Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_Deployable_ControlledRocket_C::Toggle_Warning_Widget(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.Toggle Warning Widget"));

	struct
	{
		bool                           bToggle;
	} params = {};

	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ControlledRocket_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.SetWarningState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_Deployable_ControlledRocket_C::SetWarningState(bool bNewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.SetWarningState"));

	struct
	{
		bool                           bNewState;
	} params = {};

	params.bNewState = bNewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.K2_PlayExplosionEffects
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ExplosionLocation              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ControlledRocket_C::K2_PlayExplosionEffects(const struct FVector& ExplosionLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.K2_PlayExplosionEffects"));

	struct
	{
		struct FVector                 ExplosionLocation;
	} params = {};

	params.ExplosionLocation = ExplosionLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.K2_OnControlAssumed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Deployable_ControlledRocket_C::K2_OnControlAssumed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.K2_OnControlAssumed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.K2_OnControlLost
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Deployable_ControlledRocket_C::K2_OnControlLost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.K2_OnControlLost"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.StartDeathAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ControlledRocket_C::StartDeathAnimation(float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.StartDeathAnimation"));

	struct
	{
		float                          Duration;
	} params = {};

	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.MoveDeathCameraAwayUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ControlledRocket_C::MoveDeathCameraAwayUpdate(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.MoveDeathCameraAwayUpdate"));

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


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.RotateDeathCameraStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ControlledRocket_C::RotateDeathCameraStart(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.RotateDeathCameraStart"));

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


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.DeathCameraRotateUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ControlledRocket_C::DeathCameraRotateUpdate(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.DeathCameraRotateUpdate"));

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


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeathAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ControlledRocket_C::OnDeathAnimationFinished(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeathAnimationFinished"));

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


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeathAnimationExit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Deployable_ControlledRocket_C::OnDeathAnimationExit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeathAnimationExit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeployStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_ControlledRocket_C::OnDeployStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeployStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.Play Explosion Effects Locally
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Deployable_ControlledRocket_C::Play_Explosion_Effects_Locally()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.Play Explosion Effects Locally"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.ExecuteUbergraph_BP_Deployable_ControlledRocket
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_ControlledRocket_C::ExecuteUbergraph_BP_Deployable_ControlledRocket(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.ExecuteUbergraph_BP_Deployable_ControlledRocket"));

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


// Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeathAnimationDone__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Deployable_ControlledRocket_C::OnDeathAnimationDone__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_ControlledRocket.BP_Deployable_ControlledRocket_C.OnDeathAnimationDone__DelegateSignature"));

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
