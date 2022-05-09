// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ChallengesMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ChallengesMenu.W_ChallengesMenu_C.CreateCounterText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   NewParam                       (CPF_Parm, CPF_OutParm)

void UW_ChallengesMenu_C::CreateCounterText(struct FText* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesMenu.W_ChallengesMenu_C.CreateCounterText"));

	struct
	{
		struct FText                   NewParam;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function W_ChallengesMenu.W_ChallengesMenu_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengesMenu_C::BndEvt__btn_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesMenu.W_ChallengesMenu_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesMenu.W_ChallengesMenu_C.OnMenuBack
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ChallengesMenu_C::OnMenuBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesMenu.W_ChallengesMenu_C.OnMenuBack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesMenu.W_ChallengesMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ChallengesMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesMenu.W_ChallengesMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesMenu.W_ChallengesMenu_C.OnChallengeCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ChallengeID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Experience                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Currency                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengesMenu_C::OnChallengeCompleted(const struct FString& ChallengeID, const struct FString& ItemId, int Experience, int Currency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesMenu.W_ChallengesMenu_C.OnChallengeCompleted"));

	struct
	{
		struct FString                 ChallengeID;
		struct FString                 ItemId;
		int                            Experience;
		int                            Currency;
	} params = {};

	params.ChallengeID = ChallengeID;
	params.ItemId = ItemId;
	params.Experience = Experience;
	params.Currency = Currency;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesMenu.W_ChallengesMenu_C.OnDailyLoginStatusUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChallengesMenu_C::OnDailyLoginStatusUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesMenu.W_ChallengesMenu_C.OnDailyLoginStatusUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesMenu.W_ChallengesMenu_C.UpdateDailyLoginBonusButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChallengesMenu_C::UpdateDailyLoginBonusButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesMenu.W_ChallengesMenu_C.UpdateDailyLoginBonusButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesMenu.W_ChallengesMenu_C.OnLoginBonusConsumed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bLoginBonusAvailable           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ChallengesMenu_C::OnLoginBonusConsumed(bool bLoginBonusAvailable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesMenu.W_ChallengesMenu_C.OnLoginBonusConsumed"));

	struct
	{
		bool                           bLoginBonusAvailable;
	} params = {};

	params.bLoginBonusAvailable = bLoginBonusAvailable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesMenu.W_ChallengesMenu_C.OnDailyLoginPopupClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ChallengesMenu_C::OnDailyLoginPopupClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesMenu.W_ChallengesMenu_C.OnDailyLoginPopupClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesMenu.W_ChallengesMenu_C.BndEvt__W_LoginBonus_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengesMenu_C::BndEvt__W_LoginBonus_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesMenu.W_ChallengesMenu_C.BndEvt__W_LoginBonus_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengesMenu.W_ChallengesMenu_C.ExecuteUbergraph_W_ChallengesMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengesMenu_C::ExecuteUbergraph_W_ChallengesMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengesMenu.W_ChallengesMenu_C.ExecuteUbergraph_W_ChallengesMenu"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
