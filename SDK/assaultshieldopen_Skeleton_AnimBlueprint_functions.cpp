// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "assaultshieldopen_Skeleton_AnimBlueprint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function assaultshieldopen_Skeleton_AnimBlueprint.assaultshieldopen_Skeleton_AnimBlueprint_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void Uassaultshieldopen_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function assaultshieldopen_Skeleton_AnimBlueprint.assaultshieldopen_Skeleton_AnimBlueprint_C.AnimGraph"));

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


// Function assaultshieldopen_Skeleton_AnimBlueprint.assaultshieldopen_Skeleton_AnimBlueprint_C.ExecuteUbergraph_assaultshieldopen_Skeleton_AnimBlueprint
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Uassaultshieldopen_Skeleton_AnimBlueprint_C::ExecuteUbergraph_assaultshieldopen_Skeleton_AnimBlueprint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function assaultshieldopen_Skeleton_AnimBlueprint.assaultshieldopen_Skeleton_AnimBlueprint_C.ExecuteUbergraph_assaultshieldopen_Skeleton_AnimBlueprint"));

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
