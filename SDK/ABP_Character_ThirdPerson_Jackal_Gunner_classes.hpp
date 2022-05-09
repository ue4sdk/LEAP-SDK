#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Character_ThirdPerson_Jackal_Gunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Character_ThirdPerson_Jackal_Gunner.ABP_Character_ThirdPerson_Jackal_Gunner_C
// 0x0000 (0x70DC - 0x70DC)
class UABP_Character_ThirdPerson_Jackal_Gunner_C : public UABP_Character_ThirdPerson_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_Character_ThirdPerson_Jackal_Gunner.ABP_Character_ThirdPerson_Jackal_Gunner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
