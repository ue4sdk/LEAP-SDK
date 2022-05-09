#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BroadcastMessage_AWO_ShieldGeneratorTaken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BroadcastMessage_AWO_ShieldGeneratorTaken.BP_BroadcastMessage_AWO_ShieldGeneratorTaken_C
// 0x0020 (0x0048 - 0x0028)
class UBP_BroadcastMessage_AWO_ShieldGeneratorTaken_C : public UBroadcastMessage
{
public:
	struct FString                                     EnemyShieldGeneratorTaken;                                // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     AllyShieldGeneratorTaken;                                 // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BroadcastMessage_AWO_ShieldGeneratorTaken.BP_BroadcastMessage_AWO_ShieldGeneratorTaken_C"));
		return ptr;
	}


	void K2_ReceiveMessage(class AProjectXPlayerController* PlayerController, int Data, class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, class UObject* Object);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
