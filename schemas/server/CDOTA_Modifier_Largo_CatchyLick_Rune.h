class CDOTA_Modifier_Largo_CatchyLick_Rune : public CDOTA_Buff
{
	float32 pull_duration;
	float32 pull_distance_ally;
	CHandle< CBaseEntity > m_hRune;
	VectorWS m_vOriginalPos;
	VectorWS m_vDestination;
};
