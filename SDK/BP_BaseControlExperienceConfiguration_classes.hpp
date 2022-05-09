#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BaseControlExperienceConfiguration_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseControlExperienceConfiguration.BP_BaseControlExperienceConfiguration_C
// 0x0000 (0x00C8 - 0x00C8)
class UBP_BaseControlExperienceConfiguration_C : public UBP_ExperienceConfiguration_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BaseControlExperienceConfiguration.BP_BaseControlExperienceConfiguration_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
