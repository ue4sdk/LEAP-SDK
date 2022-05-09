#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SpawnedEventActor_Pistol_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpawnedEventActor_Pistol.BP_SpawnedEventActor_Pistol_C
// 0x0000 (0x0278 - 0x0278)
class ABP_SpawnedEventActor_Pistol_C : public ABP_SpawnedEventActor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SpawnedEventActor_Pistol.BP_SpawnedEventActor_Pistol_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
