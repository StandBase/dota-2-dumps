class CFuncTrackChange : public CFuncPlatRot
{
	// MSaveBehavior (UNKNOWN FOR PARSER)
	CHandle< CPathTrack > m_trackTop;
	// MSaveBehavior (UNKNOWN FOR PARSER)
	CHandle< CPathTrack > m_trackBottom;
	// MSaveBehavior (UNKNOWN FOR PARSER)
	CHandle< CFuncTrackTrain > m_train;
	// MSaveBehavior (UNKNOWN FOR PARSER)
	CUtlSymbolLarge m_trackTopName;
	// MSaveBehavior (UNKNOWN FOR PARSER)
	CUtlSymbolLarge m_trackBottomName;
	// MSaveBehavior (UNKNOWN FOR PARSER)
	CUtlSymbolLarge m_trainName;
	TRAIN_CODE m_code;
	int32 m_targetState;
	int32 m_use;
};
