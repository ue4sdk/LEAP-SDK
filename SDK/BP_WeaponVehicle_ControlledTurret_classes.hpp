#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WeaponVehicle_ControlledTurret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponVehicle_ControlledTurret.BP_WeaponVehicle_ControlledTurret_C
// 0x0010 (0x08B8 - 0x08A8)
class UBP_WeaponVehicle_ControlledTurret_C : public UBP_WeaponVehicle_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_ControlledTurretOverlay_C*                Overlay;                                                  // 0x08B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WeaponVehicle_ControlledTurret.BP_WeaponVehicle_ControlledTurret_C"));
		return ptr;
	}


	void K2_EquipComplete();
	void FinishedTimer();
	void VehicleDestroyed();
	void ExecuteUbergraph_BP_WeaponVehicle_ControlledTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
