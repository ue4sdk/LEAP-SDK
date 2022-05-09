#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ProjectX.EStimulusType
enum class EStimulusType : uint8_t
{
	EStimulusType__None            = 0,
	EStimulusType__Sight           = 1,
	EStimulusType__Hearing         = 2,
	EStimulusType__Damage          = 3,
	EStimulusType__EStimulusType_MAX = 4
};


// Enum ProjectX.EAssaultRole
enum class EAssaultRole : uint8_t
{
	EAssaultRole__Attack           = 0,
	EAssaultRole__Defend           = 1,
	EAssaultRole__NONE             = 2,
	EAssaultRole__EAssaultRole_MAX = 3
};


// Enum ProjectX.ECosmeticType
enum class ECosmeticType : uint8_t
{
	ECosmeticType__Graffiti        = 0,
	ECosmeticType__WeaponSkins     = 1,
	ECosmeticType__KeyChain        = 2,
	ECosmeticType__Taunt           = 3,
	ECosmeticType__AvatarBorder    = 4,
	ECosmeticType__Banner          = 5,
	ECosmeticType__PlayerSkin      = 6,
	ECosmeticType__Loadout         = 7,
	ECosmeticType__Perk            = 8,
	ECosmeticType__VehicleSkins    = 9,
	ECosmeticType__ECosmeticType_MAX = 10
};


// Enum ProjectX.EProjectXPrivilegeResult
enum class EProjectXPrivilegeResult : uint8_t
{
	EProjectXPrivilegeResult__NoFailures = 0,
	EProjectXPrivilegeResult__RequiredPatchAvailable = 1,
	EProjectXPrivilegeResult__RequiredSystemUpdate = 2,
	EProjectXPrivilegeResult__AgeRestrictionFailure = 3,
	EProjectXPrivilegeResult__AccountTypeFailure = 4,
	EProjectXPrivilegeResult__UserNotFound = 5,
	EProjectXPrivilegeResult__UserNotLoggedIn = 6,
	EProjectXPrivilegeResult__ChatRestriction = 7,
	EProjectXPrivilegeResult__UGCRestriction = 8,
	EProjectXPrivilegeResult__GenericFailure = 9,
	EProjectXPrivilegeResult__OnlinePlayRestricted = 10,
	EProjectXPrivilegeResult__NetworkConnectionUnavailable = 11,
	EProjectXPrivilegeResult__EProjectXPrivilegeResult_MAX = 12
};


// Enum ProjectX.EJoinSessionResponse
enum class EJoinSessionResponse : uint8_t
{
	EJoinSessionResponse__Success  = 0,
	EJoinSessionResponse__SessionIsFull = 1,
	EJoinSessionResponse__SessionDoesNotExist = 2,
	EJoinSessionResponse__CouldNotRetrieveAddress = 3,
	EJoinSessionResponse__AlreadyInSession = 4,
	EJoinSessionResponse__UnknownError = 5,
	EJoinSessionResponse__EJoinSessionResponse_MAX = 6
};


// Enum ProjectX.ESessionState
enum class ESessionState : uint8_t
{
	ESessionState__NONE            = 0,
	ESessionState__SEARCHING       = 1,
	ESessionState__JOINING         = 2,
	ESessionState__INSESSION       = 3,
	ESessionState__DESTROYING      = 4,
	ESessionState__ESessionState_MAX = 5
};


// Enum ProjectX.EMessageType
enum class EMessageType : uint8_t
{
	EMessageType__Admin            = 0,
	EMessageType__Server           = 1,
	EMessageType__Global           = 2,
	EMessageType__Team             = 3,
	EMessageType__Squad            = 4,
	EMessageType__Whisper          = 5,
	EMessageType__SquadAttackOrder = 6,
	EMessageType__SquadDefendOrder = 7,
	EMessageType__TeamHeal         = 8,
	EMessageType__TeamRepair       = 9,
	EMessageType__SquadPing        = 10,
	EMessageType__None             = 11,
	EMessageType__EMessageType_MAX = 12
};


// Enum ProjectX.EDifficultyLevel
enum class EDifficultyLevel : uint8_t
{
	EDifficultyLevel__NONE         = 0,
	EDifficultyLevel__Bronze       = 1,
	EDifficultyLevel__Silver       = 2,
	EDifficultyLevel__Gold         = 3,
	EDifficultyLevel__Any          = 4,
	EDifficultyLevel__CUSTOM       = 5,
	EDifficultyLevel__EDifficultyLevel_MAX = 6
};


// Enum ProjectX.EKingOfTheHillPhase
enum class EKingOfTheHillPhase : uint8_t
{
	EKingOfTheHillPhase__WarmUp    = 0,
	EKingOfTheHillPhase__Active    = 1,
	EKingOfTheHillPhase__NONE      = 2,
	EKingOfTheHillPhase__EKingOfTheHillPhase_MAX = 3
};


// Enum ProjectX.EFlagState
enum class EFlagState : uint8_t
{
	EFlagState__HOME               = 0,
	EFlagState__CARRIED            = 1,
	EFlagState__DROPPED            = 2,
	EFlagState__NONE               = 3,
	EFlagState__EFlagState_MAX     = 4
};


// Enum ProjectX.EVIPEvent
enum class EVIPEvent : uint8_t
{
	EVIPEvent__NewVIP              = 0,
	EVIPEvent__VIPDown             = 1,
	EVIPEvent__EVIPEvent_MAX       = 2
};


// Enum ProjectX.EObjectiveState
enum class EObjectiveState : uint8_t
{
	EObjectiveState__NONE          = 0,
	EObjectiveState__WarmUp        = 1,
	EObjectiveState__InProgress    = 2,
	EObjectiveState__Complete      = 3,
	EObjectiveState__CleanUp       = 4,
	EObjectiveState__EObjectiveState_MAX = 5
};


// Enum ProjectX.EInteractionError
enum class EInteractionError : uint8_t
{
	EInteractionError__InteractableNotValid = 0,
	EInteractionError__PlayerTooFar = 1,
	EInteractionError__EInteractionError_MAX = 2
};


