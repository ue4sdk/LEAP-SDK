#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Hands_Minigun_1P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Hands_Minigun_1P.ABP_Hands_Minigun_1P_C
// 0x0000 (0x2124 - 0x2124)
class UABP_Hands_Minigun_1P_C : public UABP_Character_FirstPerson_V3_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_Hands_Minigun_1P.ABP_Hands_Minigun_1P_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
