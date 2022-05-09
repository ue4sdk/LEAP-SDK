// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PlayerHudInfoWidgetComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerHudInfoWidgetComponent.BP_PlayerHudInfoWidgetComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_PlayerHudInfoWidgetComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerHudInfoWidgetComponent.BP_PlayerHudInfoWidgetComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerHudInfoWidgetComponent.BP_PlayerHudInfoWidgetComponent_C.UpdateVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PlayerHudInfoWidgetComponent_C::UpdateVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerHudInfoWidgetComponent.BP_PlayerHudInfoWidgetComponent_C.UpdateVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PlayerHudInfoWidgetComponent.BP_PlayerHudInfoWidgetComponent_C.DeathEvent
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerHudInfoWidgetComponent_C::DeathEvent(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerHudInfoWidgetComponent.BP_PlayerHudInfoWidgetComponent_C.DeathEvent"));

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


// Function BP_PlayerHudInfoWidgetComponent.BP_PlayerHudInfoWidgetComponent_C.OnVehicleChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      Driver                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        CurrentVehicle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        PreviousVehicle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerHudInfoWidgetComponent_C::OnVehicleChanged(class AProjectXCharacter* Driver, class AProjectXVehicle* CurrentVehicle, class AProjectXVehicle* PreviousVehicle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerHudInfoWidgetComponent.BP_PlayerHudInfoWidgetComponent_C.OnVehicleChanged"));

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


// Function BP_PlayerHudInfoWidgetComponent.BP_PlayerHudInfoWidgetComponent_C.OnVisibilityChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bVisible                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          VisibleTimeStamp               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerHudInfoWidgetComponent_C::OnVisibilityChanged(bool bVisible, float VisibleTimeStamp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerHudInfoWidgetComponent.BP_PlayerHudInfoWidgetComponent_C.OnVisibilityChanged"));

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


// Function BP_PlayerHudInfoWidgetComponent.BP_PlayerHudInfoWidgetComponent_C.ExecuteUbergraph_BP_PlayerHudInfoWidgetComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_PlayerHudInfoWidgetComponent_C::ExecuteUbergraph_BP_PlayerHudInfoWidgetComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerHudInfoWidgetComponent.BP_PlayerHudInfoWidgetComponent_C.ExecuteUbergraph_BP_PlayerHudInfoWidgetComponent"));

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
