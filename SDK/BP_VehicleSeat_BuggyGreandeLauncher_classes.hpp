#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VehicleSeat_BuggyGreandeLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleSeat_BuggyGreandeLauncher.BP_VehicleSeat_BuggyGreandeLauncher_C
// 0x0013 (0x0C38 - 0x0C25)
class ABP_VehicleSeat_BuggyGreandeLauncher_C : public ABP_ProjectXVehicle_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C25(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C28(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UCurveFloat*                                 CannonCurve;                                              // 0x0C30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VehicleSeat_BuggyGreandeLauncher.BP_VehicleSeat_BuggyGreandeLauncher_C"));
		return ptr;
	}


	void Set_Invalid_Team_Colour();
	void Set_Valid_Team_Colour();
	void ExecuteUbergraph_BP_VehicleSeat_BuggyGreandeLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
