class CDOTA_Ability_Aghanim_Spear : public CDOTABaseAbility
{
	CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList;
	CUtlVector< int32 > m_vecProjectileHandles;
	VectorWS m_vTarget;
	VectorWS m_vSourcePosition;
	int32 damage;
};
