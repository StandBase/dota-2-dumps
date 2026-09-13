class CDOTA_Modifier_ItemWiggle_Thinker : public CDOTA_Buff
{
	VectorWS m_vOriginalPosition;
	float32 m_flOriginalScale;
	GameTime_t m_flLastChangeTime;
	VectorWS m_vLastChangePosition;
	float32 m_flLastChangeScale;
	VectorWS m_vTargetPosition;
	float32 m_flTargetScale;
	bool m_bFirstThink;
	float32 m_flStartAmplitude;
	float32 m_flEndAmplitude;
	float32 m_flScaleAmplitude;
	float32 m_flStartFrequency;
	float32 m_flEndFrequency;
};
