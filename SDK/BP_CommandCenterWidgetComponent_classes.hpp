#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CommandCenterWidgetComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CommandCenterWidgetComponent.BP_CommandCenterWidgetComponent_C
// 0x0019 (0x0609 - 0x05F0)
class UBP_CommandCenterWidgetComponent_C : public UAdvancedWidgetComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	bool                                               Show_Distance;                                            // 0x05F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Has_Designation;                                          // 0x05F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Is_Marker;                                                // 0x05FA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x5];                                       // 0x05FB(0x0005) MISSED OFFSET
	class UW_ObjectiveIcon_C*                          ObjectiveIconWidget;                                      // 0x0600(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_ObjectiveIcon_Styles>                Icon_Style;                                               // 0x0608(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CommandCenterWidgetComponent.BP_CommandCenterWidgetComponent_C"));
		return ptr;
	}


	void GetCommandCenter(class ABP_CommandCenter_C** AsBP_Command_Center);
	void ReceiveBeginPlay();
	void CustomEvent(class UAdvancedUserWidget* Widget, bool bToggle);
	void ExecuteUbergraph_BP_CommandCenterWidgetComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
