// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ItemTooltipWithWeaponStats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ItemTooltipWithWeaponStats.W_ItemTooltipWithWeaponStats_C.Update Weapon Stats
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ItemTooltipWithWeaponStats_C::Update_Weapon_Stats()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ItemTooltipWithWeaponStats.W_ItemTooltipWithWeaponStats_C.Update Weapon Stats"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ItemTooltipWithWeaponStats.W_ItemTooltipWithWeaponStats_C.Toggle Weapon Stats
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShow                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UWeaponInstanceProjectile* Projectile_Weapon              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ItemTooltipWithWeaponStats_C::Toggle_Weapon_Stats(bool bShow, class UWeaponInstanceProjectile* Projectile_Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ItemTooltipWithWeaponStats.W_ItemTooltipWithWeaponStats_C.Toggle Weapon Stats"));

	struct
	{
		bool                           bShow;
		class UWeaponInstanceProjectile* Projectile_Weapon;
	} params = {};

	params.bShow = bShow;
	params.Projectile_Weapon = Projectile_Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ItemTooltipWithWeaponStats.W_ItemTooltipWithWeaponStats_C.Update Texts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_ItemTooltipWithWeaponStats_C::Update_Texts(const struct FText& Title, const struct FText& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ItemTooltipWithWeaponStats.W_ItemTooltipWithWeaponStats_C.Update Texts"));

	struct
	{
		struct FText                   Title;
		struct FText                   Description;
	} params = {};

	params.Title = Title;
	params.Description = Description;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ItemTooltipWithWeaponStats.W_ItemTooltipWithWeaponStats_C.ExecuteUbergraph_W_ItemTooltipWithWeaponStats
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ItemTooltipWithWeaponStats_C::ExecuteUbergraph_W_ItemTooltipWithWeaponStats(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ItemTooltipWithWeaponStats.W_ItemTooltipWithWeaponStats_C.ExecuteUbergraph_W_ItemTooltipWithWeaponStats"));

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
