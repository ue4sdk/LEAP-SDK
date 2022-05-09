// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_StickyGrenade_Explosion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StickyGrenade_Explosion.BP_StickyGrenade_Explosion_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_StickyGrenade_Explosion_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StickyGrenade_Explosion.BP_StickyGrenade_Explosion_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_StickyGrenade_Explosion.BP_StickyGrenade_Explosion_C.OnExplosionTriggered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_StickyGrenade_Explosion_C::OnExplosionTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StickyGrenade_Explosion.BP_StickyGrenade_Explosion_C.OnExplosionTriggered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_StickyGrenade_Explosion.BP_StickyGrenade_Explosion_C.On Warning Updates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_StickyGrenade_Explosion_C::On_Warning_Updates(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StickyGrenade_Explosion.BP_StickyGrenade_Explosion_C.On Warning Updates"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_StickyGrenade_Explosion.BP_StickyGrenade_Explosion_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_StickyGrenade_Explosion_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StickyGrenade_Explosion.BP_StickyGrenade_Explosion_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_StickyGrenade_Explosion.BP_StickyGrenade_Explosion_C.ExecuteUbergraph_BP_StickyGrenade_Explosion
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_StickyGrenade_Explosion_C::ExecuteUbergraph_BP_StickyGrenade_Explosion(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StickyGrenade_Explosion.BP_StickyGrenade_Explosion_C.ExecuteUbergraph_BP_StickyGrenade_Explosion"));

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
