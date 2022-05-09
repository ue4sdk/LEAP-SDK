// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Limb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Limb.BP_Limb_C.StartSimulating
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Impulse_Location               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Impulse                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Limb_C::StartSimulating(const struct FVector& Impulse_Location, const struct FVector& Impulse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Limb.BP_Limb_C.StartSimulating"));

	struct
	{
		struct FVector                 Impulse_Location;
		struct FVector                 Impulse;
	} params = {};

	params.Impulse_Location = Impulse_Location;
	params.Impulse = Impulse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Limb.BP_Limb_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Limb_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Limb.BP_Limb_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Limb.BP_Limb_C.Stop Limb Simulating
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Limb_C::Stop_Limb_Simulating()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Limb.BP_Limb_C.Stop Limb Simulating"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Limb.BP_Limb_C.RagdollEnding
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Limb_C::RagdollEnding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Limb.BP_Limb_C.RagdollEnding"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Limb.BP_Limb_C.DesintegrateMesh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Limb_C::DesintegrateMesh(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Limb.BP_Limb_C.DesintegrateMesh"));

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


// Function BP_Limb.BP_Limb_C.ExecuteUbergraph_BP_Limb
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Limb_C::ExecuteUbergraph_BP_Limb(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Limb.BP_Limb_C.ExecuteUbergraph_BP_Limb"));

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
