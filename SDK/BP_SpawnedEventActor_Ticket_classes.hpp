#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SpawnedEventActor_Ticket_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpawnedEventActor_Ticket.BP_SpawnedEventActor_Ticket_C
// 0x0008 (0x0280 - 0x0278)
class ABP_SpawnedEventActor_Ticket_C : public ABP_SpawnedEventActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SpawnedEventActor_Ticket.BP_SpawnedEventActor_Ticket_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpawnedEventActor_Ticket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