// Enum ProjectX.ECharacterStat
enum class ECharacterStat : uint8_t
{
	ECharacterStat__Health         = 0,
	ECharacterStat__Stamina        = 1,
	ECharacterStat__Shields        = 2,
	ECharacterStat__None           = 3,
	ECharacterStat__ECharacterStat_MAX = 4
};


// Enum ProjectX.ECustomMovementType
enum class ECustomMovementType : uint8_t
{
	ECustomMovementType__None      = 0,
	ECustomMovementType__JetPack   = 1,
	ECustomMovementType__Dash      = 2,
	ECustomMovementType__Hookshot  = 3,
	ECustomMovementType__OmniDash  = 4,
	ECustomMovementType__ECustomMovementType_MAX = 5
};


// Enum ProjectX.EPlayerError
enum class EPlayerError : uint8_t
{
	EPlayerError__SpawnTargetDoesntExist = 0,
	EPlayerError__CantSpawnHere    = 1,
	EPlayerError__EPlayerError_MAX = 2
};


// Enum ProjectX.ESpawnError
enum class ESpawnError : uint8_t
{
	ESpawnError__InvalidPlayerController = 0,
	ESpawnError__InvalidPlayerState = 1,
	ESpawnError__InvalidSpawnTarget = 2,
	ESpawnError__InvalidSpawnLocation = 3,
	ESpawnError__NotReadyToRespawn = 4,
	ESpawnError__RedeployAborted   = 5,
	ESpawnError__FailedToSpawnPawn = 6,
	ESpawnError__ESpawnError_MAX   = 7
};


// Enum ProjectX.ETeamJoinResponse
enum class ETeamJoinResponse : uint8_t
{
	ETeamJoinResponse__Success     = 0,
	ETeamJoinResponse__AlreadyOnTeam = 1,
	ETeamJoinResponse__TeamFull    = 2,
	ETeamJoinResponse__TeamUnbalance = 3,
	ETeamJoinResponse__InvalidTeam = 4,
	ETeamJoinResponse__Failure     = 5,
	ETeamJoinResponse__None        = 6,
	ETeamJoinResponse__ETeamJoinResponse_MAX = 7
};


// Enum ProjectX.EWeaponError
enum class EWeaponError : uint8_t
{
	EWeaponError__NoWeaponExists   = 0,
	EWeaponError__OutOfAmmo        = 1,
	EWeaponError__OnCoolDown       = 2,
	EWeaponError__NoFlashlight     = 3,
	EWeaponError__AlreadyReloading = 4,
	EWeaponError__FullyLoaded      = 5,
	EWeaponError__CantFireWhileSwitchingWeapons = 6,
	EWeaponError__NotReady         = 7,
	EWeaponError__AlreadyEquipped  = 8,
	EWeaponError__OutOfRange       = 9,
	EWeaponError__Overheated       = 10,
	EWeaponError__AltitudeTooLow   = 11,
	EWeaponError__OutOfEnergy      = 12,
	EWeaponError__EWeaponError_MAX = 13
};


// Enum ProjectX.EWindowToggleCommand
enum class EWindowToggleCommand : uint8_t
{
	Toggle                         = 0,
	Open                           = 1,
	Close                          = 2,
	EWindowToggleCommand_MAX       = 3
};


// Enum ProjectX.EWidgetDismissType
enum class EWidgetDismissType : uint8_t
{
	EWidgetDismissType__Input      = 0,
	EWidgetDismissType__Widget     = 1,
	EWidgetDismissType__Forced     = 2,
	EWidgetDismissType__EWidgetDismissType_MAX = 3
};


// Enum ProjectX.EClampType
enum class EClampType : uint8_t
{
	EClampType__SCREEN             = 0,
	EClampType__CENTER             = 1,
	EClampType__EClampType_MAX     = 2
};


// Enum ProjectX.EApplicationType
enum class EApplicationType : uint8_t
{
	EApplicationType__Stacking     = 0,
	EApplicationType__Override     = 1,
	EApplicationType__OverrideAndClearOtherAfflictions = 2,
	EApplicationType__EApplicationType_MAX = 3
};


// Enum ProjectX.EStackingMethod
enum class EStackingMethod : uint8_t
{
	EStackingMethod__Additive      = 0,
	EStackingMethod__Multiplicative = 1,
	EStackingMethod__EStackingMethod_MAX = 2
};


// Enum ProjectX.EFootstepType
enum class EFootstepType : uint8_t
{
	EFootstepType__Default         = 0,
	EFootstepType__Walk            = 1,
	EFootstepType__Run             = 2,
	EFootstepType__Land            = 3,
	EFootstepType__Crouch          = 4,
	EFootstepType__EFootstepType_MAX = 5
};


// Enum ProjectX.EPlayOption
enum class EPlayOption : uint8_t
{
	EPlayOption__Queue             = 0,
	EPlayOption__Override          = 1,
	EPlayOption__Ignore            = 2,
	EPlayOption__Disable           = 3,
	EPlayOption__None              = 4,
	EPlayOption__Intro             = 5,
	EPlayOption__EPlayOption_MAX   = 6
};


// Enum ProjectX.EFlagEvent
enum class EFlagEvent : uint8_t
{
	EFlagEvent__Taken              = 0,
	EFlagEvent__Captured           = 1,
	EFlagEvent__Dropped            = 2,
	EFlagEvent__Returned           = 3,
	EFlagEvent__None               = 4,
	EFlagEvent__EFlagEvent_MAX     = 5
};


// Enum ProjectX.EKingOfTheHillEvent
enum class EKingOfTheHillEvent : uint8_t
{
	EKingOfTheHillEvent__Captured  = 0,
	EKingOfTheHillEvent__Contested = 1,
	EKingOfTheHillEvent__NewHills  = 2,
	EKingOfTheHillEvent__HillsActive = 3,
	EKingOfTheHillEvent__HillOwnerChanged = 4,
	EKingOfTheHillEvent__EKingOfTheHillEvent_MAX = 5
};


