// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_Repairgun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.GetWeaponMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  WeaponMesh                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_C::GetWeaponMesh(class USkeletalMeshComponent** WeaponMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.GetWeaponMesh"));

	struct
	{
		class USkeletalMeshComponent*  WeaponMesh;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (WeaponMesh != nullptr)
		*WeaponMesh = params.WeaponMesh;
}


// Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.IsSplineValid
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_Weapon_Repairgun_C::IsSplineValid(bool* IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.IsSplineValid"));

	struct
	{
		bool                           IsValid;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.RefreshBeamColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Weapon_Repairgun_C::RefreshBeamColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.RefreshBeamColor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.OnBeamStartEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_C::OnBeamStartEvent(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.OnBeamStartEvent"));

	struct
	{
		unsigned char                  Mode;
	} params = {};

	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_Repairgun_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.OnBeamEndEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_C::OnBeamEndEvent(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.OnBeamEndEvent"));

	struct
	{
		unsigned char                  Mode;
	} params = {};

	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.ReceiveTick"));

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


// Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.ReceiveEndPlay"));

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


// Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.BeamLatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_C::BeamLatch(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.BeamLatch"));

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


// Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.KillLoopingSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Weapon_Repairgun_C::KillLoopingSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.KillLoopingSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.BeamLetGo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_C::BeamLetGo(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.BeamLetGo"));

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


// Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.beamEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_C::beamEnd(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.beamEnd"));

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


// Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.ExecuteUbergraph_BP_Weapon_Repairgun
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_C::ExecuteUbergraph_BP_Weapon_Repairgun(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun.BP_Weapon_Repairgun_C.ExecuteUbergraph_BP_Weapon_Repairgun"));

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
