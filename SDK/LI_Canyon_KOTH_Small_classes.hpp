#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LI_Canyon_KOTH_Small_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LI_Canyon_KOTH_Small.LI_Canyon_KOTH_Small_C
// 0x0000 (0x0438 - 0x0438)
class ULI_Canyon_KOTH_Small_C : public ULevelInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LI_Canyon_KOTH_Small.LI_Canyon_KOTH_Small_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