// Enum ProjectX.ECaptureType
enum class ECaptureType : uint8_t
{
	ECaptureType__CaptureFull      = 0,
	ECaptureType__CapturePartial   = 1,
	ECaptureType__NeutralizeFull   = 2,
	ECaptureType__NeutralizePartial = 3,
	ECaptureType__ECaptureType_MAX = 4
};


// Enum ProjectX.EVolumeEffectsTriggerType
enum class EVolumeEffectsTriggerType : uint8_t
{
	EVolumeEffectsTriggerType__NONE = 0,
	EVolumeEffectsTriggerType__Enter = 1,
	EVolumeEffectsTriggerType__Exit = 2,
	EVolumeEffectsTriggerType__Constant = 3,
	EVolumeEffectsTriggerType__EVolumeEffectsTriggerType_MAX = 4
};


// Enum ProjectX.ERarity
enum class ERarity : uint8_t
{
	ERarity__NONE                  = 0,
	ERarity__COMMON                = 1,
	ERarity__UNCOMMON              = 2,
	ERarity__RARE                  = 3,
	ERarity__EPIC                  = 4,
	ERarity__LEGENDARY             = 5,
	ERarity__ERarity_MAX           = 6
};


// Enum ProjectX.EPerkType
enum class EPerkType : uint8_t
{
	EPerkType__GENERAL             = 0,
	EPerkType__CLASS               = 1,
	EPerkType__WEAPON              = 2,
	EPerkType__PLAYER              = 3,
	EPerkType__NONE                = 4,
	EPerkType__EPerkType_MAX       = 5
};


// Enum ProjectX.ECosmeticCategory
enum class ECosmeticCategory : uint8_t
{
	ECosmeticCategory__General     = 0,
	ECosmeticCategory__Class       = 1,
	ECosmeticCategory__Weapon      = 2,
	ECosmeticCategory__Vehicle     = 3,
	ECosmeticCategory__NONE        = 4,
	ECosmeticCategory__ECosmeticCategory_MAX = 5
};


// Enum ProjectX.EItemType
enum class EItemType : uint8_t
{
	EItemType__Inventory           = 0,
	EItemType__Hats                = 1,
	EItemType__Shirts              = 2,
	EItemType__Weapon              = 3,
	EItemType__Pants               = 4,
	EItemType__Shoes               = 5,
	EItemType__Trinket             = 6,
	EItemType__Consumable          = 7,
	EItemType__None                = 8,
	EItemType__EItemType_MAX       = 9
};


// Enum ProjectX.EPlayerSkinPart
enum class EPlayerSkinPart : uint8_t
{
	EPlayerSkinPart__None          = 0,
	EPlayerSkinPart__Head          = 1,
	EPlayerSkinPart__Body1P        = 2,
	EPlayerSkinPart__Body3P        = 3,
	EPlayerSkinPart__Equipment     = 4,
	EPlayerSkinPart__EPlayerSkinPart_MAX = 5
};


// Enum ProjectX.EColourSlot
enum class EColourSlot : uint8_t
{
	EColourSlot__None              = 0,
	EColourSlot__EColourSlot_MAX   = 1
};


// Enum ProjectX.EEquipType
enum class EEquipType : uint8_t
{
	EEquipType__Cosmetic           = 0,
	EEquipType__Weapon             = 1,
	EEquipType__Perk               = 2,
	EEquipType__EEquipType_MAX     = 3
};


// Enum ProjectX.EDeployableCategory
enum class EDeployableCategory : uint8_t
{
	EDeployableCategory__None      = 0,
	EDeployableCategory__AutoTurret = 1,
	EDeployableCategory__Projector = 2,
	EDeployableCategory__Explosive = 3,
	EDeployableCategory__Controllable = 4,
	EDeployableCategory__EDeployableCategory_MAX = 5
};


// Enum ProjectX.EDeployableState
enum class EDeployableState : uint8_t
{
	EDeployableState__None         = 0,
	EDeployableState__Deactivated  = 1,
	EDeployableState__StartingUp   = 2,
	EDeployableState__Activated    = 3,
	EDeployableState__EDeployableState_MAX = 4
};


// Enum ProjectX.EDeployableMovementDirection
enum class EDeployableMovementDirection : uint8_t
{
	EDeployableMovementDirection__Up = 0,
	EDeployableMovementDirection__Right = 1,
	EDeployableMovementDirection__Down = 2,
	EDeployableMovementDirection__Left = 3,
	EDeployableMovementDirection__Forward = 4,
	EDeployableMovementDirection__Back = 5,
	EDeployableMovementDirection__EDeployableMovementDirection_MAX = 6
};


// Enum ProjectX.EPlacementTests
enum class EPlacementTests : uint8_t
{
	EPlacementTests__NONE          = 0,
	EPlacementTests__GroundCheck   = 1,
	EPlacementTests__SlopeCheck    = 2,
	EPlacementTests__SkyCheck      = 3,
	EPlacementTests__EPlacementTests_MAX = 4
};


// Enum ProjectX.EPlacementFailureReason
enum class EPlacementFailureReason : uint8_t
{
	EPlacementFailureReason__NONE  = 0,
	EPlacementFailureReason__Grounded = 1,
	EPlacementFailureReason__Slope = 2,
	EPlacementFailureReason__ZDiff = 3,
	EPlacementFailureReason__Sky   = 4,
	EPlacementFailureReason__EPlacementFailureReason_MAX = 5
};


// Enum ProjectX.ETurretState
enum class ETurretState : uint8_t
{
	ETurretState__Offline          = 0,
	ETurretState__Waiting          = 1,
	ETurretState__WarmingUp        = 2,
	ETurretState__Firing           = 3,
	ETurretState__Dead             = 4,
	ETurretState__ETurretState_MAX = 5
};


// Enum ProjectX.EDoorState
enum class EDoorState : uint8_t
{
	EDoorState__Closed             = 0,
	EDoorState__OpenInwards        = 1,
	EDoorState__OpenOutwards       = 2,
	EDoorState__EDoorState_MAX     = 3
};


