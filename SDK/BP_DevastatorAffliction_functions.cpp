// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DevastatorAffliction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DevastatorAffliction.BP_DevastatorAffliction_C.CreateOverlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_DevastatorAffliction_C::CreateOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DevastatorAffliction.BP_DevastatorAffliction_C.CreateOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DevastatorAffliction.BP_DevastatorAffliction_C.K2_Start
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_DevastatorAffliction_C::K2_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DevastatorAffliction.BP_DevastatorAffliction_C.K2_Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DevastatorAffliction.BP_DevastatorAffliction_C.K2_End
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_DevastatorAffliction_C::K2_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DevastatorAffliction.BP_DevastatorAffliction_C.K2_End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DevastatorAffliction.BP_DevastatorAffliction_C.OnCharacterHitAtLocation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DevastatorAffliction_C::OnCharacterHitAtLocation(const struct FVector& Location, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DevastatorAffliction.BP_DevastatorAffliction_C.OnCharacterHitAtLocation"));

	struct
	{
		struct FVector                 Location;
		class AActor*                  DamageCauser;
	} params = {};

	params.Location = Location;
	params.DamageCauser = DamageCauser;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DevastatorAffliction.BP_DevastatorAffliction_C.ExecuteUbergraph_BP_DevastatorAffliction
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_DevastatorAffliction_C::ExecuteUbergraph_BP_DevastatorAffliction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DevastatorAffliction.BP_DevastatorAffliction_C.ExecuteUbergraph_BP_DevastatorAffliction"));

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
