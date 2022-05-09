#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BroadcastMessage_CapturePoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BroadcastMessage_CapturePoint.BP_BroadcastMessage_CapturePoint_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BroadcastMessage_CapturePoint_C : public UBroadcastMessageCapturePoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BroadcastMessage_CapturePoint.BP_BroadcastMessage_CapturePoint_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
