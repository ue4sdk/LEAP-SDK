// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_HUD.W_HUD_C.ToggleBindToSoftCeilingReached
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Bind                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_HUD_C::ToggleBindToSoftCeilingReached(class APawn* Pawn, bool Bind)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.ToggleBindToSoftCeilingReached"));

	struct
	{
		class APawn*                   Pawn;
		bool                           Bind;
	} params = {};

	params.Pawn = Pawn;
	params.Bind = Bind;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.OnPawnAcquired_483621C34A67B908D1233AA4B59E46A6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::OnPawnAcquired_483621C34A67B908D1233AA4B59E46A6(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.OnPawnAcquired_483621C34A67B908D1233AA4B59E46A6"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_HUD_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.OnWeaponError
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EWeaponError                   Error                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::OnWeaponError(EWeaponError Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.OnWeaponError"));

	struct
	{
		EWeaponError                   Error;
	} params = {};

	params.Error = Error;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.FadeOutWeaponError
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::FadeOutWeaponError(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.FadeOutWeaponError"));

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


// Function W_HUD.W_HUD_C.OnVictory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_HUD_C::OnVictory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.OnVictory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.OnLanded
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UW_HUD_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.OnLanded"));

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


// Function W_HUD.W_HUD_C.AnimateHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::AnimateHUD(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.AnimateHUD"));

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


// Function W_HUD.W_HUD_C.ProcessExpEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UExperienceEvent*        Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Value                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            B                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::ProcessExpEvent(class UExperienceEvent* Event, int Value, class APlayerState* B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.ProcessExpEvent"));

	struct
	{
		class UExperienceEvent*        Event;
		int                            Value;
		class APlayerState*            B;
	} params = {};

	params.Event = Event;
	params.Value = Value;
	params.B = B;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.Fade Energy Bar In
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_HUD_C::Fade_Energy_Bar_In()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.Fade Energy Bar In"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.Fade Energy Bar Out
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_HUD_C::Fade_Energy_Bar_Out()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.Fade Energy Bar Out"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.Hide Energy Bar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_HUD_C::Hide_Energy_Bar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.Hide Energy Bar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.Show Energy Bar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_HUD_C::Show_Energy_Bar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.Show Energy Bar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.On Player Death
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_HUD_C::On_Player_Death()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.On Player Death"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.OnWeaponsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstance*         Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::OnWeaponsUpdated(class UWeaponInstance* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.OnWeaponsUpdated"));

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


// Function W_HUD.W_HUD_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_HUD_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.OnSoftCeilingReached
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCeilingReached                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_HUD_C::OnSoftCeilingReached(bool bCeilingReached)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.OnSoftCeilingReached"));

	struct
	{
		bool                           bCeilingReached;
	} params = {};

	params.bCeilingReached = bCeilingReached;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.OnVehicleUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      Driver                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        CurrentVehicle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        PreviousVehicle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::OnVehicleUpdated(class AProjectXCharacter* Driver, class AProjectXVehicle* CurrentVehicle, class AProjectXVehicle* PreviousVehicle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.OnVehicleUpdated"));

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


// Function W_HUD.W_HUD_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::CustomEvent_2(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.CustomEvent_2"));

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


// Function W_HUD.W_HUD_C.FinishEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::FinishEvent(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.FinishEvent"));

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


// Function W_HUD.W_HUD_C.AddHealth
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InHealth                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::AddHealth(float InHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.AddHealth"));

	struct
	{
		float                          InHealth;
	} params = {};

	params.InHealth = InHealth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.AddShields
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InShields                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::AddShields(float InShields)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.AddShields"));

	struct
	{
		float                          InShields;
	} params = {};

	params.InShields = InShields;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.TickShields
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::TickShields(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.TickShields"));

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


// Function W_HUD.W_HUD_C.SetShieldsOpacity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::SetShieldsOpacity(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.SetShieldsOpacity"));

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


// Function W_HUD.W_HUD_C.OnTightAimStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_HUD_C::OnTightAimStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.OnTightAimStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.OnTightAimStop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_HUD_C::OnTightAimStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.OnTightAimStop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_HUD_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.OnMenuToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_HUD_C::OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.OnMenuToggled"));

	struct
	{
		class UAdvancedUserWidget*     Widget;
		bool                           bToggle;
	} params = {};

	params.Widget = Widget;
	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.Add Ammo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     Weapon_Slot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::Add_Ammo(float Amount, EEquipSlot Weapon_Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.Add Ammo"));

	struct
	{
		float                          Amount;
		EEquipSlot                     Weapon_Slot;
	} params = {};

	params.Amount = Amount;
	params.Weapon_Slot = Weapon_Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_HUD.W_HUD_C.ExecuteUbergraph_W_HUD
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_HUD_C::ExecuteUbergraph_W_HUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_HUD.W_HUD_C.ExecuteUbergraph_W_HUD"));

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
