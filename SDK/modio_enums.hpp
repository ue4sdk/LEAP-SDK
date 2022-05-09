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

// Enum modio.EModioBooleanCustomizableType
enum class EModioBooleanCustomizableType : uint8_t
{
	UNDEFINED                      = 0,
	SET_TO_TRUE                    = 1,
	SET_TO_FALSE                   = 2,
	EModioBooleanCustomizableType_MAX = 3
};


// Enum modio.EModioFieldFilterType
enum class EModioFieldFilterType : uint8_t
{
	FIELD_FILTER_EQUAL             = 0,
	FIELD_FILTER_NOT_EQUAL         = 1,
	FIELD_FILTER_LIKE              = 2,
	FIELD_FILTER_NOT_LIKE          = 3,
	FIELD_FILTER_IN                = 4,
	FIELD_FILTER_NOT_IN            = 5,
	FIELD_FILTER_MIN               = 6,
	FIELD_FILTER_MAX               = 7,
	FIELD_FILTER_SMALLER_THAN      = 8,
	FIELD_FILTER_GREATER_THAN      = 9
};


// Enum modio.EModioMaturityOption
enum class EModioMaturityOption : uint8_t
{
	EModioMaturityOption__ALCOHOL  = 0,
	EModioMaturityOption__DRUGS    = 1,
	EModioMaturityOption__VIOLENCE = 2,
	EModioMaturityOption__EXPLICIT = 3,
	EModioMaturityOption__UNDEFINED = 4,
	EModioMaturityOption__EModioMaturityOption_MAX = 5
};


// Enum modio.EModioModSortType
enum class EModioModSortType : uint8_t
{
	SORT_BY_ID                     = 0,
	SORT_BY_DATE_ADDED             = 1,
	SORT_BY_DATE_UPDATED           = 2,
	SORT_BY_DATE_LIVE              = 3,
	SORT_BY_NAME                   = 4,
	SORT_BY_DOWNLOADS              = 5,
	SORT_BY_POPULAR                = 6,
	SORT_BY_RATING                 = 7,
	SORT_BY_SUBSCRIBERS            = 8,
	SORT_BY_MAX                    = 9
};


// Enum modio.EModioModState
enum class EModioModState : uint8_t
{
	NOT_DEFINED                    = 0,
	NOT_INSTALLED                  = 1,
	QUEUED                         = 2,
	STARTING_DOWNLOAD              = 3,
	DOWNLOADING                    = 4,
	PAUSING                        = 5,
	PAUSED                         = 6,
	INSTALLED                      = 7,
	PRIORITIZING_OTHER_DOWNLOAD    = 8,
	STARTING_UPLOAD                = 9,
	DOWNLOADED                     = 10,
	UPLOADING                      = 11,
	EModioModState_MAX             = 12
};


// Enum modio.EModioRatingType
enum class EModioRatingType : uint8_t
{
	RATING_NOT_DEFINED             = 0,
	RATING_NEGATIVE                = 1,
	RATING_POSITIVE                = 2,
	RATING_MAX                     = 3
};


// Enum modio.EModioReportType
enum class EModioReportType : uint8_t
{
	Generic                        = 0,
	DMCA                           = 1,
	EModioReportType_MAX           = 2
};


// Enum modio.EModioResourceType
enum class EModioResourceType : uint8_t
{
	GAMES                          = 0,
	Mods                           = 1,
	Users                          = 2,
	EModioResourceType_MAX         = 3
};


// Enum modio.ERunInEditorOn
enum class ERunInEditorOn : uint8_t
{
	ERunInEditorOn__FirstServer    = 0,
	ERunInEditorOn__FirstClient    = 1,
	ERunInEditorOn__DedicatedServer = 2,
	ERunInEditorOn__EditorOnly     = 3,
	ERunInEditorOn__ERunInEditorOn_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
