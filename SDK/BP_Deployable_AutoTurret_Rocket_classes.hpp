#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Deployable_AutoTurret_Rocket_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Deployable_AutoTurret_Rocket.BP_Deployable_AutoTurret_Rocket_C
// 0x0000 (0x0588 - 0x0588)
class ABP_Deployable_AutoTurret_Rocket_C : public ABP_Deployable_AutoTurret_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Deployable_AutoTurret_Rocket.BP_Deployable_AutoTurret_Rocket_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