// Enum ProjectX.EFlagSpawnBehaviour
enum class EFlagSpawnBehaviour : uint8_t
{
	EFlagSpawnBehaviour__CaptureOnly = 0,
	EFlagSpawnBehaviour__SpawnOnly = 1,
	EFlagSpawnBehaviour__Both      = 2,
	EFlagSpawnBehaviour__EFlagSpawnBehaviour_MAX = 3
};


// Enum ProjectX.EAxisMappingFilter
enum class EAxisMappingFilter : uint8_t
{
	EAxisMappingFilter__Name       = 0,
	EAxisMappingFilter__Key        = 1,
	EAxisMappingFilter__Scale      = 2,
	EAxisMappingFilter__IsNotGamepad = 3,
	EAxisMappingFilter__IsNotKeyboard = 4,
	EAxisMappingFilter__IsNotMouse = 5,
	EAxisMappingFilter__IsNotAxis  = 6,
	EAxisMappingFilter__EAxisMappingFilter_MAX = 7
};


// Enum ProjectX.EActionMappingFilter
enum class EActionMappingFilter : uint8_t
{
	EActionMappingFilter__Name     = 0,
	EActionMappingFilter__Key      = 1,
	EActionMappingFilter__Shift    = 2,
	EActionMappingFilter__Ctrl     = 3,
	EActionMappingFilter__Alt      = 4,
	EActionMappingFilter__Cmd      = 5,
	EActionMappingFilter__IsNotGamepad = 6,
	EActionMappingFilter__IsNotKeyboard = 7,
	EActionMappingFilter__IsNotMouse = 8,
	EActionMappingFilter__EActionMappingFilter_MAX = 9
};


// Enum ProjectX.EMappingType
enum class EMappingType : uint8_t
{
	EMappingType__Axis             = 0,
	EMappingType__Action           = 1,
	EMappingType__Auto             = 2,
	EMappingType__EMappingType_MAX = 3
};


// Enum ProjectX.EInputCategory
enum class EInputCategory : uint8_t
{
	EInputCategory__Movement       = 0,
	EInputCategory__Combat         = 1,
	EInputCategory__Communication  = 2,
	EInputCategory__Miscellaneous  = 3,
	EInputCategory__EInputCategory_MAX = 4
};


// Enum ProjectX.EInteractionType
enum class EInteractionType : uint8_t
{
	EInteractionType__Select       = 0,
	EInteractionType__Hold         = 1,
	EInteractionType__Both         = 2,
	EInteractionType__EInteractionType_MAX = 3
};


// Enum ProjectX.EManagedActorState
enum class EManagedActorState : uint8_t
{
	EManagedActorState__Off        = 0,
	EManagedActorState__On         = 1,
	EManagedActorState__Damaged    = 2,
	EManagedActorState__EManagedActorState_MAX = 3
};


// Enum ProjectX.EOrbitalLaserState
enum class EOrbitalLaserState : uint8_t
{
	EOrbitalLaserState__Charging   = 0,
	EOrbitalLaserState__Firing     = 1,
	EOrbitalLaserState__Finishing  = 2,
	EOrbitalLaserState__NONE       = 3,
	EOrbitalLaserState__EOrbitalLaserState_MAX = 4
};


// Enum ProjectX.EDisplayType
enum class EDisplayType : uint8_t
{
	EDisplayType__CenterScreen     = 0,
	EDisplayType__SideScreen       = 1,
	EDisplayType__EDisplayType_MAX = 2
};


// Enum ProjectX.EStatUpdateBehaviour
enum class EStatUpdateBehaviour : uint8_t
{
	EStatUpdateBehaviour__NONE     = 0,
	EStatUpdateBehaviour__MAX      = 1,
	EStatUpdateBehaviour__MIN      = 2,
	EStatUpdateBehaviour__OVERRIDE = 3
};


// Enum ProjectX.EStatNames
enum class EStatNames : uint8_t
{
	EStatNames__Currency           = 0,
	EStatNames__Level              = 1,
	EStatNames__Wins               = 2,
	EStatNames__Losses             = 3,
	EStatNames__Ties               = 4,
	EStatNames__Kills              = 5,
	EStatNames__Deaths             = 6,
	EStatNames__Assists            = 7,
	EStatNames__ShotsFired         = 8,
	EStatNames__ShotsHit           = 9,
	EStatNames__Headshots          = 10,
	EStatNames__MaxHeadshot        = 11,
	EStatNames__TimePlayed         = 12,
	EStatNames__Jumps              = 13,
	EStatNames__Speeds             = 14,
	EStatNames__Experience         = 15,
	EStatNames__BasesCaptured      = 16,
	EStatNames__Damage             = 17,
	EStatNames__DeployablesDestructed = 18,
	EStatNames__DoubleKill         = 19,
	EStatNames__TripleKill         = 20,
	EStatNames__BaseDefended       = 21,
	EStatNames__TargetDestroyed    = 22,
	EStatNames__BombDefused        = 23,
	EStatNames__CaptureTheFlag     = 24,
	EStatNames__ReturnTheFlag      = 25,
	EStatNames__FlagCarrierDowned  = 26,
	EStatNames__EnemySpotted       = 27,
	EStatNames__EquipmentDestroyed = 28,
	EStatNames__EnemyEquipmentSpotted = 29,
	EStatNames__Payback            = 30,
	EStatNames__Saviour            = 31,
	EStatNames__DeltaExperience    = 32,
	EStatNames__WinKOTH            = 33,
	EStatNames__WinBaseCap         = 34,
	EStatNames__WinCTF             = 35,
	EStatNames__WinVIP             = 36,
	EStatNames__WinTDM             = 37,
	EStatNames__GoldenWeaponPickups = 38,
	EStatNames__ReinforcementDrops = 39,
	EStatNames__UltimatesUsed      = 40,
	EStatNames__Revives            = 41,
	EStatNames__WraithKills        = 42,
	EStatNames__PathfinderKills    = 43,
	EStatNames__TitanKills         = 44,
	EStatNames__TechOpsKills       = 45,
	EStatNames__Dashes             = 46,
	EStatNames__Eliminations       = 47,
	EStatNames__TopPlayer          = 48,
	EStatNames__TotalExperience    = 49,
	EStatNames__Invalid            = 50,
	EStatNames__EStatNames_MAX     = 51
};


