#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WeaponSpawnable_SpawnPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponSpawnable_SpawnPoint.BP_WeaponSpawnable_SpawnPoint_C
// 0x0000 (0x08B0 - 0x08B0)
class UBP_WeaponSpawnable_SpawnPoint_C : public UWeaponInstanceSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WeaponSpawnable_SpawnPoint.BP_WeaponSpawnable_SpawnPoint_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
