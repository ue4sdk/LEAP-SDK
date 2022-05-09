#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PartyChatMessage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_PartyChatMessage.W_PartyChatMessage_C
// 0x0068 (0x02C8 - 0x0260)
class UW_PartyChatMessage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTextBlock*                                  txt_Message;                                              // 0x0268(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Txt_Sender;                                               // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Txt_Time;                                                 // 0x0278(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       Message;                                                  // 0x0280(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ExposeOnSpawn)
	struct FText                                       Sender;                                                   // 0x0298(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ExposeOnSpawn)
	struct FText                                       Timestamp;                                                // 0x02B0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_PartyChatMessage.W_PartyChatMessage_C"));
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_W_PartyChatMessage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
