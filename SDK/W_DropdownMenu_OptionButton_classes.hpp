#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DropdownMenu_OptionButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_DropdownMenu_OptionButton.W_DropdownMenu_OptionButton_C
// 0x0360 (0x05C0 - 0x0260)
class UW_DropdownMenu_OptionButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UButton*                                     btn_Option;                                               // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_TextElement_C*                            txt_Option;                                               // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FString                                     ID;                                                       // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FSlateFontInfo                              Font;                                                     // 0x0288(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FSlateColor                                 FontColor;                                                // 0x02E0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FSlateColor                                 FontColorHovered;                                         // 0x0308(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	TEnumAsByte<ETextJustify>                          TextJustification;                                        // 0x0330(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	struct FButtonStyle                                Style;                                                    // 0x0338(0x0278) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FMulticastScriptDelegate                    OptionClicked;                                            // 0x05B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_DropdownMenu_OptionButton.W_DropdownMenu_OptionButton_C"));
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void BndEvt__btn_Option_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_DropdownMenu_OptionButton(int EntryPoint);
	void OptionClicked__DelegateSignature(const struct FString& ID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
