// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_OrbitalStike_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OrbitalStike.BP_OrbitalStike_C.UpdateNumActiveLasers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Interp                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::UpdateNumActiveLasers(float Interp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.UpdateNumActiveLasers"));

	struct
	{
		float                          Interp;
	} params = {};

	params.Interp = Interp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.TotalTelegraphTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ABP_OrbitalStike_C::TotalTelegraphTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.TotalTelegraphTime"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.UpdateLaserPosition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USceneComponent*         Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            A                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::UpdateLaserPosition(float Distance, class USceneComponent* Target, int A)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.UpdateLaserPosition"));

	struct
	{
		float                          Distance;
		class USceneComponent*         Target;
		int                            A;
	} params = {};

	params.Distance = Distance;
	params.Target = Target;
	params.A = A;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.LaserSetup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Laser                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            A                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::LaserSetup(class UStaticMeshComponent* Laser, int A)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.LaserSetup"));

	struct
	{
		class UStaticMeshComponent*    Laser;
		int                            A;
	} params = {};

	params.Laser = Laser;
	params.A = A;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.GetGroundedLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 GroundedLocation               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::GetGroundedLocation(const struct FVector& Location, struct FVector* GroundedLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.GetGroundedLocation"));

	struct
	{
		struct FVector                 Location;
		struct FVector                 GroundedLocation;
	} params = {};

	params.Location = Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GroundedLocation != nullptr)
		*GroundedLocation = params.GroundedLocation;
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.GetAdjustedOrigin
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Origin                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::GetAdjustedOrigin(class AActor* Target, struct FVector* Origin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.GetAdjustedOrigin"));

	struct
	{
		class AActor*                  Target;
		struct FVector                 Origin;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Origin != nullptr)
		*Origin = params.Origin;
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.OnPlayerStateAcquired_7AA646EB49422A69FB5C2785CDD75EC0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::OnPlayerStateAcquired_7AA646EB49422A69FB5C2785CDD75EC0(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.OnPlayerStateAcquired_7AA646EB49422A69FB5C2785CDD75EC0"));

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


// Function BP_OrbitalStike.BP_OrbitalStike_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_OrbitalStike_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.TriggerExplosion
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrbitalStike_C::TriggerExplosion()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.TriggerExplosion"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.StartTelegraph
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrbitalStike_C::StartTelegraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.StartTelegraph"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::Finished(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.Finished"));

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


// Function BP_OrbitalStike.BP_OrbitalStike_C.FadeInlaser
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrbitalStike_C::FadeInlaser()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.FadeInlaser"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::FadeIn(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.FadeIn"));

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


// Function BP_OrbitalStike.BP_OrbitalStike_C.Spin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrbitalStike_C::Spin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.Spin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.Spinning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::Spinning(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.Spinning"));

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


// Function BP_OrbitalStike.BP_OrbitalStike_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.ReceiveTick"));

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


// Function BP_OrbitalStike.BP_OrbitalStike_C.OnFiringStart
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_OrbitalStike_C::OnFiringStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.OnFiringStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.OnFinishingStart
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_OrbitalStike_C::OnFinishingStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.OnFinishingStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.OnChargingStart
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_OrbitalStike_C::OnChargingStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.OnChargingStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrbitalStike_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.FireEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrbitalStike_C::FireEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.FireEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.Scale
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::Scale(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.Scale"));

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


// Function BP_OrbitalStike.BP_OrbitalStike_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::CustomEvent_2(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.CustomEvent_2"));

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


// Function BP_OrbitalStike.BP_OrbitalStike_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::CustomEvent_1(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.CustomEvent_1"));

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


// Function BP_OrbitalStike.BP_OrbitalStike_C.FadeLaser
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::FadeLaser(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.FadeLaser"));

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


// Function BP_OrbitalStike.BP_OrbitalStike_C.OnTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::OnTeamChanged(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.OnTeamChanged"));

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


// Function BP_OrbitalStike.BP_OrbitalStike_C.OnPlayerChangedTeam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::OnPlayerChangedTeam(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.OnPlayerChangedTeam"));

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


// Function BP_OrbitalStike.BP_OrbitalStike_C.TeamColouring
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrbitalStike_C::TeamColouring()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.TeamColouring"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike.BP_OrbitalStike_C.ExecuteUbergraph_BP_OrbitalStike
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_C::ExecuteUbergraph_BP_OrbitalStike(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike.BP_OrbitalStike_C.ExecuteUbergraph_BP_OrbitalStike"));

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
