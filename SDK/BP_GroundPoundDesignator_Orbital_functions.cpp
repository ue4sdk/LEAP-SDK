// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GroundPoundDesignator_Orbital_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GroundPoundDesignator_Orbital.BP_GroundPoundDesignator_Orbital_C.K2_UpdateValidDesignator
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bValidDesignator               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_GroundPoundDesignator_Orbital_C::K2_UpdateValidDesignator(bool bValidDesignator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator_Orbital.BP_GroundPoundDesignator_Orbital_C.K2_UpdateValidDesignator"));

	struct
	{
		bool                           bValidDesignator;
	} params = {};

	params.bValidDesignator = bValidDesignator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GroundPoundDesignator_Orbital.BP_GroundPoundDesignator_Orbital_C.SetColour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Colour                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GroundPoundDesignator_Orbital_C::SetColour(const struct FLinearColor& Colour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator_Orbital.BP_GroundPoundDesignator_Orbital_C.SetColour"));

	struct
	{
		struct FLinearColor            Colour;
	} params = {};

	params.Colour = Colour;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GroundPoundDesignator_Orbital.BP_GroundPoundDesignator_Orbital_C.FadeAway
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GroundPoundDesignator_Orbital_C::FadeAway(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator_Orbital.BP_GroundPoundDesignator_Orbital_C.FadeAway"));

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


// Function BP_GroundPoundDesignator_Orbital.BP_GroundPoundDesignator_Orbital_C.ExecuteUbergraph_BP_GroundPoundDesignator_Orbital
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GroundPoundDesignator_Orbital_C::ExecuteUbergraph_BP_GroundPoundDesignator_Orbital(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator_Orbital.BP_GroundPoundDesignator_Orbital_C.ExecuteUbergraph_BP_GroundPoundDesignator_Orbital"));

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
