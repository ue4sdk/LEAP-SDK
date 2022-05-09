#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Spacer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_Spacer.W_Spacer_C
// 0x0008 (0x0268 - 0x0260)
class UW_Spacer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_Spacer.W_Spacer_C"));
		return ptr;
	}


	void ExecuteUbergraph_W_Spacer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
