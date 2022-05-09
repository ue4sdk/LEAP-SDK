#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BroadcastMessage_SpawnedEvent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BroadcastMessage_SpawnedEvent.BP_BroadcastMessage_SpawnedEvent_C
// 0x0010 (0x0038 - 0x0028)
class UBP_BroadcastMessage_SpawnedEvent_C : public UBroadcastMessage
{
public:
	struct FString                                     SpawnIncoming;                                            // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BroadcastMessage_SpawnedEvent.BP_BroadcastMessage_SpawnedEvent_C"));
		return ptr;
	}


	void K2_ReceiveMessage(class AProjectXPlayerController* PlayerController, int Data, class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, class UObject* Object);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif