#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI_ChallengesSmallEntry_Deco_Frame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_UI_ChallengesSmallEntry_Deco_Frame.W_UI_ChallengesSmallEntry_Deco_Frame_C
// 0x0020 (0x0590 - 0x0570)
class UW_UI_ChallengesSmallEntry_Deco_Frame_C : public ULineSystemWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UHorizontalBox*                              HB_Root;                                                  // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class Uw_ui_linesystem_element_C*                  HexBracket;                                               // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class Uw_ui_linesystem_element_C*                  line;                                                     // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_UI_ChallengesSmallEntry_Deco_Frame.W_UI_ChallengesSmallEntry_Deco_Frame_C"));
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_UI_ChallengesSmallEntry_Deco_Frame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
