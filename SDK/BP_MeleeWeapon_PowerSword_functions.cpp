// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MeleeWeapon_PowerSword_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.GetAnimState
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UBP_MeleeWeapon_PowerSword_C::GetAnimState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.GetAnimState"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.K2_Fire
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MeleeWeapon_PowerSword_C::K2_Fire(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.K2_Fire"));

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


// Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.K2_Equip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MeleeWeapon_PowerSword_C::K2_Equip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.K2_Equip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.K2_UnEquip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MeleeWeapon_PowerSword_C::K2_UnEquip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.K2_UnEquip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.ToggleBattleInstance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MeleeWeapon_PowerSword_C::ToggleBattleInstance(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.ToggleBattleInstance"));

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


// Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MeleeWeapon_PowerSword_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.ReceiveEndPlay"));

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


// Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.OnWeaponParticleLoaded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystem*         Particle                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MeleeWeapon_PowerSword_C::OnWeaponParticleLoaded(class UParticleSystem* Particle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.OnWeaponParticleLoaded"));

	struct
	{
		class UParticleSystem*         Particle;
	} params = {};

	params.Particle = Particle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.SpawnWeaponParticles
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MeleeWeapon_PowerSword_C::SpawnWeaponParticles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.SpawnWeaponParticles"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.K2_FireReleased
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MeleeWeapon_PowerSword_C::K2_FireReleased(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.K2_FireReleased"));

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


// Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MeleeWeapon_PowerSword_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.ReflectionToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_MeleeWeapon_PowerSword_C::ReflectionToggled(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.ReflectionToggled"));

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


// Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MeleeWeapon_PowerSword_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.ReceiveTick"));

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


// Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.ExecuteUbergraph_BP_MeleeWeapon_PowerSword
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MeleeWeapon_PowerSword_C::ExecuteUbergraph_BP_MeleeWeapon_PowerSword(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_PowerSword.BP_MeleeWeapon_PowerSword_C.ExecuteUbergraph_BP_MeleeWeapon_PowerSword"));

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
