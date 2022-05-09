// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_UIFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.GetCosmeticTypeTable
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UDataTable*              FoundTable1                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDataTable*              FoundTable                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctionLibrary_C::GetCosmeticTypeTable(class UDataTable* FoundTable1, const struct FString& WeaponID, ECosmeticType Selection, class UObject* __WorldContext, class UDataTable** FoundTable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.GetCosmeticTypeTable"));

	struct
	{
		class UDataTable*              FoundTable1;
		struct FString                 WeaponID;
		ECosmeticType                  Selection;
		class UObject*                 __WorldContext;
		class UDataTable*              FoundTable;
	} params = {};

	params.FoundTable1 = FoundTable1;
	params.WeaponID = WeaponID;
	params.Selection = Selection;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (FoundTable != nullptr)
		*FoundTable = params.FoundTable;
}


// Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.Init Team Colours
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctionLibrary_C::Init_Team_Colours(class APlayerController* OwningPlayer, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.Init Team Colours"));

	struct
	{
		class APlayerController*       OwningPlayer;
		class UObject*                 __WorldContext;
	} params = {};

	params.OwningPlayer = OwningPlayer;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.GetTeamColour
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            BaseColour                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            MidColour                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            DarkColour                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            EmissiveColour                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctionLibrary_C::GetTeamColour(int Team, class UObject* __WorldContext, struct FLinearColor* BaseColour, struct FLinearColor* MidColour, struct FLinearColor* DarkColour, struct FLinearColor* EmissiveColour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.GetTeamColour"));

	struct
	{
		int                            Team;
		class UObject*                 __WorldContext;
		struct FLinearColor            BaseColour;
		struct FLinearColor            MidColour;
		struct FLinearColor            DarkColour;
		struct FLinearColor            EmissiveColour;
	} params = {};

	params.Team = Team;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (BaseColour != nullptr)
		*BaseColour = params.BaseColour;
	if (MidColour != nullptr)
		*MidColour = params.MidColour;
	if (DarkColour != nullptr)
		*DarkColour = params.DarkColour;
	if (EmissiveColour != nullptr)
		*EmissiveColour = params.EmissiveColour;
}


// Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.GetSteamAvatar
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTexture2D* UBP_UIFunctionLibrary_C::GetSteamAvatar(class APlayerState* PlayerState, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.GetSteamAvatar"));

	struct
	{
		class APlayerState*            PlayerState;
		class UObject*                 __WorldContext;
		class UTexture2D*              ReturnValue;
	} params = {};

	params.PlayerState = PlayerState;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.UpdateAudioSettings
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          FadeTimeIn                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctionLibrary_C::UpdateAudioSettings(class UObject* WorldContextObject, float FadeTimeIn, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.UpdateAudioSettings"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          FadeTimeIn;
		class UObject*                 __WorldContext;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.FadeTimeIn = FadeTimeIn;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.GetDateDeltaTime
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDateTime               DateStart                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDateTime               NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctionLibrary_C::GetDateDeltaTime(const struct FDateTime& DateStart, const struct FDateTime& NewParam, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.GetDateDeltaTime"));

	struct
	{
		struct FDateTime               DateStart;
		struct FDateTime               NewParam;
		class UObject*                 __WorldContext;
	} params = {};

	params.DateStart = DateStart;
	params.NewParam = NewParam;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.CreateItemButton
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       OwningPlayer                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   DisplayText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Equiped                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FScriptDelegate         Clicked                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_ItemButton_C*         ReturnValue1                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctionLibrary_C::CreateItemButton(const struct FString& ID, const struct FString& WeaponName, ECosmeticType Type, class APlayerController* OwningPlayer, const struct FText& DisplayText, bool Equiped, const struct FScriptDelegate& Clicked, class UObject* __WorldContext, class UW_ItemButton_C** ReturnValue1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.CreateItemButton"));

	struct
	{
		struct FString                 ID;
		struct FString                 WeaponName;
		ECosmeticType                  Type;
		class APlayerController*       OwningPlayer;
		struct FText                   DisplayText;
		bool                           Equiped;
		struct FScriptDelegate         Clicked;
		class UObject*                 __WorldContext;
		class UW_ItemButton_C*         ReturnValue1;
	} params = {};

	params.ID = ID;
	params.WeaponName = WeaponName;
	params.Type = Type;
	params.OwningPlayer = OwningPlayer;
	params.DisplayText = DisplayText;
	params.Equiped = Equiped;
	params.Clicked = Clicked;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ReturnValue1 != nullptr)
		*ReturnValue1 = params.ReturnValue1;
}


// Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.Create Button
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class APlayerController*       OwningPlayer                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   DisplayText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<E_ButtonStyles>    Style                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           highlight                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UClass* /*UUserWidget*/  Widget_Passthrough             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FScriptDelegate         Clicked                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_Button_C*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UW_Button_C* UBP_UIFunctionLibrary_C::Create_Button(const struct FString& ID, const struct FString& Name, class APlayerController* OwningPlayer, const struct FText& DisplayText, TEnumAsByte<E_ButtonStyles> Style, ECosmeticType Type, bool highlight, class UClass* /*UUserWidget*/ Widget_Passthrough, const struct FScriptDelegate& Clicked, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.Create Button"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		class APlayerController*       OwningPlayer;
		struct FText                   DisplayText;
		TEnumAsByte<E_ButtonStyles>    Style;
		ECosmeticType                  Type;
		bool                           highlight;
		class UClass* /*UUserWidget*/  Widget_Passthrough;
		struct FScriptDelegate         Clicked;
		class UObject*                 __WorldContext;
		class UW_Button_C*             ReturnValue;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.OwningPlayer = OwningPlayer;
	params.DisplayText = DisplayText;
	params.Style = Style;
	params.Type = Type;
	params.highlight = highlight;
	params.Widget_Passthrough = Widget_Passthrough;
	params.Clicked = Clicked;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.GetPlayerCharacter
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXCharacter*      AsProject_XCharacter           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctionLibrary_C::GetPlayerCharacter(class APawn* Pawn, class UObject* __WorldContext, class AProjectXCharacter** AsProject_XCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.GetPlayerCharacter"));

	struct
	{
		class APawn*                   Pawn;
		class UObject*                 __WorldContext;
		class AProjectXCharacter*      AsProject_XCharacter;
	} params = {};

	params.Pawn = Pawn;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (AsProject_XCharacter != nullptr)
		*AsProject_XCharacter = params.AsProject_XCharacter;
}


// Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.GetCapturePointUI
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACapturePoint*           CapturePoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_CapturePoint_C*       CaptureWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UIFunctionLibrary_C::GetCapturePointUI(class ACapturePoint* CapturePoint, class UObject* __WorldContext, class UW_CapturePoint_C** CaptureWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UIFunctionLibrary.BP_UIFunctionLibrary_C.GetCapturePointUI"));

	struct
	{
		class ACapturePoint*           CapturePoint;
		class UObject*                 __WorldContext;
		class UW_CapturePoint_C*       CaptureWidget;
	} params = {};

	params.CapturePoint = CapturePoint;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (CaptureWidget != nullptr)
		*CaptureWidget = params.CaptureWidget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
