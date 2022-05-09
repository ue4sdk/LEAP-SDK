// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KillCameraComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KillCameraComponent_BP.KillCameraComponent_BP_C.GetPivot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Pivot                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillCameraComponent_BP_C::GetPivot(struct FVector* Pivot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.GetPivot"));

	struct
	{
		struct FVector                 Pivot;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Pivot != nullptr)
		*Pivot = params.Pivot;
}


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.OnGameStateAcquired_A15B982441D96936B78BCB8E0283FA4E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillCameraComponent_BP_C::OnGameStateAcquired_A15B982441D96936B78BCB8E0283FA4E(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.OnGameStateAcquired_A15B982441D96936B78BCB8E0283FA4E"));

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


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.Focus on dead body
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillCameraComponent_BP_C::Focus_on_dead_body()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.Focus on dead body"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.Look At Killer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillCameraComponent_BP_C::Look_At_Killer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.Look At Killer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.LookAtKillerUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillCameraComponent_BP_C::LookAtKillerUpdate(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.LookAtKillerUpdate"));

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


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.MoveToKillerUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillCameraComponent_BP_C::MoveToKillerUpdate(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.MoveToKillerUpdate"));

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


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.OnKillCameraInitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AProjectXCharacter*      Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXPlayerState*    KillerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UDamageType*/  DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UKillCameraComponent_BP_C::OnKillCameraInitialized(class AProjectXCharacter* Killed, class AActor* Killer, class AProjectXPlayerState* KillerState, class UClass* /*UDamageType*/ DamageType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.OnKillCameraInitialized"));

	struct
	{
		class AProjectXCharacter*      Killed;
		class AActor*                  Killer;
		class AProjectXPlayerState*    KillerState;
		class UClass* /*UDamageType*/  DamageType;
	} params = {};

	params.Killed = Killed;
	params.Killer = Killer;
	params.KillerState = KillerState;
	params.DamageType = DamageType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.OnSpectatorPawnAvailable
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ASpectatorPawn*          SpectatorPawn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillCameraComponent_BP_C::OnSpectatorPawnAvailable(class ASpectatorPawn* SpectatorPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.OnSpectatorPawnAvailable"));

	struct
	{
		class ASpectatorPawn*          SpectatorPawn;
	} params = {};

	params.SpectatorPawn = SpectatorPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.OnKillCamComponentRegistered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UActorComponent*         ObjectRegistered               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillCameraComponent_BP_C::OnKillCamComponentRegistered(class UActorComponent* ObjectRegistered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.OnKillCamComponentRegistered"));

	struct
	{
		class UActorComponent*         ObjectRegistered;
	} params = {};

	params.ObjectRegistered = ObjectRegistered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.Focus On Dead Body Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillCameraComponent_BP_C::Focus_On_Dead_Body_Update(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.Focus On Dead Body Update"));

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


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.On Focus On Dead Body End
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillCameraComponent_BP_C::On_Focus_On_Dead_Body_End(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.On Focus On Dead Body End"));

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


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.OnMoveToKillerEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillCameraComponent_BP_C::OnMoveToKillerEnd(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.OnMoveToKillerEnd"));

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


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.MoveToKiller
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillCameraComponent_BP_C::MoveToKiller()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.MoveToKiller"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.OnKillMessageReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXPlayerState*    Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UProjectXDamageType*/ DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// bool                           bWasHeadshot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKillCameraComponent_BP_C::OnKillMessageReceived(class AProjectXPlayerState* Killer, class AProjectXPlayerState* Killed, int Data, class UClass* /*UProjectXDamageType*/ DamageType, bool bWasHeadshot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.OnKillMessageReceived"));

	struct
	{
		class AProjectXPlayerState*    Killer;
		class AProjectXPlayerState*    Killed;
		int                            Data;
		class UClass* /*UProjectXDamageType*/ DamageType;
		bool                           bWasHeadshot;
	} params = {};

	params.Killer = Killer;
	params.Killed = Killed;
	params.Data = Data;
	params.DamageType = DamageType;
	params.bWasHeadshot = bWasHeadshot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillCameraComponent_BP.KillCameraComponent_BP_C.ExecuteUbergraph_KillCameraComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillCameraComponent_BP_C::ExecuteUbergraph_KillCameraComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillCameraComponent_BP.KillCameraComponent_BP_C.ExecuteUbergraph_KillCameraComponent_BP"));

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
