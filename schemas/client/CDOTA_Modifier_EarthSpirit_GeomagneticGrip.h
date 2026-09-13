class CDOTA_Modifier_EarthSpirit_GeomagneticGrip : public CDOTA_Buff
{
	float32 radius;
	float32 rock_damage;
	float32 pull_units_per_second;
	float32 pull_units_per_second_heroes;
	float32 total_pull_distance;
	float32 duration;
	bool m_bUsedStone;
	VectorWS m_vDestination;
	VectorWS m_vLocation;
	CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities;
};
