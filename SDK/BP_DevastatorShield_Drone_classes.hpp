#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DevastatorShield_Drone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DevastatorShield_Drone.BP_DevastatorShield_Drone_C
// 0x0000 (0x02B0 - 0x02B0)
class ABP_DevastatorShield_Drone_C : public ABP_DevastatorShield_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DevastatorShield_Drone.BP_DevastatorShield_Drone_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
