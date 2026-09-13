class CDOTA_Modifier_Elder_Titan_AncestralSpirit : public CDOTA_Buff
{
	float32 pass_damage;
	float32 radius;
	int32 controllable;
	int32 m_nCreepsHit;
	int32 m_nHeroesHit;
	float32 m_flSpeed;
	CUtlVector< CHandle< C_BaseEntity > > m_hHitUnits;
	VectorWS m_vCasterStartPosition;
	VectorWS m_vSpiritStartPosition;
};
