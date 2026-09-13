class CDOTA_BaseNPC_Effigy_Statue : public CDOTA_BaseNPC_Building
{
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hEffigyParticleDef;
	EEvent m_eEffigyEvent;
	int32 m_nEffigyLevel;
};