// Enum ProjectX.EStatClassifier
enum class EStatClassifier : uint8_t
{
	EStatClassifier__General       = 0,
	EStatClassifier__Class         = 1,
	EStatClassifier__Weapon        = 2,
	EStatClassifier__Vehicle       = 3,
	EStatClassifier__Progression   = 4,
	EStatClassifier__GameMode      = 5,
	EStatClassifier__EStatClassifier_MAX = 6
};


// Enum ProjectX.EXPEventType
enum class EXPEventType : uint8_t
{
	EXPEventType__Kill             = 0,
	EXPEventType__Assist           = 1,
	EXPEventType__Heal             = 2,
	EXPEventType__Defend           = 3,
	EXPEventType__BaseCapture      = 4,
	EXPEventType__BaseCapturePartial = 5,
	EXPEventType__Neutralize       = 6,
	EXPEventType__NeutralizePartial = 7,
	EXPEventType__Victory          = 8,
	EXPEventType__Lose             = 9,
	EXPEventType__Draw             = 10,
	EXPEventType__DoubleKill       = 11,
	EXPEventType__TripleKill       = 12,
	EXPEventType__MegaKill         = 13,
	EXPEventType__HeadShot         = 14,
	EXPEventType__Avenger          = 15,
	EXPEventType__EnemySpotted     = 16,
	EXPEventType__MultipleEnemiesSpotted = 17,
	EXPEventType__SpotBonus        = 18,
	EXPEventType__SpeedBonus       = 19,
	EXPEventType__SquadSpawn       = 20,
	EXPEventType__TurretDestroyed  = 21,
	EXPEventType__EquipmentDestroyed = 22,
	EXPEventType__TurretKill       = 23,
	EXPEventType__EnemyTurretSpotted = 24,
	EXPEventType__EnemyHealProjectSpotted = 25,
	EXPEventType__EnemyEquipmentSpotted = 26,
	EXPEventType__SquadWipe        = 27,
	EXPEventType__Payback          = 28,
	EXPEventType__VehicleDestroyed = 29,
	EXPEventType__VehicleDestroyedAssist = 30,
	EXPEventType__NemesisKill      = 31,
	EXPEventType__NemesisPayback   = 32,
	EXPEventType__Saviour          = 33,
	EXPEventType__VehicleRepaired  = 34,
	EXPEventType__AssaultBombPlanted = 35,
	EXPEventType__AssaultBombDefused = 36,
	EXPEventType__AssaultTargetDestroyed = 37,
	EXPEventType__AssaultTargetDefended = 38,
	EXPEventType__BaseCaptureDefend = 39,
	EXPEventType__FlagCaptured     = 40,
	EXPEventType__FlagCarrierDefeated = 41,
	EXPEventType__FlagReturned     = 42,
	EXPEventType__DeployableRepaired = 43,
	EXPEventType__VIPKilled        = 44,
	EXPEventType__DamagePlayer     = 45,
	EXPEventType__KillingBlow      = 46,
	EXPEventType__ObjectiveDamaged = 47,
	EXPEventType__ObjectiveDestroyed = 48,
	EXPEventType__PrimaryObjectiveDamaged = 49,
	EXPEventType__PrimaryObjectiveDestroyed = 50,
	EXPEventType__SecondaryObjectiveDamaged = 51,
	EXPEventType__SecondaryObjectiveDestroyed = 52,
	EXPEventType__TeamSpawnOnBeacon = 53,
	EXPEventType__RocketTurretKill = 54,
	EXPEventType__ReviveTeammate   = 55,
	EXPEventType__None             = 56,
	EXPEventType__EXPEventType_MAX = 57
};


// Enum ProjectX.EEquipSlot
enum class EEquipSlot : uint8_t
{
	EEquipSlot__PrimaryWeapon      = 0,
	EEquipSlot__SecondaryWeapon    = 1,
	EEquipSlot__PrimaryAbility     = 2,
	EEquipSlot__SecondaryAbility   = 3,
	EEquipSlot__UltimateAbility    = 4,
	EEquipSlot__VehicleAbility     = 5,
	EEquipSlot__MeleeAbility       = 6,
	EEquipSlot__FoundWeapon        = 7,
	EEquipSlot__None               = 8,
	EEquipSlot__EEquipSlot_MAX     = 9
};


// Enum ProjectX.EActorLevelState
enum class EActorLevelState : uint8_t
{
	EActorLevelState__None         = 0,
	EActorLevelState__Removed      = 1,
	EActorLevelState__EActorLevelState_MAX = 2
};


// Enum ProjectX.EBuildType
enum class EBuildType : uint8_t
{
	EBuildType__Development        = 0,
	EBuildType__Release            = 1,
	EBuildType__Patch              = 2,
	EBuildType__EBuildType_MAX     = 3
};


// Enum ProjectX.EAcquireTargetType
enum class EAcquireTargetType : uint8_t
{
	EAcquireTargetType__Random     = 0,
	EAcquireTargetType__Closest    = 1,
	EAcquireTargetType__EAcquireTargetType_MAX = 2
};


// Enum ProjectX.ESetTargetEvent
enum class ESetTargetEvent : uint8_t
{
	ESetTargetEvent__NoReason      = 0,
	ESetTargetEvent__SelectedRandomly = 1,
	ESetTargetEvent__SelectedClosest = 2,
	ESetTargetEvent__SawTarget     = 3,
	ESetTargetEvent__HeardTarget   = 4,
	ESetTargetEvent__TookDamageFromTarget = 5,
	ESetTargetEvent__TargetLost    = 6,
	ESetTargetEvent__TargetKilled  = 7,
	ESetTargetEvent__TargetEnteredVehicle = 8,
	ESetTargetEvent__TargetExitedVehicle = 9,
	ESetTargetEvent__CantPathToTarget = 10,
	ESetTargetEvent__ESetTargetEvent_MAX = 11
};


