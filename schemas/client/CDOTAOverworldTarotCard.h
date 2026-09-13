// MGetKV3ClassDefaults = {
//	"m_unID": 0,
//	"m_sName": "",
//	"m_bIsCardBack": false,
//	"m_eFortuneReward": "k_eOverworldFortuneReward_Invalid",
//	"m_eFortuneRequirement": "k_eOverworldFortuneRequirement_Invalid",
//	"m_eFortuneModifier": "k_eOverworldFortuneModifier_Invalid",
//	"m_sFortunePosition1": "",
//	"m_sFortunePosition2": "",
//	"m_sFortunePosition3": "",
//	"m_sSoundEventName": "",
//	"m_vecSoundEventOptions":
//	[
//	],
//	"m_unUnlockReward": 0
//}
// MVDataRoot
class CDOTAOverworldTarotCard
{
	// MVDataUniqueMonotonicInt = "_editor/next_id_tarot_card"
	// MPropertyAttributeEditor = "locked_int()"
	OverworldTarotCardID_t m_unID;
	// MPropertyDescription = ""
	CUtlString m_sName;
	// MPropertyDescription = ""
	bool m_bIsCardBack;
	// MPropertyDescription = ""
	EOverworldFortuneReward m_eFortuneReward;
	// MPropertyDescription = ""
	EOverworldFortuneRequirement m_eFortuneRequirement;
	// MPropertyDescription = ""
	EOverworldFortuneModifier m_eFortuneModifier;
	// MPropertyDescription = ""
	CUtlString m_sFortunePosition1;
	// MPropertyDescription = ""
	CUtlString m_sFortunePosition2;
	// MPropertyDescription = ""
	CUtlString m_sFortunePosition3;
	CUtlString m_sSoundEventName;
	CUtlVector< CUtlString > m_vecSoundEventOptions;
	// MPropertyDescription = ""
	uint32 m_unUnlockReward;
};
