// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXVehicle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.GetLocalOccupant
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_ProjectXCharacter_C* LocalOccupant                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::GetLocalOccupant(class ABP_ProjectXCharacter_C** LocalOccupant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.GetLocalOccupant"));

	struct
	{
		class ABP_ProjectXCharacter_C* LocalOccupant;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LocalOccupant != nullptr)
		*LocalOccupant = params.LocalOccupant;
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.GetKillCamWidgetPlacementPivot
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector ABP_ProjectXVehicle_C::GetKillCamWidgetPlacementPivot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.GetKillCamWidgetPlacementPivot"));

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


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.GetAimStartPoint
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector ABP_ProjectXVehicle_C::GetAimStartPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.GetAimStartPoint"));

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


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnPlayerStateAcquired_7B7C20F44DCA79A3984D849A90A544F9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::OnPlayerStateAcquired_7B7C20F44DCA79A3984D849A90A544F9(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnPlayerStateAcquired_7B7C20F44DCA79A3984D849A90A544F9"));

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


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnGameStateAcquired_970D20774FBD40F468CD6F9D9553B9F3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::OnGameStateAcquired_970D20774FBD40F468CD6F9D9553B9F3(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnGameStateAcquired_970D20774FBD40F468CD6F9D9553B9F3"));

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


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ProjectXVehicle_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ReceiveTick"));

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


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.DriverChangedEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      PreviousDriver                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXCharacter*      NewDriver                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::DriverChangedEvent(class AProjectXCharacter* PreviousDriver, class AProjectXCharacter* NewDriver)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.DriverChangedEvent"));

	struct
	{
		class AProjectXCharacter*      PreviousDriver;
		class AProjectXCharacter*      NewDriver;
	} params = {};

	params.PreviousDriver = PreviousDriver;
	params.NewDriver = NewDriver;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnDeathEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_ProjectXVehicle_C::OnDeathEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnDeathEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.WeaponFireEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::WeaponFireEffects(const struct FVector& InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.WeaponFireEffects"));

	struct
	{
		struct FVector                 InputPin;
	} params = {};

	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.PlayWeaponFireEffects
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstanceVehicle*  Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::PlayWeaponFireEffects(class UWeaponInstanceVehicle* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.PlayWeaponFireEffects"));

	struct
	{
		class UWeaponInstanceVehicle*  Weapon;
	} params = {};

	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.HandleEngineTrails
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasDriver                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXVehicle_C::HandleEngineTrails(bool HasDriver)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.HandleEngineTrails"));

	struct
	{
		bool                           HasDriver;
	} params = {};

	params.HasDriver = HasDriver;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Bind Vehicle Events
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXVehicle_C::Bind_Vehicle_Events()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Bind Vehicle Events"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Toggle Low Health Effects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXVehicle_C::Toggle_Low_Health_Effects(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Toggle Low Health Effects"));

	struct
	{
		bool                           Active;
	} params = {};

	params.Active = Active;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Toggle Near Death Effects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXVehicle_C::Toggle_Near_Death_Effects(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Toggle Near Death Effects"));

	struct
	{
		bool                           Active;
	} params = {};

	params.Active = Active;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ReceivePossessed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             NewController                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ReceivePossessed"));

	struct
	{
		class AController*             NewController;
	} params = {};

	params.NewController = NewController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ReceiveUnpossessed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             OldController                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::ReceiveUnpossessed(class AController* OldController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ReceiveUnpossessed"));

	struct
	{
		class AController*             OldController;
	} params = {};

	params.OldController = OldController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.UpdateTeamColour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::UpdateTeamColour(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.UpdateTeamColour"));

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


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Create Hud Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXVehicle_C::Create_Hud_Widget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Create Hud Widget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnRepair
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Health                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromPassiveRegen              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXVehicle_C::OnRepair(float Amount, float Health, bool bFromPassiveRegen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnRepair"));

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


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Passengers Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXVehicle*        Vehicle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UVehicleSeatComponent*   Seat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXCharacter*      PreviousPassenger              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::Passengers_Changed(class AProjectXVehicle* Vehicle, class UVehicleSeatComponent* Seat, class AProjectXCharacter* PreviousPassenger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Passengers Changed"));

	struct
	{
		class AProjectXVehicle*        Vehicle;
		class UVehicleSeatComponent*   Seat;
		class AProjectXCharacter*      PreviousPassenger;
	} params = {};

	params.Vehicle = Vehicle;
	params.Seat = Seat;
	params.PreviousPassenger = PreviousPassenger;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.UpdateTeamColouring
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXVehicle_C::UpdateTeamColouring()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.UpdateTeamColouring"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ToggleIsInKillCam
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInKillCam                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXVehicle_C::ToggleIsInKillCam(bool bInKillCam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ToggleIsInKillCam"));

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


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.VehicleDamageTaken
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::VehicleDamageTaken(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.VehicleDamageTaken"));

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


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.On Engine Start
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXVehicle_C::On_Engine_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.On Engine Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.On Engine Stop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXVehicle_C::On_Engine_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.On Engine Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Set Invalid Team Colour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXVehicle_C::Set_Invalid_Team_Colour()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Set Invalid Team Colour"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Set Valid Team Colour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXVehicle_C::Set_Valid_Team_Colour()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.Set Valid Team Colour"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.On Seat Passenger Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXVehicle*        Vehicle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UVehicleSeatComponent*   Seat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXCharacter*      Previous_Passenger             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::On_Seat_Passenger_Changed(class AProjectXVehicle* Vehicle, class UVehicleSeatComponent* Seat, class AProjectXCharacter* Previous_Passenger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.On Seat Passenger Changed"));

	struct
	{
		class AProjectXVehicle*        Vehicle;
		class UVehicleSeatComponent*   Seat;
		class AProjectXCharacter*      Previous_Passenger;
	} params = {};

	params.Vehicle = Vehicle;
	params.Seat = Seat;
	params.Previous_Passenger = Previous_Passenger;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnBoostingStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXVehicle_C::OnBoostingStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnBoostingStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnBoostingStopped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXVehicle_C::OnBoostingStopped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnBoostingStopped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnBoostingToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXVehicle_C::OnBoostingToggled(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnBoostingToggled"));

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


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ReceiveEndPlay"));

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


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.K2_VehicleSetAsDisplay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_ProjectXVehicle_C::K2_VehicleSetAsDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.K2_VehicleSetAsDisplay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnWorldOriginShiftUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWorld*                  InWorld                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FIntVector              PreviousOriginLocation         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FIntVector              NewOriginLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::OnWorldOriginShiftUpdate(class UWorld* InWorld, const struct FIntVector& PreviousOriginLocation, const struct FIntVector& NewOriginLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.OnWorldOriginShiftUpdate"));

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


// Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ExecuteUbergraph_BP_ProjectXVehicle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXVehicle_C::ExecuteUbergraph_BP_ProjectXVehicle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXVehicle.BP_ProjectXVehicle_C.ExecuteUbergraph_BP_ProjectXVehicle"));

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