// Enum ProjectX.EInputDirection
enum class EInputDirection : uint8_t
{
	EInputDirection__Forward       = 0,
	EInputDirection__Right         = 1,
	EInputDirection__Backwards     = 2,
	EInputDirection__Left          = 3,
	EInputDirection__EInputDirection_MAX = 4
};


// Enum ProjectX.EPlayerClassAnimation
enum class EPlayerClassAnimation : uint8_t
{
	EPlayerClassAnimation__SpecOps = 0,
	EPlayerClassAnimation__Explosive = 1,
	EPlayerClassAnimation__Heavy   = 2,
	EPlayerClassAnimation__Assault = 3,
	EPlayerClassAnimation__EPlayerClassAnimation_MAX = 4
};


// Enum ProjectX.EDeathEffectBodyPartsType
enum class EDeathEffectBodyPartsType : uint8_t
{
	EDeathEffectBodyPartsType__None = 0,
	EDeathEffectBodyPartsType__Random = 1,
	EDeathEffectBodyPartsType__Hit = 2,
	EDeathEffectBodyPartsType__Full = 3,
	EDeathEffectBodyPartsType__EDeathEffectBodyPartsType_MAX = 4
};


// Enum ProjectX.EDeathEffectType
enum class EDeathEffectType : uint8_t
{
	EDeathEffectType__None         = 0,
	EDeathEffectType__Gore         = 1,
	EDeathEffectType__Disintegration = 2,
	EDeathEffectType__EDeathEffectType_MAX = 3
};


// Enum ProjectX.ERewardType
enum class ERewardType : uint8_t
{
	ERewardType__ReferAFriend      = 0,
	ERewardType__FoundersDLC       = 1,
	ERewardType__DailyLogin        = 2,
	ERewardType__TwitchRewards     = 3,
	ERewardType__ERewardType_MAX   = 4
};


// Enum ProjectX.EAchievementData
enum class EAchievementData : uint8_t
{
	EAchievementData__NONE         = 0,
	EAchievementData__PRIVATE_ACHIEVEMENT = 1,
	EAchievementData__CORPORAL_ACHIEVEMENT = 2,
	EAchievementData__SERGEANT_ACHIEVEMENT = 3,
	EAchievementData__LIEUTENANT_ACHIEVEMENT = 4,
	EAchievementData__MAJOR_ACHIEVEMENT = 5,
	EAchievementData__COLONEL_ACHIEVEMENT = 6,
	EAchievementData__GENERAL_ACHIEVEMENT = 7,
	EAchievementData__GLUTTON_FOR_PUNISHMENT_ACHIEVEMENT = 8,
	EAchievementData__SNOWBIRD_ACHIEVEMENT = 9,
	EAchievementData__TROPICAN_ACHIEVEMENT = 10,
	EAchievementData__HAZE_FOR_DAYS_ACHIEVEMENT = 11,
	EAchievementData__CITIZEN_OF_CHANGSHA_ACHIEVEMENT = 12,
	EAchievementData__ARCHAEOLOGIST_ACHIEVEMENT = 13,
	EAchievementData__PYROMANCER_ACHIEVEMENT = 14,
	EAchievementData__VALLEY_GIRL_ACHIEVEMENT = 15,
	EAchievementData__KING_OF_THE_HILL_ACHIEVEMENT = 16,
	EAchievementData__ACE_OF_BASES_ACHIEVEMENT = 17,
	EAchievementData__CAPTURE_THE_VICTORY_ACHIEVEMENT = 18,
	EAchievementData__VERY_IMPORTANT_ACHIEVEMENT = 19,
	EAchievementData__NO_I_IN_TEAM_ACHIEVEMENT = 20,
	EAchievementData__ALL_THAT_GLITTERS_ACHIEVEMENT = 21,
	EAchievementData__BACKUP_ACHIEVEMENT = 22,
	EAchievementData__CENTURION_ACHIEVEMENT = 23,
	EAchievementData__HOT_POTATO_ACHIEVEMENT = 24,
	EAchievementData__GRENADIER_ACHIEVEMENT = 25,
	EAchievementData__DESTROYER_ACHIEVEMENT = 26,
	EAchievementData__BRINGER_OF_WRATH_ACHIEVEMENT = 27,
	EAchievementData__MEDIC_ACHIEVEMENT = 28,
	EAchievementData__SURGEON_ACHIEVEMENT = 29,
	EAchievementData__ELIMINATOR_ACHIEVEMENT = 30,
	EAchievementData__ANNIHILATOR_ACHIEVEMENT = 31,
	EAchievementData__FLYSWATTER_ACHIEVEMENT = 32,
	EAchievementData__AVERAGE_JOES_ACHIEVEMENT = 33,
	EAchievementData__VERSUS_GOLIATH_ACHIEVEMENT = 34,
	EAchievementData__MORE_LIKE_TECH_STOPS_ACHIEVEMENT = 35,
	EAchievementData__MASTER_OF_NONE_ACHIEVEMENT = 36,
	EAchievementData__MASTER_OF_ALL_ACHIEVEMENT = 37,
	EAchievementData__CRACKIN_SKULLS_ACHIEVEMENT = 38,
	EAchievementData__DEADEYE_ACHIEVEMENT = 39,
	EAchievementData__BOOM_ACHIEVEMENT = 40,
	EAchievementData__DINE_AND_DASH_ACHIEVEMENT = 41,
	EAchievementData__CANT_STOP_ME_NOW_ACHIEVEMENT = 42,
	EAchievementData__FLOAT_LIKE_A_BUTTERFLY_ACHIEVEMENT = 43,
	EAchievementData__EAchievementData_MAX = 44
};


