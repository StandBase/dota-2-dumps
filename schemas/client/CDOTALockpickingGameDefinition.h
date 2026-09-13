// MGetKV3ClassDefaults = {
//	"m_vecStages":
//	[
//	],
//	"m_successEffect": "",
//	"m_failEffect": "",
//	"m_nScorePerUnlock": 0
//}
// MVDataRoot
class CDOTALockpickingGameDefinition
{
	CUtlVector< CDOTALockpickingStageDefinition > m_vecStages;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_successEffect;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_failEffect;
	int32 m_nScorePerUnlock;
};
