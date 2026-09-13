// MEntityAllowsPortraitWorldSpawn
class CDOTA_DarkCarnival_MurderOfCrows : public C_BaseEntity
{
	CStrongHandle< InfoForResourceTypeCModel > m_hCrowModel;
	CUtlSymbolLarge m_sCrowExplodeVFX;
	CUtlSymbolLarge m_sCrowExplodeSound;
	int32 m_nCountingCrows;
	float32 m_flCrowSpeed;
	float32 m_flCrowScale;
};
