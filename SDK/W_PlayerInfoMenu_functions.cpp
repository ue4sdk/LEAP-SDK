// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlayerInfoMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.GetStat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EStatNames                     Enum                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UW_PlayerInfoMenu_C::GetStat(EStatNames Enum)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.GetStat"));

	struct
	{
		EStatNames                     Enum;
		int                            ReturnValue;
	} params = {};

	params.Enum = Enum;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.OnPlayerStateAcquired_E98E4405419553B07667D4B4A3D3C080
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerInfoMenu_C::OnPlayerStateAcquired_E98E4405419553B07667D4B4A3D3C080(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.OnPlayerStateAcquired_E98E4405419553B07667D4B4A3D3C080"));

	struct
	{
		class APlayerState*            PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlayerInfoMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.OnGeneralCosmeticsChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeneralCosmetics       GeneralCosmetics               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 PlayerID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PlayerInfoMenu_C::OnGeneralCosmeticsChanged(const struct FGeneralCosmetics& GeneralCosmetics, const struct FString& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.OnGeneralCosmeticsChanged"));

	struct
	{
		struct FGeneralCosmetics       GeneralCosmetics;
		struct FString                 PlayerID;
	} params = {};

	params.GeneralCosmetics = GeneralCosmetics;
	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.OnAvatarUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerInfoMenu_C::OnAvatarUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.OnAvatarUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.OnPlayerInfoStatsLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PlayerID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PlayerInfoMenu_C::OnPlayerInfoStatsLoaded(const struct FString& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.OnPlayerInfoStatsLoaded"));

	struct
	{
		struct FString                 PlayerID;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.OnItemsEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ShortCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 EquipKey                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PlayerInfoMenu_C::OnItemsEquipped(ECosmeticType Type, const struct FString& ShortCode, const struct FString& EquipKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.OnItemsEquipped"));

	struct
	{
		ECosmeticType                  Type;
		struct FString                 ShortCode;
		struct FString                 EquipKey;
	} params = {};

	params.Type = Type;
	params.ShortCode = ShortCode;
	params.EquipKey = EquipKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.OnInventoryLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSucess                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerInfoMenu_C::OnInventoryLoaded(bool bSucess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.OnInventoryLoaded"));

	struct
	{
		bool                           bSucess;
	} params = {};

	params.bSucess = bSucess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.ExecuteUbergraph_W_PlayerInfoMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerInfoMenu_C::ExecuteUbergraph_W_PlayerInfoMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerInfoMenu.W_PlayerInfoMenu_C.ExecuteUbergraph_W_PlayerInfoMenu"));

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
