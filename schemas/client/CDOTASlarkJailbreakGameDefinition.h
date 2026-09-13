// MGetKV3ClassDefaults = {
//	"m_nPointsPerBlock": 5,
//	"m_nPointsPerBonusBlock": 100,
//	"m_nPointsPerCompletedLevel": 0,
//	"m_vecStages":
//	[
//	]
//}
// MVDataRoot
class CDOTASlarkJailbreakGameDefinition
{
	int32 m_nPointsPerBlock;
	int32 m_nPointsPerBonusBlock;
	int32 m_nPointsPerCompletedLevel;
	CUtlVector< CDOTASlarkJailbreakStageDefinition > m_vecStages;
};
