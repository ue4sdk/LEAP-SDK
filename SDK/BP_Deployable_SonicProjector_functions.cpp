// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Deployable_SonicProjector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.OnDeployComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_SonicProjector_C::OnDeployComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.OnDeployComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.OnDeployStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_SonicProjector_C::OnDeployStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.OnDeployStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.OnDeployableDied
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_SonicProjector_C::OnDeployableDied()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.OnDeployableDied"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.OnDeployDeactivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_SonicProjector_C::OnDeployDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.OnDeployDeactivated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SonicProjector_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.ReceiveTick"));

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


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.InitializeForTeam
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SonicProjector_C::InitializeForTeam(int Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.InitializeForTeam"));

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


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Pulse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SonicProjector_C::Pulse(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Pulse"));

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


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.TeamColour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Deployable_SonicProjector_C::TeamColour()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.TeamColour"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.ReceiveHit
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Other                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSelfMoved                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 HitLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 HitNormal                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_Deployable_SonicProjector_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.ReceiveHit"));

	struct
	{
		class UPrimitiveComponent*     MyComp;
		class AActor*                  Other;
		class UPrimitiveComponent*     OtherComp;
		bool                           bSelfMoved;
		struct FVector                 HitLocation;
		struct FVector                 HitNormal;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params = {};

	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Deployable_SonicProjector_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Open Shell
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SonicProjector_C::Open_Shell(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Open Shell"));

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


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Core Rotate Ramp Up
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SonicProjector_C::Core_Rotate_Ramp_Up(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Core Rotate Ramp Up"));

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


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Rotate Core
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SonicProjector_C::Rotate_Core(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Rotate Core"));

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


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Landed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SonicProjector_C::Landed(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Landed"));

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


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Death Interpolate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SonicProjector_C::Death_Interpolate(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Death Interpolate"));

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


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Death End
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SonicProjector_C::Death_End(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Death End"));

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


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Throw Rotate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SonicProjector_C::Throw_Rotate(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.Throw Rotate"));

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


// Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.ExecuteUbergraph_BP_Deployable_SonicProjector
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SonicProjector_C::ExecuteUbergraph_BP_Deployable_SonicProjector(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SonicProjector.BP_Deployable_SonicProjector_C.ExecuteUbergraph_BP_Deployable_SonicProjector"));

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
