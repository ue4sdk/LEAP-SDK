// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_LevelUpNotifaction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.GetClassDisplayName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UW_LevelUpNotifaction_C::GetClassDisplayName(const struct FString& InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.GetClassDisplayName"));

	struct
	{
		struct FString                 InputPin;
		struct FText                   ReturnValue;
	} params = {};

	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.Finished_2339E88B4D5EE05EAB52F1B403F540B8
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_LevelUpNotifaction_C::Finished_2339E88B4D5EE05EAB52F1B403F540B8()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.Finished_2339E88B4D5EE05EAB52F1B403F540B8"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.OnRewardsEarned
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         ItemIDs                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Currency                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Experience                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LevelUpNotifaction_C::OnRewardsEarned(TArray<struct FString> ItemIDs, int Currency, int Experience)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.OnRewardsEarned"));

	struct
	{
		TArray<struct FString>         ItemIDs;
		int                            Currency;
		int                            Experience;
	} params = {};

	params.ItemIDs = ItemIDs;
	params.Currency = Currency;
	params.Experience = Experience;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.BndEvt__btn_Confirm_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LevelUpNotifaction_C::BndEvt__btn_Confirm_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.BndEvt__btn_Confirm_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature"));

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


// Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.UpdateLevel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ClassID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_LevelUpNotifaction_C::UpdateLevel(int Level, const struct FString& ClassID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.UpdateLevel"));

	struct
	{
		int                            Level;
		struct FString                 ClassID;
	} params = {};

	params.Level = Level;
	params.ClassID = ClassID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.SetRewardsOnly
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_LevelUpNotifaction_C::SetRewardsOnly()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.SetRewardsOnly"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.SetChallengeRewards
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_LevelUpNotifaction_C::SetChallengeRewards()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.SetChallengeRewards"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.ExecuteUbergraph_W_LevelUpNotifaction
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LevelUpNotifaction_C::ExecuteUbergraph_W_LevelUpNotifaction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LevelUpNotifaction.W_LevelUpNotifaction_C.ExecuteUbergraph_W_LevelUpNotifaction"));

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
