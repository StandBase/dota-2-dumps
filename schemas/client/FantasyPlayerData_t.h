// MGetKV3ClassDefaults = {
//	"m_unAccountID": 0,
//	"m_unTeamID": 0,
//	"m_strPlayerName": "",
//	"m_bIsValid": false
//}
// MPropertyAutoExpandSelf
class FantasyPlayerData_t
{
	// MPropertyDescription = "Account ID of the Pro Player"
	uint32 m_unAccountID;
	// MPropertyDescription = "What team this player is competing with for the fantasy league"
	uint32 m_unTeamID;
	// MPropertyDescription = "Name of the pro player"
	CUtlString m_strPlayerName;
	// MPropertyDescription = "Is this player still playing in the league?"
	bool m_bIsValid;
};
