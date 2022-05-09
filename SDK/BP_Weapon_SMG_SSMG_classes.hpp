#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_SMG_SSMG_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_SMG_SSMG.BP_Weapon_SMG_SSMG_C
// 0x0000 (0x09E0 - 0x09E0)
class UBP_Weapon_SMG_SSMG_C : public UBP_Weapon_SMG_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_SMG_SSMG.BP_Weapon_SMG_SSMG_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
