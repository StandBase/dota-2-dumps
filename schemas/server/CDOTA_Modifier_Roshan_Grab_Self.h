class CDOTA_Modifier_Roshan_Grab_Self : public CDOTA_Buff
{
	CHandle< CDOTA_BaseNPC > m_hTarget;
	VectorWS m_vPulverizeCenter;
	VectorWS m_vCasterStartPos;
	float32 interval;
};
