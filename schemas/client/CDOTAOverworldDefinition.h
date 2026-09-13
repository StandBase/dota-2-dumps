// MGetKV3ClassDefaults = {
//	"generic_data_type": "",
//	"m_unID": 0,
//	"m_sKey": "",
//	"m_eAssociatedEvent": "EVENT_ID_NONE",
//	"m_eProgressionType": "k_eOverworldProgressionType_NodesAndPaths",
//	"m_unOverworldVersion": 0,
//	"m_sTokenTraderEncounterName": "",
//	"m_sNodeUnlockEventAction": "",
//	"m_vGridOffset":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_unGridSize": 64,
//	"m_unNodeGridSize": 8,
//	"m_unMapWidth": 0,
//	"m_unMapHeight": 0,
//	"m_vecCameraDistances":
//	[
//	],
//	"m_flMinCameraDistance": 0.000000,
//	"m_flMaxCameraDistance": 0.000000,
//	"m_flInnerCameraDistanceThreshold": 0.000000,
//	"m_vMinCameraBounds":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_vMaxCameraBounds":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_sMapVisualsXmlPath": "",
//	"m_vecReleaseSchedule":
//	[
//	],
//	"m_vecStartNodeIds":
//	[
//	],
//	"m_unEndNodeID": 0,
//	"m_sVisualNovelName": "",
//	"m_sTokenLocStringPrefix": "",
//	"m_sActNumberLocString": "",
//	"m_sActTitleLocString": "",
//	"m_unPremiumItemDef": 0,
//	"m_unFullCompletionItemDef": 0,
//	"m_unScrapTokenID": 0,
//	"m_unFortuneDuration": 0,
//	"m_unPathUnlockerTokenID": 0,
//	"m_unFortuneCountForPermanentReward": 1,
//	"m_unTimesFortuneCanBeSeenBeforeRepeats": 1,
//	"m_vecFortuneWeightForUnseenAmount":
//	[
//	],
//	"m_nMaxTokenCap": 0,
//	"m_vecEventActionTriggers":
//	[
//	],
//	"m_vecEventActionGrantAndClaimPairTriggers":
//	[
//	],
//	"m_vecPathColorRules":
//	[
//	],
//	"m_strNarrationVisualNovel": "",
//	"m_mapNarrationDialogues":
//	{
//	},
//	"m_Theme":
//	{
//		"m_sButtonType": "DOTACrownfallButton",
//		"m_sTokenType": "DOTACrownfallToken",
//		"m_sTokenReceivedPopupLayout": "file://{resources}/layout/battle_pass/crownfall/bp_popup_crownfall_tokens_received.xml",
//		"m_sTokenTraderEncounterLayout": "file://{resources}/layout/battle_pass/crownfall/bp_popup_crownfall_encounter_token_trader.xml",
//		"m_sTokenTraderVisualNovelStyle": "",
//		"m_sInventoryPickerLayout": "file://{resources}/layout/ui_overworld_inventory_picker.xml",
//		"m_sTextPrefix": "Crownfall"
//	},
//	"m_vecTokenTypes":
//	[
//	],
//	"m_vecTarotCards":
//	[
//	],
//	"m_vecFortuneTellerRewards":
//	[
//	],
//	"m_vecFortuneForcedReveals":
//	[
//	],
//	"m_vecFortuneTellerFixedReward":
//	[
//	],
//	"m_vecFortuneTellerStoryNodes":
//	[
//	],
//	"m_vecHeroRewards":
//	[
//	],
//	"m_vecNodes":
//	[
//	],
//	"m_vecPaths":
//	[
//	],
//	"m_vecRooms":
//	[
//	],
//	"m_vecEncounters":
//	[
//	],
//	"m_vecHeroes":
//	[
//	],
//	"m_vecCharacters":
//	[
//	],
//	"m_vecClickables":
//	[
//	],
//	"m_vecRoomGroups":
//	[
//	]
//}
// MVDataRoot
// MVDataSingleton
class CDOTAOverworldDefinition
{
	CUtlString generic_data_type;
	// MPropertyDescription = ""
	OverworldID_t m_unID;
	// MPropertyDescription = ""
	CUtlString m_sKey;
	// MPropertyDescription = "The event related to this overworld. Used for rewards and expiration."
	EEvent m_eAssociatedEvent;
	EOverworldProgressionType m_eProgressionType;
	uint8 m_unOverworldVersion;
	// MPropertyDescription = "Optional name of the token trader encounter. Useful if the encounter isn't attached to a node on the overworld."
	CUtlString m_sTokenTraderEncounterName;
	// MPropertyDescription = "An event action to grant whenever a node is unlocked."
	CUtlString m_sNodeUnlockEventAction;
	Vector2D m_vGridOffset;
	uint32 m_unGridSize;
	uint32 m_unNodeGridSize;
	uint32 m_unMapWidth;
	uint32 m_unMapHeight;
	// MPropertyDescription = "Different camera/zoom levels, for use in 3D scene"
	CUtlVector< float32 > m_vecCameraDistances;
	// MPropertyDescription = "Minimum camera distance. Lower means more zoom in possible"
	float32 m_flMinCameraDistance;
	// MPropertyDescription = "Maximum camera distance. Higher means more zoom out possible"
	float32 m_flMaxCameraDistance;
	// MPropertyDescription = "The camera distance at which we reveal rooms / train car interior."
	float32 m_flInnerCameraDistanceThreshold;
	// MPropertyDescription = "Minimum camera center position."
	Vector2D m_vMinCameraBounds;
	// MPropertyDescription = "Minimum camera center position."
	Vector2D m_vMaxCameraBounds;
	CUtlString m_sMapVisualsXmlPath;
	// MPropertyDescription = "Optional release schedule, for if we want certain content to release at specific times."
	CUtlVector< DOTAOverworldReleaseScheduledUnlock_t > m_vecReleaseSchedule;
	// MPropertyDescription = ""
	CUtlVector< OverworldNodeID_t > m_vecStartNodeIds;
	// MPropertyDescription = ""
	OverworldNodeID_t m_unEndNodeID;
	// MPropertyDescription = "Name/key of the default Visual Novel associated with this map. Note that this can be overriden through DOTAOverworldReleaseScheduledUnlock_t"
	CUtlString m_sVisualNovelName;
	// MPropertyDescription = "Prefix to combine with tokent names to give their loc strings."
	CUtlString m_sTokenLocStringPrefix;
	// MPropertyDescription = "Act number loc string, e.g. Act I."
	CUtlString m_sActNumberLocString;
	// MPropertyDescription = "Act title loc string, e.g. The Eyrie."
	CUtlString m_sActTitleLocString;
	// MPropertyDescription = ""
	item_definition_index_t m_unPremiumItemDef;
	// MPropertyDescription = ""
	item_definition_index_t m_unFullCompletionItemDef;
	// MPropertyDescription = "ID of the scrap token rewarded for playing matches."
	OverworldTokenID_t m_unScrapTokenID;
	// MPropertyDescription = "How long a fortune lasts for an account in seconds"
	uint32 m_unFortuneDuration;
	// MPropertyDescription = "This token can be used to unlock any node with non-special token costs."
	OverworldTokenID_t m_unPathUnlockerTokenID;
	// MPropertyDescription = "How many times a fortune has to be received before the permanent reward can be unlocked"
	int32 m_unFortuneCountForPermanentReward;
	// MPropertyDescription = "How many times each fortune can be revealed until all fortunes have been revealed this amount"
	int32 m_unTimesFortuneCanBeSeenBeforeRepeats;
	// MPropertyDescription = "What weight a fortune should have when being randomly selected based on how many times they can still be seen. The amount unseen is used as the index."
	CUtlVector< int32 > m_vecFortuneWeightForUnseenAmount;
	// MPropertyDescription = "Hard limit on per-token quantities. It's impossible to have more than this number of tokens."
	int32 m_nMaxTokenCap;
	CUtlVector< CDOTAEventActionTrigger > m_vecEventActionTriggers;
	CUtlVector< CDOTAEventActionGrantAndClaimPairTrigger > m_vecEventActionGrantAndClaimPairTriggers;
	CUtlVector< CDOTAOverworldPathColorRule > m_vecPathColorRules;
	CUtlString m_strNarrationVisualNovel;
	CUtlOrderedMap< CUtlString, CUtlString > m_mapNarrationDialogues;
	CDOTAOverworldTheme m_Theme;
	CUtlVector< CDOTAOverworldToken* > m_vecTokenTypes;
	CUtlVector< CDOTAOverworldTarotCard* > m_vecTarotCards;
	CUtlVector< CDOTAOverworldFortuneTellerReward* > m_vecFortuneTellerRewards;
	CUtlVector< CDOTAOverworldFortuneForcedReveal* > m_vecFortuneForcedReveals;
	CUtlVector< CDOTAOverworldFortuneTellerFixedReward* > m_vecFortuneTellerFixedReward;
	CUtlVector< CDOTAOverworldFortuneTellerStoryNode* > m_vecFortuneTellerStoryNodes;
	CUtlVector< CDOTAOverworldHeroReward* > m_vecHeroRewards;
	CUtlVector< CDOTAOverworldNode* > m_vecNodes;
	CUtlVector< CDOTAOverworldPath* > m_vecPaths;
	CUtlVector< CDOTAOverworldRoom* > m_vecRooms;
	CUtlVector< CDOTAOverworldEncounter* > m_vecEncounters;
	CUtlVector< CDOTAOverworldHero* > m_vecHeroes;
	CUtlVector< CDOTAOverworldCharacter* > m_vecCharacters;
	CUtlVector< CDOTAOverworldClickable* > m_vecClickables;
	CUtlVector< CDOTAOverworldRoomGroup* > m_vecRoomGroups;
};