// Enum ProjectX.ESortParameter
enum class ESortParameter : uint8_t
{
	ESortParameter__NONE           = 0,
	ESortParameter__Official       = 1,
	ESortParameter__MapName        = 2,
	ESortParameter__Mode           = 3,
	ESortParameter__PlayerCount    = 4,
	ESortParameter__Region         = 5,
	ESortParameter__Ping           = 6,
	ESortParameter__AntiCheat      = 7,
	ESortParameter__MODS           = 8,
	ESortParameter__Password       = 9,
	ESortParameter__ServerName     = 10,
	ESortParameter__WhiteList      = 11,
	ESortParameter__Difficulty     = 12,
	ESortParameter__ESortParameter_MAX = 13
};


// Enum ProjectX.EAvatarSize
enum class EAvatarSize : uint8_t
{
	EAvatarSize__Small             = 0,
	EAvatarSize__Medium            = 1,
	EAvatarSize__Large             = 2,
	EAvatarSize__EAvatarSize_MAX   = 3
};


// Enum ProjectX.EProjectXPrivileges
enum class EProjectXPrivileges : uint8_t
{
	EProjectXPrivileges__CanPlay   = 0,
	EProjectXPrivileges__CanPlayOnline = 1,
	EProjectXPrivileges__CanCommunicateOnline = 2,
	EProjectXPrivileges__CanUseUserGeneratedContent = 3,
	EProjectXPrivileges__CanUserCrossPlay = 4,
	EProjectXPrivileges__EProjectXPrivileges_MAX = 5
};


// Enum ProjectX.EServerPlatform
enum class EServerPlatform : uint8_t
{
	EServerPlatform__PC            = 0,
	EServerPlatform__PS            = 1,
	EServerPlatform__XBOX          = 2,
	EServerPlatform__EServerPlatform_MAX = 3
};


// Enum ProjectX.EOnlineMode
enum class EOnlineMode : uint8_t
{
	EOnlineMode__Offline           = 0,
	EOnlineMode__LAN               = 1,
	EOnlineMode__Online            = 2,
	EOnlineMode__EOnlineMode_MAX   = 3
};


// Enum ProjectX.EEndGameEvent
enum class EEndGameEvent : uint8_t
{
	EEndGameEvent__EndGameGeneric  = 0,
	EEndGameEvent__EndGameTeam     = 1,
	EEndGameEvent__EndGameTeamPoints = 2,
	EEndGameEvent__EndGameTeamTime = 3,
	EEndGameEvent__EndGameTeamCaptures = 4,
	EEndGameEvent__EEndGameEvent_MAX = 5
};


// Enum ProjectX.ETeamGameEvent
enum class ETeamGameEvent : uint8_t
{
	ETeamGameEvent__TeamKillWarning = 0,
	ETeamGameEvent__None           = 1,
	ETeamGameEvent__ETeamGameEvent_MAX = 2
};


// Enum ProjectX.EHordeModeRoles
enum class EHordeModeRoles : uint8_t
{
	EHordeModeRoles__EEnemyAI      = 0,
	EHordeModeRoles__EPlayer       = 1,
	EHordeModeRoles__EHordeModeRoles_MAX = 2
};


// Enum ProjectX.EGameType
enum class EGameType : uint8_t
{
	EGameType__NONE                = 0,
	EGameType__BaseControl         = 1,
	EGameType__Assault             = 2,
	EGameType__CaptureTheFlag      = 3,
	EGameType__TeamDeathmatch      = 4,
	EGameType__KingOfTheHill       = 5,
	EGameType__VIP                 = 6,
	EGameType__Horde               = 7,
	EGameType__CUSTOM              = 8,
	EGameType__EGameType_MAX       = 9
};


// Enum ProjectX.EMatchResult
enum class EMatchResult : uint8_t
{
	EMatchResult__Win              = 0,
	EMatchResult__Loss             = 1,
	EMatchResult__Tie              = 2,
	EMatchResult__None             = 3,
	EMatchResult__EMatchResult_MAX = 4
};


// Enum ProjectX.EHordePlayerStatus
enum class EHordePlayerStatus : uint8_t
{
	EHordePlayerStatus__Joined     = 0,
	EHordePlayerStatus__Alive      = 1,
	EHordePlayerStatus__Dead       = 2,
	EHordePlayerStatus__EHordePlayerStatus_MAX = 3
};


// Enum ProjectX.EDestructionObjectiveRole
enum class EDestructionObjectiveRole : uint8_t
{
	EDestructionObjectiveRole__Attack = 0,
	EDestructionObjectiveRole__Defend = 1,
	EDestructionObjectiveRole__EDestructionObjectiveRole_MAX = 2
};


// Enum ProjectX.EObjectiveComplete
enum class EObjectiveComplete : uint8_t
{
	EObjectiveComplete__NONE       = 0,
	EObjectiveComplete__VICTORY    = 1,
	EObjectiveComplete__LOSS       = 2,
	EObjectiveComplete__EObjectiveComplete_MAX = 3
};


// Enum ProjectX.EAccelerationDirection
enum class EAccelerationDirection : uint8_t
{
	EAccelerationDirection__Up     = 0,
	EAccelerationDirection__Right  = 1,
	EAccelerationDirection__Down   = 2,
	EAccelerationDirection__Left   = 3,
	EAccelerationDirection__Forward = 4,
	EAccelerationDirection__Back   = 5,
	EAccelerationDirection__EAccelerationDirection_MAX = 6
};


// Enum ProjectX.EQualityMode
enum class EQualityMode : uint8_t
{
	EQualityMode__High             = 0,
	EQualityMode__Medium           = 1,
	EQualityMode__Low              = 2,
	EQualityMode__EQualityMode_MAX = 3
};


// Enum ProjectX.ESpotReply
enum class ESpotReply : uint8_t
{
	ESpotReply__Valid              = 0,
	ESpotReply__Invalid            = 1,
	ESpotReply__Invisible          = 2,
	ESpotReply__None               = 3,
	ESpotReply__ESpotReply_MAX     = 4
};


// Enum ProjectX.ESpotType
enum class ESpotType : uint8_t
{
	ESpotType__HUD                 = 0,
	ESpotType__Radar               = 1,
	ESpotType__All                 = 2,
	ESpotType__None                = 3,
	ESpotType__ESpotType_MAX       = 4
};


