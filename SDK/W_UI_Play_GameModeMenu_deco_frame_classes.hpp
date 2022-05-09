#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI_Play_GameModeMenu_deco_frame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_UI_Play_GameModeMenu_deco_frame.W_UI_Play_GameModeMenu_deco_frame_C
// 0x0018 (0x0588 - 0x0570)
class UW_UI_Play_GameModeMenu_deco_frame_C : public ULineSystemWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USizeBox*                                    SB_Root;                                                  // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_TextElement_C*                            txt_Hint;                                                 // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_UI_Play_GameModeMenu_deco_frame.W_UI_Play_GameModeMenu_deco_frame_C"));
		return ptr;
	}


	void SetHintText(const struct FText& Hint_Text);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_UI_Play_GameModeMenu_deco_frame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
