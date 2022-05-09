// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Character_ThirdPerson_Unarmed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Character_ThirdPerson_Unarmed.ABP_Character_ThirdPerson_Unarmed_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Character_ThirdPerson_Unarmed_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Character_ThirdPerson_Unarmed.ABP_Character_ThirdPerson_Unarmed_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Character_ThirdPerson_Unarmed.ABP_Character_ThirdPerson_Unarmed_C.ExecuteUbergraph_ABP_Character_ThirdPerson_Unarmed
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Character_ThirdPerson_Unarmed_C::ExecuteUbergraph_ABP_Character_ThirdPerson_Unarmed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Character_ThirdPerson_Unarmed.ABP_Character_ThirdPerson_Unarmed_C.ExecuteUbergraph_ABP_Character_ThirdPerson_Unarmed"));

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
