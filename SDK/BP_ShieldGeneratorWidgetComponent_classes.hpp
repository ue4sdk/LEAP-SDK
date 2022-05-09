#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ShieldGeneratorWidgetComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShieldGeneratorWidgetComponent.BP_ShieldGeneratorWidgetComponent_C
// 0x0000 (0x0620 - 0x0620)
class UBP_ShieldGeneratorWidgetComponent_C : public UBP_CapturePointWidgetComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShieldGeneratorWidgetComponent.BP_ShieldGeneratorWidgetComponent_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
