// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Character_ThirdPerson_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UABP_Character_ThirdPerson_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.AnimGraph"));

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


// Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.Hide Bone Chain
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_LimbChains>      Chain_to_hide                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Chain_Bone_Name                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Character_ThirdPerson_C::Hide_Bone_Chain(TEnumAsByte<E_LimbChains> Chain_to_hide, struct FName* Chain_Bone_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.Hide Bone Chain"));

	struct
	{
		TEnumAsByte<E_LimbChains>      Chain_to_hide;
		struct FName                   Chain_Bone_Name;
	} params = {};

	params.Chain_to_hide = Chain_to_hide;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Chain_Bone_Name != nullptr)
		*Chain_Bone_Name = params.Chain_Bone_Name;
}


// Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Character_ThirdPerson_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.AnimNotify_DiveStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Character_ThirdPerson_C::AnimNotify_DiveStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.AnimNotify_DiveStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.OnDiveStop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Character_ThirdPerson_C::OnDiveStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.OnDiveStop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.AnimNotify_DivingEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Character_ThirdPerson_C::AnimNotify_DivingEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.AnimNotify_DivingEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.OnClamberStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Character_ThirdPerson_C::OnClamberStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.OnClamberStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.OnMenuToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UABP_Character_ThirdPerson_C::OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.OnMenuToggled"));

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


// Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.OwnerEndPlay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Character_ThirdPerson_C::OwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.OwnerEndPlay"));

	struct
	{
		class AActor*                  Actor;
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.ExecuteUbergraph_ABP_Character_ThirdPerson
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Character_ThirdPerson_C::ExecuteUbergraph_ABP_Character_ThirdPerson(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Character_ThirdPerson.ABP_Character_ThirdPerson_C.ExecuteUbergraph_ABP_Character_ThirdPerson"));

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
