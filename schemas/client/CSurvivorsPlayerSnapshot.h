// MGetKV3ClassDefaults = {
//	"m_heroID": 0,
//	"m_nCurrentLevel": 1,
//	"m_flCurrentExp": 0.000000,
//	"m_nRerollsRemaining": 0,
//	"m_vecPowerUps":
//	[
//	],
//	"m_vOrigin": null
//}
// MVDataRoot
class CSurvivorsPlayerSnapshot
{
	SurvivorsHeroID_t m_heroID;
	int32 m_nCurrentLevel;
	float32 m_flCurrentExp;
	int32 m_nRerollsRemaining;
	CUtlVector< CSurvivorsPowerUpSnapshot > m_vecPowerUps;
	VectorWS m_vOrigin;
};
