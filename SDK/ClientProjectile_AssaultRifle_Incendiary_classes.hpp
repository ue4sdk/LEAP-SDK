#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ClientProjectile_AssaultRifle_Incendiary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClientProjectile_AssaultRifle_Incendiary.ClientProjectile_AssaultRifle_Incendiary_C
// 0x0000 (0x0428 - 0x0428)
class AClientProjectile_AssaultRifle_Incendiary_C : public AClientProjectile_AssaultRifle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ClientProjectile_AssaultRifle_Incendiary.ClientProjectile_AssaultRifle_Incendiary_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
