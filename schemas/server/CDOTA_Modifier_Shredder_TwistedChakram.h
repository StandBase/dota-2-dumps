class CDOTA_Modifier_Shredder_TwistedChakram : public CDOTA_Buff
{
	VectorWS m_vControlOne;
	VectorWS m_vControlTwo;
	VectorWS m_vControlThree;
	VectorWS m_vControlFour;
	VectorWS m_vTargetLoc;
	VectorWS m_vOriginalTargetLoc;
	VectorWS m_vSourceLoc;
	VectorWS m_vMidPoint;
	VectorWS m_vEndPoint;
	int32 m_nCurrentLeg;
	float32 m_flTravelDuration;
	GameTime_t m_flBoomerangDieTime;
	bool m_bReturning;
	int32 m_nFramesToWait;
	CHandle< CBaseEntity > m_hChakram;
	ParticleIndex_t m_nChakramFXIndex;
	ParticleIndex_t m_nOldChakramFXindex;
	CUtlVector< CHandle< CBaseEntity > > m_vecUniqueHitList;
	float32 radius;
	float32 spread;
	float32 damage;
	float32 pass_slow_duration;
	float32 min_throw_duration;
	float32 max_throw_duration;
};
