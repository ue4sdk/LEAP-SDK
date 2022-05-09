#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LI_Furong_Cinematic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LI_Furong_Cinematic.LI_Furong_Cinematic_C
// 0x0000 (0x0438 - 0x0438)
class ULI_Furong_Cinematic_C : public ULevelInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LI_Furong_Cinematic.LI_Furong_Cinematic_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
