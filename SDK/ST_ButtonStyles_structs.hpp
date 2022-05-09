#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Slate_classes.hpp"
#include "SlateCore_classes.hpp"
#include "EMinMaxAbsolute_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_ButtonStyles.ST_ButtonStyles
// 0x02B8
struct FST_ButtonStyles
{
	bool                                               IsBlank_43_B58D93AC430BD9E8F5E8659A828CDC05;              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSlateBrush                                 ButtonImage_5_3AE5C0C4464FE009425553895D7F56FA;           // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 HighlightImage_4_C4DC5C4A4868DD970F4D04AB7C14741A;        // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 ActiveImage_44_CC8CC84B474671E460AADCA9E679B62B;          // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateFontInfo                              Font_25_AC51DC38446AED37F87932B968C1DBFE;                 // 0x01A0(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FSlateColor                                 FontColor_28_1EAC2BD1433BD5B445AE0387E3B459B2;            // 0x01F8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 FontColorHovered_32_7ACB061842897525F6FCD7B243630BFA;     // 0x0220(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 FontColorActive_51_1D23EF764569FD2216A803ABAEF74786;      // 0x0248(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<ETextJustify>                          TextAlign_41_9DA428D4494D44249F56C885E1C5EFA1;            // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	struct FVector2D                                   ButtonSize_37_3B90EFD14F0B63B03BDFB799E6684B4A;           // 0x0274(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<EMinMaxAbsolute>                       SizeWidthRule_61_C20FF63742F2B674A0154BBDB6637FFF;        // 0x027C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<EMinMaxAbsolute>                       SizeHeightRule_63_1880DDEF440D9ECB0CB229BF50EB97D7;       // 0x027D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x2];                                       // 0x027E(0x0002) MISSED OFFSET
	struct FMargin                                     ButtonMargins_48_6CC121344BCE3916B42649916F31BF6D;        // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FMargin                                     ContentPadding_64_D982F1E0463B4E03A800668BB8469D85;       // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector2D                                   ButtonShear_11_1D2810F04F0E90CCB50B56BF54D900AE;          // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMargin                                     CropButtonImage_70_218929554049E5ACADD0EE86EC6EC1AA;      // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
