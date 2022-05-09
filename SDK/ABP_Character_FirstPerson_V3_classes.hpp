#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Character_FirstPerson_V3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Character_FirstPerson_V3.ABP_Character_FirstPerson_V3_C
// 0x1E64 (0x2124 - 0x02C0)
class UABP_Character_FirstPerson_V3_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                        // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                        // 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                        // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                        // 0x0370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                        // 0x0398(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                        // 0x03C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                        // 0x03E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                        // 0x0410(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                        // 0x0438(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x0460(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x0488(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                          // 0x04B0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_12;                         // 0x0530(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                          // 0x05D0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                             // 0x0650(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                          // 0x0680(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_11;                         // 0x0700(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                          // 0x07A0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                             // 0x0820(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                          // 0x0850(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_10;                         // 0x08D0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                          // 0x0970(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                              // 0x09F0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                          // 0x0A20(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                          // 0x0AA0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                          // 0x0B40(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                              // 0x0BC0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                          // 0x0BF0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                          // 0x0C70(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x0D10(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x0D90(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x0DC0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0E70(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x0EB8(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0FC0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0FE0(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x1000(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x1028(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x1050(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x1078(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x10A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x10C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x10F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x1118(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x1140(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x1168(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x1190(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x11B8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x11E0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                          // 0x1260(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x1300(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x1380(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x13B0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x1430(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x14D0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x1550(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x1580(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x1600(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x1680(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x1720(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x1750(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x17D0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x1870(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x18F0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x1920(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x19A0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x1A40(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x1AC0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x1AF0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x1B70(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1C10(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1C90(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1CC0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1D70(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x1E10(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1F18(0x0108)
	bool                                               bIsInAir;                                                 // 0x2020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsMoving;                                                 // 0x2021(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bIsTightAimed;                                            // 0x2022(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bIsRunning;                                               // 0x2023(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bIsFiring;                                                // 0x2024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2025(0x0003) MISSED OFFSET
	float                                              PlayRateMultiplier;                                       // 0x2028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x202C(0x0004) MISSED OFFSET
	class UMatineeCameraShake*                         CurrentCameraAnimation;                                   // 0x2030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMatineeCameraShake*                         BackgroundCameraAnimation;                                // 0x2038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCameraModifier*                             FOVShiftCameraModifier;                                   // 0x2040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Speed;                                                    // 0x2048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsDead;                                                  // 0x204C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bIsInVehicle;                                             // 0x204D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bIsHoldingBreath;                                         // 0x204E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x1];                                       // 0x204F(0x0001) MISSED OFFSET
	float                                              DeltaTimeX;                                               // 0x2050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ScopeSwayScale;                                           // 0x2054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsInBattleInstance;                                      // 0x2058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2059(0x0007) MISSED OFFSET
	class UAnimSequence*                               IdleInstanceAnimation;                                    // 0x2060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bUsesTightAimAsAltMode;                                   // 0x2068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bClambering;                                              // 0x2069(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bMatchEnded;                                              // 0x206A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x5];                                       // 0x206B(0x0005) MISSED OFFSET
	class UAnimMontage*                                ClamberAnimation;                                         // 0x2070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x8];                                       // 0x2078(0x0008) MISSED OFFSET
	struct FTransform                                  MovementNoiseTransform;                                   // 0x2080(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FTransform                                  CachedMovementNoiseTransform;                             // 0x20B0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FTransform                                  MovementNoiseBoneGoal;                                    // 0x20E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	int                                                MovementNoiseInterpolationID;                             // 0x2110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bWasInAir;                                                // 0x2114(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2115(0x0003) MISSED OFFSET
	struct FVector                                     LandVector;                                               // 0x2118(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_Character_FirstPerson_V3.ABP_Character_FirstPerson_V3_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void PlayCameraAnimation(class UClass* /*UMatineeCameraShake*/ Shake_Class, float Scale);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_FirstPerson_V3_AnimGraphNode_ModifyBone_0752BE274076E08D987AC4A95D022565();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_FirstPerson_V3_AnimGraphNode_ModifyBone_78EE64BE4747AF2A967B32972CF1008A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_FirstPerson_V3_AnimGraphNode_TransitionResult_7BA19F504BD2ACDB66B402A9DFC3B3B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_FirstPerson_V3_AnimGraphNode_TransitionResult_B1D7B53E4DCE3F7B606F0A84D850FB9A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_FirstPerson_V3_AnimGraphNode_TransitionResult_02B9ED17429C8D72D2F9CC91EBD699F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_FirstPerson_V3_AnimGraphNode_TransitionResult_91B8E90842412FD1C32F4C8251D61C88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_FirstPerson_V3_AnimGraphNode_TransitionResult_765293964D4E439530D94393FD227FDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_FirstPerson_V3_AnimGraphNode_TransitionResult_4EA37FD14C793C910ED037A499692242();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_FirstPerson_V3_AnimGraphNode_TransitionResult_811024034009E9075A7DF7ACF559F0BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_FirstPerson_V3_AnimGraphNode_TransitionResult_88E847904D11E94B8CF8559AC332755C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_FirstPerson_V3_AnimGraphNode_TransitionResult_167EAF864054049A3D0685AC27C73581();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_FirstPerson_V3_AnimGraphNode_TransitionResult_40155BFE44CD0FE73D146885A49F8A63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_FirstPerson_V3_AnimGraphNode_TransitionResult_C16715754AB13444AFD0DCBE45346BD5();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void TightAimStart();
	void TightAimStop();
	void BindEvents();
	void OnWeaponFire(unsigned char Mode);
	void OnWeaponFireStop(unsigned char Mode);
	void OnReloadStart_Event();
	void CameraAnimations();
	void ResetRun();
	void ResetWalk();
	void FOVShift();
	void EndCameraAnimations();
	void ToggleBattleInstance(bool bToggle);
	void ToggleTightAimManual(bool bToggle);
	void SetTightAimAsAlt(bool bToggle);
	void ClamberEnd();
	void ClamberStart();
	void SetClamberMontage(class UAnimMontage* ClamberAnimation);
	void MovementNoise();
	void ResetMovementNoise();
	void InterpMovementNoise(float Value);
	void InterpMovementNoiseComplete(float Value);
	void Bounce(float Value);
	void OnLand(const struct FHitResult& Hit);
	void ExecuteUbergraph_ABP_Character_FirstPerson_V3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
