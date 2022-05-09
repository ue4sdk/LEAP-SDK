// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_OffScreenDamageIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.GetYawRotationDifference
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRotator                RotationOne                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FRotator                RotationTwo                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          RetunFloat                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_OffScreenDamageIndicator_C::GetYawRotationDifference(const struct FRotator& RotationOne, const struct FRotator& RotationTwo, float* RetunFloat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.GetYawRotationDifference"));

	struct
	{
		struct FRotator                RotationOne;
		struct FRotator                RotationTwo;
		float                          RetunFloat;
	} params = {};

	params.RotationOne = RotationOne;
	params.RotationTwo = RotationTwo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RetunFloat != nullptr)
		*RetunFloat = params.RetunFloat;
}


// Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.OnPawnAcquired_61918CF1482301B1F9D286BF9408ECA0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_OffScreenDamageIndicator_C::OnPawnAcquired_61918CF1482301B1F9D286BF9408ECA0(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.OnPawnAcquired_61918CF1482301B1F9D286BF9408ECA0"));

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


// Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_OffScreenDamageIndicator_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.TickWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_OffScreenDamageIndicator_C::TickWidget(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.TickWidget"));

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


// Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.UpdateHitIndicator
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_OffScreenDamageIndicator_C::UpdateHitIndicator()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.UpdateHitIndicator"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.TickDamageDownEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_OffScreenDamageIndicator_C::TickDamageDownEvent(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.TickDamageDownEvent"));

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


// Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.TickDamageRightEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_OffScreenDamageIndicator_C::TickDamageRightEvent(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.TickDamageRightEvent"));

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


// Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.TickDamageLeftEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_OffScreenDamageIndicator_C::TickDamageLeftEvent(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.TickDamageLeftEvent"));

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


// Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.OnHitNotify
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeadshot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UClass* /*UDamageType*/  DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class AActor*                  DamagingActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          RadialDamageLerp               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_OffScreenDamageIndicator_C::OnHitNotify(float Damage, bool bHeadshot, class UClass* /*UDamageType*/ DamageType, class AActor* DamagingActor, float RadialDamageLerp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.OnHitNotify"));

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


// Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.ExecuteUbergraph_W_OffScreenDamageIndicator
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_OffScreenDamageIndicator_C::ExecuteUbergraph_W_OffScreenDamageIndicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_OffScreenDamageIndicator.W_OffScreenDamageIndicator_C.ExecuteUbergraph_W_OffScreenDamageIndicator"));

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
