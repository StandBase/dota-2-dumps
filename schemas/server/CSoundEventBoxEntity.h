class CSoundEventBoxEntity : public CSoundEventMultiPointEntity
{
	CUtlSymbolLarge m_iszBoxEntityName;
	// MNotSaved
	CNetworkUtlVectorBase< SoundeventBoxHelperNetworked_t > m_vecBoxHelpersNetworked;
};
