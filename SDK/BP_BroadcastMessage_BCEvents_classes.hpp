#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BroadcastMessage_BCEvents_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BroadcastMessage_BCEvents.BP_BroadcastMessage_BCEvents_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BroadcastMessage_BCEvents_C : public UBroadcastMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BroadcastMessage_BCEvents.BP_BroadcastMessage_BCEvents_C"));
		return ptr;
	}


	void IsOwnedCapturePoint(class AProjectXPlayerController* PlayerController, class UObject* Object, bool* bOwned);
	void GetTableRowName(class UObject* Object, struct FName* RowName);
	void K2_ReceiveMessage(class AProjectXPlayerController* PlayerController, int Data, class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, class UObject* Object);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
