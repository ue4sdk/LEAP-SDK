#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct FStruct_SubmenuCardConfiguration.FStruct_SubmenuCardConfiguration
// 0x01C8
struct FFStruct_SubmenuCardConfiguration
{
	struct FText                                       Title_2_1F30EF2E4DB7B0B30879A6AEFB91D55C;                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                TitleTextColor_30_AB6900494840B2AA04043196B020FDA5;       // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       Description_4_9E7F38F541521005A75962A133AA69F9;           // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                DescriptionTextColor_32_2A043CF54929B220C2A9109458143098; // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                DescriptionBGColor_62_4033A6AC45FB9513992128BC63D312EB;   // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTexture2D*                                  IconTexture_8_C151483240ED6E7DB4351B98D7C11A4E;           // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                IconColor_38_EE137A7C41BCD2E308F05597D312FB33;            // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTexture2D*                                  HeaderBackgroundImage_20_A3FEEAFE4A0F7DD6524515952EA71DE7;// 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                HeaderBGColo_36_81B6DEE042C68C95E9F4E7A9582895F2;         // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTexture2D*                                  HeaderImage_22_12452D9A42D2FF124B0B0B83E3E548AF;          // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                HeaderColor_37_070DAB4F46F57A1472887197B4CD114F;          // 0x0098(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                BorderColor_65_D2F2EEE342AC30F6498765BADB5624C3;          // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bHasBackCard_11_0DFBE7CD4EDDA596C3CDE3BE4A2B71DA;         // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	struct FText                                       CallToActionText_40_556C4DD74ECA1F3E2266DC9A1D13921A;     // 0x00C0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                CallToActionTextColor_41_F8F09889459FDACC4348B4949F7BB96D;// 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       BackCardCallToActionText_46_7CB4DDF744BFF5BF337E63BB3E4052B9;// 0x00E8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                BackCardCallToActionTextColor_43_5F7FC1664FA59E9244C48F9EC5EC04C4;// 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       BackCardTitle_48_F44FEB594F26B87A98A1119457F7F2AC;        // 0x0110(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                BackCardTitleColor_51_C958FB324CE69E14513B6EB8931611C5;   // 0x0128(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTexture2D*                                  BackCardBGPattern_54_1E8DD82142260B379B23C2862E6B9C7D;    // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                BackCardBGPatternColor_57_0DE2092742649AE6E77E6FA2AB7C4071;// 0x0140(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                BackCardBGColor_59_97D90B2E4F49C3820780A69965C1E411;      // 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<EGameType, bool>                              AvailableFilters_75_8D0B8F6A4AD9F0D7A6DE409D36DD56F2;     // 0x0160(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	TArray<EDifficultyLevel>                           Difficulties_73_988C03DF4944C7FC6ED53F97BC05949D;         // 0x01B0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UClass* /*UAdvancedUserWidget*/              ChildWidgetToOpen_79_FAA20CA644F759A8016FDC8F2A775515;    // 0x01C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
