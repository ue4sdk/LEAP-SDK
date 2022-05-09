#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_AIAssistantDialogueTutorial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_AIAssistantDialogueTutorial.W_AIAssistantDialogueTutorial_C
// 0x0008 (0x02C0 - 0x02B8)
class UW_AIAssistantDialogueTutorial_C : public UW_AIAssistantDialogue_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_AIAssistantDialogueTutorial.W_AIAssistantDialogueTutorial_C"));
		return ptr;
	}


	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_AIAssistantDialogueTutorial(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
