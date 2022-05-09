// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Weapon_Minigun_1P_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UABP_Weapon_Minigun_1P_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Weapon_Minigun_1P_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params = {};

	params.DeltaTimeX = DeltaTimeX;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.OnMinigunStopFiring
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Weapon_Minigun_1P_C::OnMinigunStopFiring(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.OnMinigunStopFiring"));

	struct
	{
		unsigned char                  Mode;
	} params = {};

	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.On Weapon Equipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstance*         Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Weapon_Minigun_1P_C::On_Weapon_Equipped(class UWeaponInstance* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.On Weapon Equipped"));

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


// Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.On Weapon Overheat Start
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Minigun_1P_C::On_Weapon_Overheat_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.On Weapon Overheat Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.On Weapon Overheat End
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Weapon_Minigun_1P_C::On_Weapon_Overheat_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.On Weapon Overheat End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.OnMinigunStartFiring
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Weapon_Minigun_1P_C::OnMinigunStartFiring(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.OnMinigunStartFiring"));

	struct
	{
		unsigned char                  Mode;
	} params = {};

	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.ExecuteUbergraph_ABP_Weapon_Minigun_1P
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Weapon_Minigun_1P_C::ExecuteUbergraph_ABP_Weapon_Minigun_1P(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Weapon_Minigun_1P.ABP_Weapon_Minigun_1P_C.ExecuteUbergraph_ABP_Weapon_Minigun_1P"));

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
