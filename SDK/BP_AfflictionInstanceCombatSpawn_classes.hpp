#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstanceCombatSpawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AfflictionInstanceCombatSpawn.BP_AfflictionInstanceCombatSpawn_C
// 0x0000 (0x0200 - 0x0200)
class UBP_AfflictionInstanceCombatSpawn_C : public UAfflictionInstanceCombatSpawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AfflictionInstanceCombatSpawn.BP_AfflictionInstanceCombatSpawn_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
