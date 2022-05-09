#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ReviveTeammateEvent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ReviveTeammateEvent.BP_ReviveTeammateEvent_C
// 0x0000 (0x0058 - 0x0058)
class UBP_ReviveTeammateEvent_C : public UBP_ExperienceEventBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ReviveTeammateEvent.BP_ReviveTeammateEvent_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
