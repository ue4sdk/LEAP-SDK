// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DirectionalDamageParent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.ResolveShooter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  DamagingActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Actor                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamageParent_C::ResolveShooter(class AActor* DamagingActor, class AActor** Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.ResolveShooter"));

	struct
	{
		class AActor*                  DamagingActor;
		class AActor*                  Actor;
	} params = {};

	params.DamagingActor = DamagingActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.OnPawnAcquired_39E59638420BA37AAF1B7F932C231A6D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamageParent_C::OnPawnAcquired_39E59638420BA37AAF1B7F932C231A6D(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.OnPawnAcquired_39E59638420BA37AAF1B7F932C231A6D"));

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


// Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_DirectionalDamageParent_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.OnHitNotify2D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeadshot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UClass* /*UDamageType*/  DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class AActor*                  DamagingActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          RadialDamageLerp               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamageParent_C::OnHitNotify2D(float Damage, bool bHeadshot, class UClass* /*UDamageType*/ DamageType, class AActor* DamagingActor, float RadialDamageLerp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.OnHitNotify2D"));

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


// Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.OnHitNotify3D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeadshot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UClass* /*UDamageType*/  DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class AActor*                  DamagingActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          RadialDamageLerp               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamageParent_C::OnHitNotify3D(float Damage, bool bHeadshot, class UClass* /*UDamageType*/ DamageType, class AActor* DamagingActor, float RadialDamageLerp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.OnHitNotify3D"));

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


// Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.CameraShake
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeadshot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UClass* /*UDamageType*/  DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class AActor*                  DamagingActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          RadialDamageLerp               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamageParent_C::CameraShake(float Damage, bool bHeadshot, class UClass* /*UDamageType*/ DamageType, class AActor* DamagingActor, float RadialDamageLerp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.CameraShake"));

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


// Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.Remove3DWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int64_t                        ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamageParent_C::Remove3DWidget(int64_t ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.Remove3DWidget"));

	struct
	{
		int64_t                        ID;
	} params = {};

	params.ID = ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.ExecuteUbergraph_W_DirectionalDamageParent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamageParent_C::ExecuteUbergraph_W_DirectionalDamageParent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageParent.W_DirectionalDamageParent_C.ExecuteUbergraph_W_DirectionalDamageParent"));

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
