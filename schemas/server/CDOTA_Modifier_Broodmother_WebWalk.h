class CDOTA_Modifier_Broodmother_WebWalk : public CDOTA_Buff
{
	float32 snare_radius;
	float32 snare_duration;
	VectorWS m_vLastPosition;
	CHandle< CBaseEntity > m_hLastThinker;
};
