// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_MeleeWeapon_OmnidirectionalPound_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MeleeWeapon_OmnidirectionalPound_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.ReceiveEndPlay"));

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


// Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.ChargeStartEvent_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TotalTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TimeElapsed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MeleeWeapon_OmnidirectionalPound_C::ChargeStartEvent_Event_1(float TotalTime, float TimeElapsed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.ChargeStartEvent_Event_1"));

	struct
	{
		float                          TotalTime;
		float                          TimeElapsed;
	} params = {};

	params.TotalTime = TotalTime;
	params.TimeElapsed = TimeElapsed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MeleeWeapon_OmnidirectionalPound_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.ChargeFinishedEvent_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TotalTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TimeElapsed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MeleeWeapon_OmnidirectionalPound_C::ChargeFinishedEvent_Event_1(float TotalTime, float TimeElapsed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.ChargeFinishedEvent_Event_1"));

	struct
	{
		float                          TotalTime;
		float                          TimeElapsed;
	} params = {};

	params.TotalTime = TotalTime;
	params.TimeElapsed = TimeElapsed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.K2_Equip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MeleeWeapon_OmnidirectionalPound_C::K2_Equip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.K2_Equip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.K2_UnEquip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MeleeWeapon_OmnidirectionalPound_C::K2_UnEquip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.K2_UnEquip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.OnLandedGround
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UBP_MeleeWeapon_OmnidirectionalPound_C::OnLandedGround(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.OnLandedGround"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.Died
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MeleeWeapon_OmnidirectionalPound_C::Died(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.Died"));

	struct
	{
		class AActor*                  Victim;
		float                          Damage;
		struct FDamageEvent            DamageEvent;
		class AController*             EventInstigator;
		class AActor*                  DamageCauser;
		class APlayerState*            InstigatorPlayerState;
	} params = {};

	params.Victim = Victim;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.InstigatorPlayerState = InstigatorPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.K2_Fire
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MeleeWeapon_OmnidirectionalPound_C::K2_Fire(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.K2_Fire"));

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


// Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.K2_ToggleDesignatorMarker
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  NewDesignatorMarker            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MeleeWeapon_OmnidirectionalPound_C::K2_ToggleDesignatorMarker(class AActor* NewDesignatorMarker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.K2_ToggleDesignatorMarker"));

	struct
	{
		class AActor*                  NewDesignatorMarker;
	} params = {};

	params.NewDesignatorMarker = NewDesignatorMarker;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.K2_UnEquipComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_MeleeWeapon_OmnidirectionalPound_C::K2_UnEquipComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.K2_UnEquipComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.Emit Warning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_MeleeWeapon_OmnidirectionalPound_C::Emit_Warning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.Emit Warning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.ExecuteUbergraph_BP_MeleeWeapon_OmnidirectionalPound
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_MeleeWeapon_OmnidirectionalPound_C::ExecuteUbergraph_BP_MeleeWeapon_OmnidirectionalPound(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MeleeWeapon_OmnidirectionalPound.BP_MeleeWeapon_OmnidirectionalPound_C.ExecuteUbergraph_BP_MeleeWeapon_OmnidirectionalPound"));

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
