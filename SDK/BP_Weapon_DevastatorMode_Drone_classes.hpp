#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_DevastatorMode_Drone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_DevastatorMode_Drone.BP_Weapon_DevastatorMode_Drone_C
// 0x0000 (0x0898 - 0x0898)
class UBP_Weapon_DevastatorMode_Drone_C : public UBP_Weapon_DevastatorMode_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_DevastatorMode_Drone.BP_Weapon_DevastatorMode_Drone_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
