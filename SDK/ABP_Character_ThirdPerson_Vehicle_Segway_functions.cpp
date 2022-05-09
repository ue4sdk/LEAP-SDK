// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Character_ThirdPerson_Vehicle_Segway_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Character_ThirdPerson_Vehicle_Segway.ABP_Character_ThirdPerson_Vehicle_Segway_C.ExecuteUbergraph_ABP_Character_ThirdPerson_Vehicle_Segway
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Character_ThirdPerson_Vehicle_Segway_C::ExecuteUbergraph_ABP_Character_ThirdPerson_Vehicle_Segway(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Character_ThirdPerson_Vehicle_Segway.ABP_Character_ThirdPerson_Vehicle_Segway_C.ExecuteUbergraph_ABP_Character_ThirdPerson_Vehicle_Segway"));

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
