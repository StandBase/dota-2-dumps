// MGetKV3ClassDefaults = {
//	"_class": "CNavPathCost",
//	"m_navHull":
//	{
//		"m_nHullIdx": 0
//	},
//	"m_bAllowLadders": true,
//	"m_bCanFly": false,
//	"m_bCanSwim": false,
//	"m_flWaterToGroundMaxHeight": 100.000000,
//	"m_flGroundToWaterMaxHeight": 100.000000,
//	"m_flGroundToWaterTransitionDistance": -1.000000,
//	"m_flWaterToGroundTransitionDistance": -1.000000,
//	"m_flFlyingTransitionTolerance": 140.000000,
//	"m_bOptimizeFlySpacePathfinds": true,
//	"m_bStringPullFlySpacePathfinds": false,
//	"m_bSupportsTransitions": false,
//	"m_flTransitionPenalty": 200.000000
//}
class CNavPathCost : public INavPathCost
{
	bool m_bAllowLadders;
	bool m_bCanFly;
	bool m_bCanSwim;
	float32 m_flWaterToGroundMaxHeight;
	float32 m_flGroundToWaterMaxHeight;
	float32 m_flGroundToWaterTransitionDistance;
	float32 m_flWaterToGroundTransitionDistance;
	float32 m_flFlyingTransitionTolerance;
	bool m_bOptimizeFlySpacePathfinds;
	bool m_bStringPullFlySpacePathfinds;
	bool m_bSupportsTransitions;
	float32 m_flTransitionPenalty;
};
