class CDOTA_Modifier_Windrunner_GaleForce : public CDOTA_Buff
{
	VectorWS m_vEndpoint;
	VectorWS m_vFlowPosition;
	Vector m_vPull;
	ParticleIndex_t m_nFXIndex;
	GameTime_t m_flLastThinkTime;
	float32 wind_strength;
};