// Enum ProjectX.ETeamRole
enum class ETeamRole : uint8_t
{
	ETeamRole__NONE                = 0,
	ETeamRole__Ally                = 1,
	ETeamRole__Enemy               = 2,
	ETeamRole__Squadmate           = 3,
	ETeamRole__ETeamRole_MAX       = 4
};


// Enum ProjectX.EWaveTimerType
enum class EWaveTimerType : uint8_t
{
	EWaveTimerType__NONE           = 0,
	EWaveTimerType__Survive        = 1,
	EWaveTimerType__Cooldown       = 2,
	EWaveTimerType__ObjectiveTime  = 3,
	EWaveTimerType__EWaveTimerType_MAX = 4
};


// Enum ProjectX.EWaveSpawnerState
enum class EWaveSpawnerState : uint8_t
{
	EWaveSpawnerState__Idle        = 0,
	EWaveSpawnerState__Spawning    = 1,
	EWaveSpawnerState__InProgress  = 2,
	EWaveSpawnerState__CoolingDown = 3,
	EWaveSpawnerState__Completed   = 4,
	EWaveSpawnerState__Invalid     = 5,
	EWaveSpawnerState__EWaveSpawnerState_MAX = 6
};


// Enum ProjectX.EDesignatorTeamView
enum class EDesignatorTeamView : uint8_t
{
	EDesignatorTeamView__Everyone  = 0,
	EDesignatorTeamView__Allies    = 1,
	EDesignatorTeamView__Enemies   = 2,
	EDesignatorTeamView__User      = 3,
	EDesignatorTeamView__EDesignatorTeamView_MAX = 4
};


// Enum ProjectX.ECoolDownTrigger
enum class ECoolDownTrigger : uint8_t
{
	ECoolDownTrigger__Fire         = 0,
	ECoolDownTrigger__Unequip      = 1,
	ECoolDownTrigger__ActiveTime   = 2,
	ECoolDownTrigger__Custom       = 3,
	ECoolDownTrigger__ECoolDownTrigger_MAX = 4
};


// Enum ProjectX.ECoolDownType
enum class ECoolDownType : uint8_t
{
	ECoolDownType__Ammo            = 0,
	ECoolDownType__CoolDown        = 1,
	ECoolDownType__ECoolDownType_MAX = 2
};


// Enum ProjectX.EReloadType
enum class EReloadType : uint8_t
{
	EReloadType__Magazine          = 0,
	EReloadType__Individual        = 1,
	EReloadType__EReloadType_MAX   = 2
};


// Enum ProjectX.EFireType
enum class EFireType : uint8_t
{
	EFireType__SemiAutomatic       = 0,
	EFireType__Automatic           = 1,
	EFireType__Charged             = 2,
	EFireType__EFireType_MAX       = 3
};


// Enum ProjectX.EFireMode
enum class EFireMode : uint8_t
{
	EFireMode__None                = 0,
	EFireMode__Primary             = 1,
	EFireMode__Secondary           = 2,
	EFireMode__Tertiary            = 3,
	EFireMode__EFireMode_MAX       = 4
};


// Enum ProjectX.EWeaponState
enum class EWeaponState : uint8_t
{
	EWeaponState__Ready            = 0,
	EWeaponState__Down             = 1,
	EWeaponState__Firing           = 2,
	EWeaponState__Reloading        = 3,
	EWeaponState__Overheated       = 4,
	EWeaponState__Equipping        = 5,
	EWeaponState__UnEquipping      = 6,
	EWeaponState__WaitingToUnequip = 7,
	EWeaponState__Custom           = 8,
	EWeaponState__None             = 9,
	EWeaponState__EWeaponState_MAX = 10
};


// Enum ProjectX.ECompressedFlags
enum class ECompressedFlags : uint8_t
{
	ECompressedFlags__NONE         = 0,
	ECompressedFlags__FLAG_JumpPressed = 1,
	ECompressedFlags__FLAG_WantsToCrouch = 2,
	ECompressedFlags__FLAG_Reserved = 3,
	ECompressedFlags__FLAG_Reserved01 = 4,
	ECompressedFlags__Jetpack      = 5,
	ECompressedFlags__Dash         = 6,
	ECompressedFlags__Hookshot     = 7,
	ECompressedFlags__OmniDash     = 8,
	ECompressedFlags__ECompressedFlags_MAX = 9
};


// Enum ProjectX.EHitBoxShape
enum class EHitBoxShape : uint8_t
{
	EHitBoxShape__Box              = 0,
	EHitBoxShape__Sphere           = 1,
	EHitBoxShape__Capsule          = 2,
	EHitBoxShape__EHitBoxShape_MAX = 3
};


// Enum ProjectX.EProjectileMagnetismType
enum class EProjectileMagnetismType : uint8_t
{
	EProjectileMagnetismType__Always = 0,
	EProjectileMagnetismType__GamepadOnly = 1,
	EProjectileMagnetismType__Disabled = 2,
	EProjectileMagnetismType__EProjectileMagnetismType_MAX = 3
};


// Enum ProjectX.ELockOnType
enum class ELockOnType : uint8_t
{
	ELockOnType__TightAimOnly      = 0,
	ELockOnType__Always            = 1,
	ELockOnType__NONE              = 2,
	ELockOnType__ELockOnType_MAX   = 3
};


// Enum ProjectX.EMovementSpreadType
enum class EMovementSpreadType : uint8_t
{
	EMovementSpreadType__NONE      = 0,
	EMovementSpreadType__MoveTime  = 1,
	EMovementSpreadType__VelocityBased = 2,
	EMovementSpreadType__EMovementSpreadType_MAX = 3
};


// Enum ProjectX.EToggleTrigger
enum class EToggleTrigger : uint8_t
{
	EToggleTrigger__Fire           = 0,
	EToggleTrigger__EquipStart     = 1,
	EToggleTrigger__EquipComplete  = 2,
	EToggleTrigger__Custom         = 3,
	EToggleTrigger__EToggleTrigger_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
