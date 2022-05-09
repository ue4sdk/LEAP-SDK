// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Deployable_HealGrenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Deployable_HealGrenade.BP_Deployable_HealGrenade_C.OnDeployStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_HealGrenade_C::OnDeployStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_HealGrenade.BP_Deployable_HealGrenade_C.OnDeployStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_HealGrenade.BP_Deployable_HealGrenade_C.OnDeployComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_HealGrenade_C::OnDeployComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_HealGrenade.BP_Deployable_HealGrenade_C.OnDeployComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_HealGrenade.BP_Deployable_HealGrenade_C.OnDeployableDied
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_HealGrenade_C::OnDeployableDied()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_HealGrenade.BP_Deployable_HealGrenade_C.OnDeployableDied"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_HealGrenade.BP_Deployable_HealGrenade_C.ReceiveHit
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Other                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSelfMoved                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 HitLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 HitNormal                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_Deployable_HealGrenade_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_HealGrenade.BP_Deployable_HealGrenade_C.ReceiveHit"));

	struct
	{
		class UPrimitiveComponent*     MyComp;
		class AActor*                  Other;
		class UPrimitiveComponent*     OtherComp;
		bool                           bSelfMoved;
		struct FVector                 HitLocation;
		struct FVector                 HitNormal;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params = {};

	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_HealGrenade.BP_Deployable_HealGrenade_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Deployable_HealGrenade_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_HealGrenade.BP_Deployable_HealGrenade_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_HealGrenade.BP_Deployable_HealGrenade_C.ExecuteUbergraph_BP_Deployable_HealGrenade
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_HealGrenade_C::ExecuteUbergraph_BP_Deployable_HealGrenade(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_HealGrenade.BP_Deployable_HealGrenade_C.ExecuteUbergraph_BP_Deployable_HealGrenade"));

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
