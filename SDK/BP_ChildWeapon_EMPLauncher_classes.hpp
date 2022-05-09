#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ChildWeapon_EMPLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ChildWeapon_EMPLauncher.BP_ChildWeapon_EMPLauncher_C
// 0x0000 (0x0A00 - 0x0A00)
class UBP_ChildWeapon_EMPLauncher_C : public UBP_ChildWeapon_ShotgunGrenadeLauncher_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ChildWeapon_EMPLauncher.BP_ChildWeapon_EMPLauncher_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
