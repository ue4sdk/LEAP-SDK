// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Hookshot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Hookshot.BP_Hookshot_C.ToggleSimulatedProxyTick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_Hookshot_C::ToggleSimulatedProxyTick(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.ToggleSimulatedProxyTick"));

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


// Function BP_Hookshot.BP_Hookshot_C.AreSplineMeshesValid
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_Hookshot_C::AreSplineMeshesValid(bool* IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.AreSplineMeshesValid"));

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


// Function BP_Hookshot.BP_Hookshot_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Hookshot_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Hookshot.BP_Hookshot_C.HookshotStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHookshotComponent*      HookshotComponent              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Hookshot_C::HookshotStart(class UHookshotComponent* HookshotComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.HookshotStart"));

	struct
	{
		class UHookshotComponent*      HookshotComponent;
	} params = {};

	params.HookshotComponent = HookshotComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Hookshot.BP_Hookshot_C.HookshotStop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHookshotComponent*      HookshotComponent              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Hookshot_C::HookshotStop(class UHookshotComponent* HookshotComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.HookshotStop"));

	struct
	{
		class UHookshotComponent*      HookshotComponent;
	} params = {};

	params.HookshotComponent = HookshotComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Hookshot.BP_Hookshot_C.Latch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Hookshot_C::Latch(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.Latch"));

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


// Function BP_Hookshot.BP_Hookshot_C.LerpBack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Hookshot_C::LerpBack(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.LerpBack"));

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


// Function BP_Hookshot.BP_Hookshot_C.Complete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Hookshot_C::Complete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.Complete"));

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


// Function BP_Hookshot.BP_Hookshot_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Hookshot_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.ReceiveTick"));

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


// Function BP_Hookshot.BP_Hookshot_C.LatchComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Hookshot_C::LatchComplete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.LatchComplete"));

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


// Function BP_Hookshot.BP_Hookshot_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Hookshot_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.ReceiveEndPlay"));

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


// Function BP_Hookshot.BP_Hookshot_C.Oscillate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Hookshot_C::Oscillate(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.Oscillate"));

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


// Function BP_Hookshot.BP_Hookshot_C.DeathEvent
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Hookshot_C::DeathEvent(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.DeathEvent"));

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


// Function BP_Hookshot.BP_Hookshot_C.Update Pitch Loop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Hookshot_C::Update_Pitch_Loop(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.Update Pitch Loop"));

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


// Function BP_Hookshot.BP_Hookshot_C.RefreshTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Hookshot_C::RefreshTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.RefreshTick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Hookshot.BP_Hookshot_C.ExecuteUbergraph_BP_Hookshot
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Hookshot_C::ExecuteUbergraph_BP_Hookshot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Hookshot.BP_Hookshot_C.ExecuteUbergraph_BP_Hookshot"));

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
