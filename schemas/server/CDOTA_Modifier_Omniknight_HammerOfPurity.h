class CDOTA_Modifier_Omniknight_HammerOfPurity : public CDOTA_Buff
{
	bool m_bHammerAttack;
	int32 attack_range_bonus;
	AttackRecord_t m_nAttackRecord;
	int32 total_ticks;
	CUtlVector< int32 > m_nHealQueue;
	float32 tick_rate;
	float32 heal_duration;
};
