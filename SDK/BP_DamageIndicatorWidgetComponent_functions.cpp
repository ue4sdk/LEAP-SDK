// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DamageIndicatorWidgetComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DamageIndicatorWidgetComponent.BP_DamageIndicatorWidgetComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_DamageIndicatorWidgetComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageIndicatorWidgetComponent.BP_DamageIndicatorWidgetComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DamageIndicatorWidgetComponent.BP_DamageIndicatorWidgetComponent_C.OnHitNotify
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeadshot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UClass* /*UDamageType*/  DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class AActor*                  DamagingActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          RadialDamageLerp               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DamageIndicatorWidgetComponent_C::OnHitNotify(float Damage, bool bHeadshot, class UClass* /*UDamageType*/ DamageType, class AActor* DamagingActor, float RadialDamageLerp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageIndicatorWidgetComponent.BP_DamageIndicatorWidgetComponent_C.OnHitNotify"));

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


// Function BP_DamageIndicatorWidgetComponent.BP_DamageIndicatorWidgetComponent_C.ExecuteUbergraph_BP_DamageIndicatorWidgetComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DamageIndicatorWidgetComponent_C::ExecuteUbergraph_BP_DamageIndicatorWidgetComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageIndicatorWidgetComponent.BP_DamageIndicatorWidgetComponent_C.ExecuteUbergraph_BP_DamageIndicatorWidgetComponent"));

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
