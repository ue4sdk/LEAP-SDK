// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_OrbitalStike_Small_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.TotalTelegraphTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ABP_OrbitalStike_Small_C::TotalTelegraphTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.TotalTelegraphTime"));

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


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.UpdateLaserPosition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USceneComponent*         Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            A                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_Small_C::UpdateLaserPosition(float Distance, class USceneComponent* Target, int A)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.UpdateLaserPosition"));

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


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.LaserSetup
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Laser                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            A                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_Small_C::LaserSetup(class UStaticMeshComponent* Laser, int A)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.LaserSetup"));

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


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.GetGroundedLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 GroundedLocation               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_Small_C::GetGroundedLocation(const struct FVector& Location, struct FVector* GroundedLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.GetGroundedLocation"));

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


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.GetAdjustedOrigin
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Origin                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_Small_C::GetAdjustedOrigin(class AActor* Target, struct FVector* Origin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.GetAdjustedOrigin"));

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


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_OrbitalStike_Small_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.TriggerExplosion
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrbitalStike_Small_C::TriggerExplosion()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.TriggerExplosion"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.StartTelegraph
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrbitalStike_Small_C::StartTelegraph()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.StartTelegraph"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_Small_C::Finished(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.Finished"));

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


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.FadeInlaser
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrbitalStike_Small_C::FadeInlaser()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.FadeInlaser"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_Small_C::FadeIn(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.FadeIn"));

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


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.Spin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrbitalStike_Small_C::Spin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.Spin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.Spinning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_Small_C::Spinning(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.Spinning"));

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


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_Small_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.ReceiveTick"));

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


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.OnFiringStart
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_OrbitalStike_Small_C::OnFiringStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.OnFiringStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.OnFinishingStart
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_OrbitalStike_Small_C::OnFinishingStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.OnFinishingStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.OnChargingStart
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_OrbitalStike_Small_C::OnChargingStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.OnChargingStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrbitalStike_Small_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.FireEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrbitalStike_Small_C::FireEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.FireEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.Scale
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_Small_C::Scale(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.Scale"));

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


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_Small_C::CustomEvent_2(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.CustomEvent_2"));

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


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_Small_C::CustomEvent_1(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.CustomEvent_1"));

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


// Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.ExecuteUbergraph_BP_OrbitalStike_Small
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrbitalStike_Small_C::ExecuteUbergraph_BP_OrbitalStike_Small(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrbitalStike_Small.BP_OrbitalStike_Small_C.ExecuteUbergraph_BP_OrbitalStike_Small"));

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
