// MGetKV3ClassDefaults = {
//	"m_unID": 0,
//	"m_nCratesForGameOver": 10,
//	"m_nCratesForNextLevel": 10,
//	"m_flCrateSpawnInterval": 1.250000,
//	"m_flHazardSpawnIntervalMin": 2.000000,
//	"m_flHazardSpawnIntervalMax": 3.000000,
//	"m_flPowerupInterval": 3.000000,
//	"m_flPowerupChance": 0.000000,
//	"m_nMaxCratesOnLevel": 20,
//	"m_vecDropTableCrates":
//	[
//	],
//	"m_vecDropTableHazards":
//	[
//	],
//	"m_vecDropTablePowerups":
//	[
//	],
//	"m_nRotationChance": 0,
//	"m_nRotationSpeedMin": 50,
//	"m_nRotationSpeedMax": 150
//}
// MVDataRoot
class CDOTACrateDropLevelDef
{
	DOTACrateDropLevelDefID_t m_unID;
	int32 m_nCratesForGameOver;
	int32 m_nCratesForNextLevel;
	float32 m_flCrateSpawnInterval;
	float32 m_flHazardSpawnIntervalMin;
	float32 m_flHazardSpawnIntervalMax;
	float32 m_flPowerupInterval;
	float32 m_flPowerupChance;
	int32 m_nMaxCratesOnLevel;
	CUtlVector< CDOTACrateDropTable > m_vecDropTableCrates;
	CUtlVector< CDOTACrateDropTable > m_vecDropTableHazards;
	CUtlVector< CDOTACrateDropTable > m_vecDropTablePowerups;
	int32 m_nRotationChance;
	int32 m_nRotationSpeedMin;
	int32 m_nRotationSpeedMax;
};
