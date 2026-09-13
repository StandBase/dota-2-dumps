// MGetKV3ClassDefaults = {
//	"_class": "PhysicsRagdollPose_t",
//	"m_Transforms":
//	[
//	],
//	"m_hOwner": null
//}
class PhysicsRagdollPose_t
{
	CNetworkUtlVectorBase< CTransform > m_Transforms;
	CHandle< CBaseEntity > m_hOwner;
	// MNotSaved
	bool m_bSetFromDebugHistory;
};
