#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ClientProjectile_Disc_Smart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClientProjectile_Disc_Smart.ClientProjectile_Disc_Smart_C
// 0x0000 (0x04F8 - 0x04F8)
class AClientProjectile_Disc_Smart_C : public AClientProjectile_Disc_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ClientProjectile_Disc_Smart.ClientProjectile_Disc_Smart_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
