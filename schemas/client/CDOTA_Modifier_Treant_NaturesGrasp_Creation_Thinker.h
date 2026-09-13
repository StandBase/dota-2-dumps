class CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker : public CDOTA_Buff
{
	float32 creation_interval;
	float32 vines_duration;
	int32 vine_spawn_interval;
	VectorWS m_vInitialLoc;
	VectorWS m_vFinalLoc;
	int32 m_iVineCount;
	int32 m_iVinesIndex;
};
