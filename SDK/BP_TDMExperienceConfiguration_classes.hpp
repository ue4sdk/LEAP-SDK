#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TDMExperienceConfiguration_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TDMExperienceConfiguration.BP_TDMExperienceConfiguration_C
// 0x0000 (0x00C8 - 0x00C8)
class UBP_TDMExperienceConfiguration_C : public UExperienceConfiguration
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TDMExperienceConfiguration.BP_TDMExperienceConfiguration_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
