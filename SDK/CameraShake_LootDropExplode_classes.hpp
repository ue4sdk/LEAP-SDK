#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CameraShake_LootDropExplode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraShake_LootDropExplode.CameraShake_LootDropExplode_C
// 0x0000 (0x0180 - 0x0180)
class UCameraShake_LootDropExplode_C : public UMatineeCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CameraShake_LootDropExplode.CameraShake_LootDropExplode_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
