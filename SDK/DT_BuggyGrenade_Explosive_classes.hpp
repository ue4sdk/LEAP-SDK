#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DT_BuggyGrenade_Explosive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DT_BuggyGrenade_Explosive.DT_BuggyGrenade_Explosive_C
// 0x0000 (0x0160 - 0x0160)
class UDT_BuggyGrenade_Explosive_C : public UProjectXDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DT_BuggyGrenade_Explosive.DT_BuggyGrenade_Explosive_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
