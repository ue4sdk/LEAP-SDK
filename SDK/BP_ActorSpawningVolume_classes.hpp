#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ActorSpawningVolume_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ActorSpawningVolume.BP_ActorSpawningVolume_C
// 0x0000 (0x02F8 - 0x02F8)
class ABP_ActorSpawningVolume_C : public AActorSpawningVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ActorSpawningVolume.BP_ActorSpawningVolume_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
