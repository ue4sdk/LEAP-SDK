#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DT_SemiAutoStingerExplosion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DT_SemiAutoStingerExplosion.DT_SemiAutoStingerExplosion_C
// 0x0000 (0x0160 - 0x0160)
class UDT_SemiAutoStingerExplosion_C : public UProjectXDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DT_SemiAutoStingerExplosion.DT_SemiAutoStingerExplosion_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
