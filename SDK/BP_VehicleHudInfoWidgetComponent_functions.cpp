// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VehicleHudInfoWidgetComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_VehicleHudInfoWidgetComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VehicleHudInfoWidgetComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.ReceiveEndPlay"));

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


// Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.DeathEvent
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VehicleHudInfoWidgetComponent_C::DeathEvent(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.DeathEvent"));

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


// Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.On Driver Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXVehicle*        Vehicle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXCharacter*      OldDriver                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VehicleHudInfoWidgetComponent_C::On_Driver_Changed(class AProjectXVehicle* Vehicle, class AProjectXCharacter* OldDriver)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.On Driver Changed"));

	struct
	{
		class AProjectXVehicle*        Vehicle;
		class AProjectXCharacter*      OldDriver;
	} params = {};

	params.Vehicle = Vehicle;
	params.OldDriver = OldDriver;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.OnPassengerChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXVehicle*        Vehicle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UVehicleSeatComponent*   Seat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXCharacter*      PreviousPassenger              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VehicleHudInfoWidgetComponent_C::OnPassengerChanged(class AProjectXVehicle* Vehicle, class UVehicleSeatComponent* Seat, class AProjectXCharacter* PreviousPassenger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.OnPassengerChanged"));

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


// Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.UpdateVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               NewVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VehicleHudInfoWidgetComponent_C::UpdateVisibility(ESlateVisibility NewVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.UpdateVisibility"));

	struct
	{
		ESlateVisibility               NewVisibility;
	} params = {};

	params.NewVisibility = NewVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.ExecuteUbergraph_BP_VehicleHudInfoWidgetComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_VehicleHudInfoWidgetComponent_C::ExecuteUbergraph_BP_VehicleHudInfoWidgetComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleHudInfoWidgetComponent.BP_VehicleHudInfoWidgetComponent_C.ExecuteUbergraph_BP_VehicleHudInfoWidgetComponent"));

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
