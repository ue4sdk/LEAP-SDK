#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DT_Stinger_Thorn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DT_Stinger_Thorn.DT_Stinger_Thorn_C
// 0x0000 (0x0160 - 0x0160)
class UDT_Stinger_Thorn_C : public UDT_Stinger_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DT_Stinger_Thorn.DT_Stinger_Thorn_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
