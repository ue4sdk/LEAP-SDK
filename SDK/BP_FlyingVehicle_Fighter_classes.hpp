#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_FlyingVehicle_Fighter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C
// 0x001B (0x0C40 - 0x0C25)
class ABP_FlyingVehicle_Fighter_C : public ABP_ProjectXVehicle_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C25(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C28(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UAudioComponent*                             VerticalEngineSound;                                      // 0x0C30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             ThursterSound;                                            // 0x0C38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C"));
		return ptr;
	}


	void HandleEngineTrails(bool HasDriver);
	void UpdateTeamColouring();
	void ReceiveTick(float DeltaSeconds);
	void DriverChangedEvent(class AProjectXCharacter* PreviousDriver, class AProjectXCharacter* NewDriver);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FlyingVehicle_Fighter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
