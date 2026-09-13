class CDOTA_Modifier_Earthshaker_EnchantTotem_Leap : public CDOTA_Buff
{
	VectorWS m_vLoc;
	float32 m_flPredictedTotalTime;
	VectorWS m_vStartPosition;
	float32 m_flCurrentTimeHoriz;
	float32 m_flCurrentTimeVert;
	bool m_bHorizontalMotionInterrupted;
	bool m_bDamageApplied;
	bool m_bTargetTeleported;
	Vector m_vHorizontalVelocity;
	VectorWS m_vLastKnownTargetPosition;
	float32 m_flInitialVelocityZ;
	int32 scepter_height;
	int32 scepter_height_arcbuffer;
	int32 scepter_acceleration_z;
	int32 scepter_acceleration_horizontal;
};
