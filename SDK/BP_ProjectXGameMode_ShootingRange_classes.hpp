#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXGameMode_ShootingRange_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXGameMode_ShootingRange.BP_ProjectXGameMode_ShootingRange_C
// 0x0000 (0x0508 - 0x0508)
class ABP_ProjectXGameMode_ShootingRange_C : public ABP_ProjectXGameModeTeamDeathmatch_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXGameMode_ShootingRange.BP_ProjectXGameMode_ShootingRange_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
