// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_Repairgun_Healing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.IsSameTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSameTeam                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_Weapon_Repairgun_Healing_C::IsSameTeam(bool* IsSameTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.IsSameTeam"));

	struct
	{
		bool                           IsSameTeam;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsSameTeam != nullptr)
		*IsSameTeam = params.IsSameTeam;
}


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.GetWeaponMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  WeaponMesh                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_Healing_C::GetWeaponMesh(class USkeletalMeshComponent** WeaponMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.GetWeaponMesh"));

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


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.IsSplineValid
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_Weapon_Repairgun_Healing_C::IsSplineValid(bool* IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.IsSplineValid"));

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


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.OnBeamStartEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_Healing_C::OnBeamStartEvent(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.OnBeamStartEvent"));

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


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_Repairgun_Healing_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.OnBeamEndEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_Healing_C::OnBeamEndEvent(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.OnBeamEndEvent"));

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


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_Healing_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.ReceiveTick"));

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


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_Healing_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.ReceiveEndPlay"));

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


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.RefreshBeamColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Weapon_Repairgun_Healing_C::RefreshBeamColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.RefreshBeamColor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.BeamLatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_Healing_C::BeamLatch(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.BeamLatch"));

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


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.KillLoopingSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Weapon_Repairgun_Healing_C::KillLoopingSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.KillLoopingSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.BeamLetGo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_Healing_C::BeamLetGo(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.BeamLetGo"));

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


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.beamEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_Healing_C::beamEnd(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.beamEnd"));

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


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.K2_SearchingForTarget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_Weapon_Repairgun_Healing_C::K2_SearchingForTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.K2_SearchingForTarget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.K2_FireReleased
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_Healing_C::K2_FireReleased(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.K2_FireReleased"));

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


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.Cosmetically Search For Target
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Weapon_Repairgun_Healing_C::Cosmetically_Search_For_Target()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.Cosmetically Search For Target"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.Toggle CosmeticTarget Seraching
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_Weapon_Repairgun_Healing_C::Toggle_CosmeticTarget_Seraching(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.Toggle CosmeticTarget Seraching"));

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


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.K2_UnEquipComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_Repairgun_Healing_C::K2_UnEquipComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.K2_UnEquipComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.ExecuteUbergraph_BP_Weapon_Repairgun_Healing
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Repairgun_Healing_C::ExecuteUbergraph_BP_Weapon_Repairgun_Healing(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.ExecuteUbergraph_BP_Weapon_Repairgun_Healing"));

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


// Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.OnTargetSearching__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSearching                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_Weapon_Repairgun_Healing_C::OnTargetSearching__DelegateSignature(bool IsSearching)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Repairgun_Healing.BP_Weapon_Repairgun_Healing_C.OnTargetSearching__DelegateSignature"));

	struct
	{
		bool                           IsSearching;
	} params = {};

	params.IsSearching = IsSearching;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
