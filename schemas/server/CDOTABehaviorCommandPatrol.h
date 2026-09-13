class CDOTABehaviorCommandPatrol
{
	CDOTABehaviorMoveTo m_MoveTo;
	VectorWS m_vOrderPosition;
	CUtlVector< VectorWS > m_vPatrolPoints;
	int32 m_nCurrentTargetIndex;
	int32 m_nDirection;
};
