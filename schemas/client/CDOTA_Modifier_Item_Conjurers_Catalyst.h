class CDOTA_Modifier_Item_Conjurers_Catalyst : public CDOTA_Buff_Item
{
	float32 damage_aoe;
	float32 damage;
	float32 damage_creep;
	float32 cooldown;
	float32 duration;
	int32 damage_threshold;
	bool has_hands;
	ParticleIndex_t m_nFXIndex;
	ParticleIndex_t m_nFXIndexB;
	CountdownTimer m_OverheatTimer;
};
