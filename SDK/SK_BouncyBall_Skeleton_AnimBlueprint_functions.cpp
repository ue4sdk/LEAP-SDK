// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SK_BouncyBall_Skeleton_AnimBlueprint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SK_BouncyBall_Skeleton_AnimBlueprint.SK_BouncyBall_Skeleton_AnimBlueprint_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void USK_BouncyBall_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SK_BouncyBall_Skeleton_AnimBlueprint.SK_BouncyBall_Skeleton_AnimBlueprint_C.AnimGraph"));

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


// Function SK_BouncyBall_Skeleton_AnimBlueprint.SK_BouncyBall_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USK_BouncyBall_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SK_BouncyBall_Skeleton_AnimBlueprint.SK_BouncyBall_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation"));

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


// Function SK_BouncyBall_Skeleton_AnimBlueprint.SK_BouncyBall_Skeleton_AnimBlueprint_C.AddForwardRotation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USK_BouncyBall_Skeleton_AnimBlueprint_C::AddForwardRotation(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SK_BouncyBall_Skeleton_AnimBlueprint.SK_BouncyBall_Skeleton_AnimBlueprint_C.AddForwardRotation"));

	struct
	{
		float                          Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SK_BouncyBall_Skeleton_AnimBlueprint.SK_BouncyBall_Skeleton_AnimBlueprint_C.Boost
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USK_BouncyBall_Skeleton_AnimBlueprint_C::Boost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SK_BouncyBall_Skeleton_AnimBlueprint.SK_BouncyBall_Skeleton_AnimBlueprint_C.Boost"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SK_BouncyBall_Skeleton_AnimBlueprint.SK_BouncyBall_Skeleton_AnimBlueprint_C.StopBoost
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USK_BouncyBall_Skeleton_AnimBlueprint_C::StopBoost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SK_BouncyBall_Skeleton_AnimBlueprint.SK_BouncyBall_Skeleton_AnimBlueprint_C.StopBoost"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SK_BouncyBall_Skeleton_AnimBlueprint.SK_BouncyBall_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_BouncyBall_Skeleton_AnimBlueprint
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USK_BouncyBall_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_BouncyBall_Skeleton_AnimBlueprint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SK_BouncyBall_Skeleton_AnimBlueprint.SK_BouncyBall_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_BouncyBall_Skeleton_AnimBlueprint"));

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
