// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_HoverTank_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HoverTank.BP_HoverTank_C.GetKillCamWidgetPlacementPivot
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector ABP_HoverTank_C::GetKillCamWidgetPlacementPivot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverTank.BP_HoverTank_C.GetKillCamWidgetPlacementPivot"));

	struct
	{
		struct FVector                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_HoverTank.BP_HoverTank_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_HoverTank_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverTank.BP_HoverTank_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverTank.BP_HoverTank_C.Set Invalid Team Colour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HoverTank_C::Set_Invalid_Team_Colour()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverTank.BP_HoverTank_C.Set Invalid Team Colour"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverTank.BP_HoverTank_C.Set Valid Team Colour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HoverTank_C::Set_Valid_Team_Colour()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverTank.BP_HoverTank_C.Set Valid Team Colour"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverTank.BP_HoverTank_C.ExecuteUbergraph_BP_HoverTank
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_HoverTank_C::ExecuteUbergraph_BP_HoverTank(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverTank.BP_HoverTank_C.ExecuteUbergraph_BP_HoverTank"));

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
