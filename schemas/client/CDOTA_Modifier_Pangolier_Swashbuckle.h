class CDOTA_Modifier_Pangolier_Swashbuckle : public CDOTA_Buff
{
	int32 m_nStrikesLeft;
	float32 attack_interval;
	VectorWS m_vSpawnPos;
	Vector m_vStrikeDir;
	VectorWS m_vDashPos;
	bool m_bApplyDamagePenalty;
};
