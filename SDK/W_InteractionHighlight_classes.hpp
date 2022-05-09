#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_InteractionHighlight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_InteractionHighlight.W_InteractionHighlight_C
// 0x002B (0x02A3 - 0x0278)
class UW_InteractionHighlight_C : public UHUDBasicUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UImage*                                      ActionIcon;                                               // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_UI_Progress_SimpleLinear_C*               ProgressBar;                                              // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_TextElement_C*                            txt_Action;                                               // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                     // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               InHighlightRange;                                         // 0x02A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               PVHeld;                                                   // 0x02A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               InteractHeld;                                             // 0x02A2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_InteractionHighlight.W_InteractionHighlight_C"));
		return ptr;
	}


	void OnPawnAcquired_F2145981401627EA72078AA390E244AA(class APawn* Pawn);
	void Construct();
	void OnHoldInteract(class UInteractableComponent* Interactable, class UPrimitiveComponent* Component, float HoldTime, class APlayerController* Sender);
	void OnStopHoldInteract(class UInteractableComponent* Interactable, class UPrimitiveComponent* Component, class APlayerController* Sender);
	void OnHighlightEnter(const struct FText& HighlightText, class UInteractableComponent* Interactable, class UPrimitiveComponent* Component, class APlayerController* Sender);
	void OnHighlightExit(class UInteractableComponent* Interactable, class UPrimitiveComponent* Component, class APlayerController* Sender);
	void FillProgressBar(float Value);
	void OnVehicleChanged(class AProjectXCharacter* Driver, class AProjectXVehicle* CurrentVehicle, class AProjectXVehicle* PreviousVehicle);
	void BindToNoneVehicle();
	void BindToVehicleEvents();
	void OnInteract(float ExitTime);
	void OnComplete();
	void UnBindToNoneVehicle();
	void OnPVUse(bool bHold, float HoldDuration);
	void UpdateVisibility();
	void StartProgressBar(float TimeTotal);
	void ExecuteUbergraph_W_InteractionHighlight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
