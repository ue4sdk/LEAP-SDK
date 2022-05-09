#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_TextElement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_TextElement.W_TextElement_C
// 0x00C8 (0x0328 - 0x0260)
class UW_TextElement_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextBlock*                                  TextBlock_22;                                             // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       Text;                                                     // 0x0270(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FSlateFontInfo                              Font;                                                     // 0x0288(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FSlateColor                                 Font_Color;                                               // 0x02E0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	bool                                               AllCaps;                                                  // 0x0308(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               Spaced;                                                   // 0x0309(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               AutoWrap;                                                 // 0x030A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x030B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               TuncateText;                                              // 0x030C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x030D(0x0003) MISSED OFFSET
	int                                                CharacterLimit;                                           // 0x0310(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0314(0x0004) MISSED OFFSET
	struct FString                                     TruncationCharacters;                                     // 0x0318(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_TextElement.W_TextElement_C"));
		return ptr;
	}


	void SetStyleFast();
	void SetAllCaps();
	void Set_Text_Colour(const struct FSlateColor& InColorAndOpacity);
	void TruncateText();
	void Set_Wrap(bool AutoWrap);
	void Space_Text();
	void Set_Text(const struct FText& Text, bool All_Caps, bool Spaced);
	void Set_Style(const struct FSlateColor& Text_Color, const struct FSlateFontInfo& Font_Style);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_W_TextElement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
