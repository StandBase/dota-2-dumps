class CDOTA_Modifier_Wind_Waker : public CDOTA_Buff
{
	CHandle< CBaseEntity > m_hBlocker;
	GameTime_t m_flStartTime;
	VectorWS m_vStartPos;
	float32 m_flCurTime;
	float32 m_flHeightT;
	VectorWS m_vMoveToPos;
};
