#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CapturePointWidgetComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C
// 0x0030 (0x0620 - 0x05F0)
class UBP_CapturePointWidgetComponent_C : public UAdvancedWidgetComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_ObjectiveIcon_C*                          ObjectiveIconWidget;                                      // 0x05F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_ObjectiveIcon_Styles>                Icon_Style;                                               // 0x0600(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Show_Distance;                                            // 0x0601(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Has_Designation;                                          // 0x0602(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Is_Marker;                                                // 0x0603(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0604(0x0004) MISSED OFFSET
	struct FText                                       DescriptionText;                                          // 0x0608(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C"));
		return ptr;
	}


	void GetCapturePoint(class ACapturePoint** CapturePoint);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle);
	void UpdateDescriptionText(const struct FText& DescriptionText);
	void ExecuteUbergraph_BP_CapturePointWidgetComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
