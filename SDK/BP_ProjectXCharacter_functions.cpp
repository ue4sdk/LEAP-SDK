// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.GetLimbSocketNameForChain
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_LimbChains>      Chain                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   SocketName                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::GetLimbSocketNameForChain(TEnumAsByte<E_LimbChains> Chain, struct FName* SocketName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.GetLimbSocketNameForChain"));

	struct
	{
		TEnumAsByte<E_LimbChains>      Chain;
		struct FName                   SocketName;
	} params = {};

	params.Chain = Chain;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SocketName != nullptr)
		*SocketName = params.SocketName;
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.GetBoneNameForLimbRemoval
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Bone_Name_Query                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_LimbChains>      LimbChain                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::GetBoneNameForLimbRemoval(const struct FName& Bone_Name_Query, TEnumAsByte<E_LimbChains>* LimbChain)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.GetBoneNameForLimbRemoval"));

	struct
	{
		struct FName                   Bone_Name_Query;
		TEnumAsByte<E_LimbChains>      LimbChain;
	} params = {};

	params.Bone_Name_Query = Bone_Name_Query;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LimbChain != nullptr)
		*LimbChain = params.LimbChain;
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ShouldTick
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bShouldTick                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXCharacter_C::ShouldTick(float DeltaTime, bool* bShouldTick)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ShouldTick"));

	struct
	{
		float                          DeltaTime;
		bool                           bShouldTick;
	} params = {};

	params.DeltaTime = DeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bShouldTick != nullptr)
		*bShouldTick = params.bShouldTick;
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ShouldDrawTrails
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bShouldDraw                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXCharacter_C::ShouldDrawTrails(bool* bShouldDraw)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ShouldDrawTrails"));

	struct
	{
		bool                           bShouldDraw;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bShouldDraw != nullptr)
		*bShouldDraw = params.bShouldDraw;
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.CleanupVFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::CleanupVFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.CleanupVFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.GetDamageIndicatorWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::GetDamageIndicatorWidget(class UUserWidget** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.GetDamageIndicatorWidget"));

	struct
	{
		class UUserWidget*             Widget;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ApplyTeamColouring
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bAlly                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXCharacter_C::ApplyTeamColouring(bool bAlly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ApplyTeamColouring"));

	struct
	{
		bool                           bAlly;
	} params = {};

	params.bAlly = bAlly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.GetKillCamWidgetPlacementPivot
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector ABP_ProjectXCharacter_C::GetKillCamWidgetPlacementPivot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.GetKillCamWidgetPlacementPivot"));

	struct
	{
		struct FVector                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.WaitForController
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bReady                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXCharacter_C::WaitForController(bool* bReady)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.WaitForController"));

	struct
	{
		bool                           bReady;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bReady != nullptr)
		*bReady = params.bReady;
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnPlayerStateAcquired_D6CCA6FF486E5BE1F8A37C8E8A8CB628
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::OnPlayerStateAcquired_D6CCA6FF486E5BE1F8A37C8E8A8CB628(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnPlayerStateAcquired_D6CCA6FF486E5BE1F8A37C8E8A8CB628"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnGameStateAcquired_BA0AD3BD402A1E5E56742A88A8B51C33
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::OnGameStateAcquired_BA0AD3BD402A1E5E56742A88A8B51C33(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnGameStateAcquired_BA0AD3BD402A1E5E56742A88A8B51C33"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnNotifyEnd_C5F8B3344E951C054F980E979D58CFD0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::OnNotifyEnd_C5F8B3344E951C054F980E979D58CFD0(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnNotifyEnd_C5F8B3344E951C054F980E979D58CFD0"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnNotifyBegin_C5F8B3344E951C054F980E979D58CFD0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::OnNotifyBegin_C5F8B3344E951C054F980E979D58CFD0(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnNotifyBegin_C5F8B3344E951C054F980E979D58CFD0"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnInterrupted_C5F8B3344E951C054F980E979D58CFD0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::OnInterrupted_C5F8B3344E951C054F980E979D58CFD0(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnInterrupted_C5F8B3344E951C054F980E979D58CFD0"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnBlendOut_C5F8B3344E951C054F980E979D58CFD0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::OnBlendOut_C5F8B3344E951C054F980E979D58CFD0(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnBlendOut_C5F8B3344E951C054F980E979D58CFD0"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnCompleted_C5F8B3344E951C054F980E979D58CFD0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::OnCompleted_C5F8B3344E951C054F980E979D58CFD0(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnCompleted_C5F8B3344E951C054F980E979D58CFD0"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ReceiveTick"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnJumped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::OnJumped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnJumped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnLanded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_ProjectXCharacter_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnLanded"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.BndEvt__WeaponComponent_K2Node_ComponentBoundEvent_0_WeaponEquippedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstance*         Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::BndEvt__WeaponComponent_K2Node_ComponentBoundEvent_0_WeaponEquippedSignature__DelegateSignature(class UWeaponInstance* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.BndEvt__WeaponComponent_K2Node_ComponentBoundEvent_0_WeaponEquippedSignature__DelegateSignature"));

	struct
	{
		class UWeaponInstance*         Weapon;
	} params = {};

	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Healed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Health                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromPassiveRegen              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXCharacter_C::Healed(float Amount, float Health, bool bFromPassiveRegen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Healed"));

	struct
	{
		float                          Amount;
		float                          Health;
		bool                           bFromPassiveRegen;
	} params = {};

	params.Amount = Amount;
	params.Health = Health;
	params.bFromPassiveRegen = bFromPassiveRegen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.UpdateTeamCosmetics
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::UpdateTeamCosmetics()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.UpdateTeamCosmetics"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.UpdateTeamColouring
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::UpdateTeamColouring()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.UpdateTeamColouring"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.PlayerChangedTeam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::PlayerChangedTeam(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.PlayerChangedTeam"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.CreatePlayerInfoWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::CreatePlayerInfoWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.CreatePlayerInfoWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ShieldsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::ShieldsChanged(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ShieldsChanged"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ShieldsDepleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::ShieldsDepleted(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ShieldsDepleted"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnWaterRunStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::OnWaterRunStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnWaterRunStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnWaterRunEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::OnWaterRunEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnWaterRunEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnTightAimStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::OnTightAimStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnTightAimStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnTightAimStop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::OnTightAimStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnTightAimStop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.DashEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::DashEffect(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.DashEffect"));

	struct
	{
		struct FLinearColor            Color;
	} params = {};

	params.Color = Color;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.EffectLerp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::EffectLerp(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.EffectLerp"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ToggleIsInKillCam
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInKillCam                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXCharacter_C::ToggleIsInKillCam(bool bInKillCam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ToggleIsInKillCam"));

	struct
	{
		bool                           bInKillCam;
	} params = {};

	params.bInKillCam = bInKillCam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnNewWeaponEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstance*         Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::OnNewWeaponEquipped(class UWeaponInstance* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnNewWeaponEquipped"));

	struct
	{
		class UWeaponInstance*         Weapon;
	} params = {};

	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Died
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::Died(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Died"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.DamageTaken
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::DamageTaken(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.DamageTaken"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.DecayShieldEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::DecayShieldEffect(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.DecayShieldEffect"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ShieldShimmerEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::ShieldShimmerEffect(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ShieldShimmerEffect"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnBoostingChangedEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXCharacter_C::OnBoostingChangedEvent(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnBoostingChangedEvent"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnVehicleChangedDelegate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      Driver                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        CurrentVehicle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        PreviousVehicle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::OnVehicleChangedDelegate(class AProjectXCharacter* Driver, class AProjectXVehicle* CurrentVehicle, class AProjectXVehicle* PreviousVehicle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnVehicleChangedDelegate"));

	struct
	{
		class AProjectXCharacter*      Driver;
		class AProjectXVehicle*        CurrentVehicle;
		class AProjectXVehicle*        PreviousVehicle;
	} params = {};

	params.Driver = Driver;
	params.CurrentVehicle = CurrentVehicle;
	params.PreviousVehicle = PreviousVehicle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnPatternLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::OnPatternLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnPatternLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnTauntMessageReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::OnTauntMessageReceived()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnTauntMessageReceived"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnTauntFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::OnTauntFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnTauntFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Multicast DoubleJump
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::Multicast_DoubleJump()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Multicast DoubleJump"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnHoldingBreathChangedDelegate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXCharacter_C::OnHoldingBreathChangedDelegate(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnHoldingBreathChangedDelegate"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnDash
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXCharacter_C::OnDash(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnDash"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnCustomMovementToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECustomMovementType            CustomMovement                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggledState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXCharacter_C::OnCustomMovementToggled(ECustomMovementType CustomMovement, bool bToggledState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnCustomMovementToggled"));

	struct
	{
		ECustomMovementType            CustomMovement;
		bool                           bToggledState;
	} params = {};

	params.CustomMovement = CustomMovement;
	params.bToggledState = bToggledState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Multicast DashEffects
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::Multicast_DashEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Multicast DashEffects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnCosmeticallyDashEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::OnCosmeticallyDashEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnCosmeticallyDashEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.StopCosmeticDashEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::StopCosmeticDashEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.StopCosmeticDashEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.DashTrailIsEnding
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::DashTrailIsEnding(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.DashTrailIsEnding"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnClamberStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::OnClamberStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnClamberStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Multicast Cosmetically Clamber
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::Multicast_Cosmetically_Clamber()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Multicast Cosmetically Clamber"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnPlayerFootstep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       PhysicsMaterial                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::OnPlayerFootstep(class UPhysicalMaterial* PhysicsMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnPlayerFootstep"));

	struct
	{
		class UPhysicalMaterial*       PhysicsMaterial;
	} params = {};

	params.PhysicsMaterial = PhysicsMaterial;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.WeaponEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstance*         Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::WeaponEquipped(class UWeaponInstance* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.WeaponEquipped"));

	struct
	{
		class UWeaponInstance*         Weapon;
	} params = {};

	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Fade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::Fade(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Fade"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.HitByObject
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeadshot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UClass* /*UDamageType*/  DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class AActor*                  DamagingActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          RadialDamageLerp               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::HitByObject(float Damage, bool bHeadshot, class UClass* /*UDamageType*/ DamageType, class AActor* DamagingActor, float RadialDamageLerp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.HitByObject"));

	struct
	{
		float                          Damage;
		bool                           bHeadshot;
		class UClass* /*UDamageType*/  DamageType;
		class AActor*                  DamagingActor;
		float                          RadialDamageLerp;
	} params = {};

	params.Damage = Damage;
	params.bHeadshot = bHeadshot;
	params.DamageType = DamageType;
	params.DamagingActor = DamagingActor;
	params.RadialDamageLerp = RadialDamageLerp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnCloakChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bVisible                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          VisibleTimeStamp               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::OnCloakChanged(bool bVisible, float VisibleTimeStamp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnCloakChanged"));

	struct
	{
		bool                           bVisible;
		float                          VisibleTimeStamp;
	} params = {};

	params.bVisible = bVisible;
	params.VisibleTimeStamp = VisibleTimeStamp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnTauntToggled
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bTauntOn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXCharacter_C::OnTauntToggled(bool bTauntOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnTauntToggled"));

	struct
	{
		bool                           bTauntOn;
	} params = {};

	params.bTauntOn = bTauntOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.HandleDeathEffects
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEffectInfo        DeathEffectInfo                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_ProjectXCharacter_C::HandleDeathEffects(const struct FDeathEffectInfo& DeathEffectInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.HandleDeathEffects"));

	struct
	{
		struct FDeathEffectInfo        DeathEffectInfo;
	} params = {};

	params.DeathEffectInfo = DeathEffectInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Start Ragdoll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::Start_Ragdoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Start Ragdoll"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Slow Down
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::Slow_Down(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Slow Down"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Stop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::Stop(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Stop"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Start Weapon Ragdoll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::Start_Weapon_Ragdoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Start Weapon Ragdoll"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Spawn Limb for Chain
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_LimbChains>      Chain                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_ProjectXCharacter_C::Spawn_Limb_for_Chain(TEnumAsByte<E_LimbChains> Chain, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Spawn Limb for Chain"));

	struct
	{
		TEnumAsByte<E_LimbChains>      Chain;
		struct FHitResult              Hit;
	} params = {};

	params.Chain = Chain;
	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.UpdateHUDVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShowHUD                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXCharacter_C::UpdateHUDVisibility(bool bShowHUD)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.UpdateHUDVisibility"));

	struct
	{
		bool                           bShowHUD;
	} params = {};

	params.bShowHUD = bShowHUD;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnWorldOriginShiftUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWorld*                  InWorld                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FIntVector              PreviousOriginLocation         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FIntVector              NewOriginLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::OnWorldOriginShiftUpdate(class UWorld* InWorld, const struct FIntVector& PreviousOriginLocation, const struct FIntVector& NewOriginLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnWorldOriginShiftUpdate"));

	struct
	{
		class UWorld*                  InWorld;
		struct FIntVector              PreviousOriginLocation;
		struct FIntVector              NewOriginLocation;
	} params = {};

	params.InWorld = InWorld;
	params.PreviousOriginLocation = PreviousOriginLocation;
	params.NewOriginLocation = NewOriginLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.StopCosmeticDash
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::StopCosmeticDash()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.StopCosmeticDash"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.GameUserSettingUIUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::GameUserSettingUIUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.GameUserSettingUIUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.AddGlobalWarningWidgetComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          SafeZoneDistance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DangerZoneDistance             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MinDistanceToRender            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInterface*      Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   WarningTag                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Offset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::AddGlobalWarningWidgetComponent(float SafeZoneDistance, float DangerZoneDistance, float MinDistanceToRender, class UMaterialInterface* Icon, const struct FName& WarningTag, const struct FVector& Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.AddGlobalWarningWidgetComponent"));

	struct
	{
		float                          SafeZoneDistance;
		float                          DangerZoneDistance;
		float                          MinDistanceToRender;
		class UMaterialInterface*      Icon;
		struct FName                   WarningTag;
		struct FVector                 Offset;
	} params = {};

	params.SafeZoneDistance = SafeZoneDistance;
	params.DangerZoneDistance = DangerZoneDistance;
	params.MinDistanceToRender = MinDistanceToRender;
	params.Icon = Icon;
	params.WarningTag = WarningTag;
	params.Offset = Offset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.StopGlobalWarningWidgetComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   WarningTag                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::StopGlobalWarningWidgetComponent(const struct FName& WarningTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.StopGlobalWarningWidgetComponent"));

	struct
	{
		struct FName                   WarningTag;
	} params = {};

	params.WarningTag = WarningTag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.RagdollEnding
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::RagdollEnding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.RagdollEnding"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.SetupRagdollLifespan
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::SetupRagdollLifespan()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.SetupRagdollLifespan"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.DesintegrateRagdoll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::DesintegrateRagdoll(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.DesintegrateRagdoll"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Stop Ragdoll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::Stop_Ragdoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.Stop Ragdoll"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ExecuteUbergraph_BP_ProjectXCharacter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXCharacter_C::ExecuteUbergraph_BP_ProjectXCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.ExecuteUbergraph_BP_ProjectXCharacter"));

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


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnTaunt__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggleTaunt                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXCharacter_C::OnTaunt__DelegateSignature(bool bToggleTaunt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnTaunt__DelegateSignature"));

	struct
	{
		bool                           bToggleTaunt;
	} params = {};

	params.bToggleTaunt = bToggleTaunt;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnCosmeticallyClamber__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXCharacter_C::OnCosmeticallyClamber__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXCharacter.BP_ProjectXCharacter_C.OnCosmeticallyClamber__DelegateSignature"));

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
