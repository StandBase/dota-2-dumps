// MGetKV3ClassDefaults = {
//	"_class": "PhysicsRagdollPose_t",
//	"m_Transforms":
//	[
//	],
//	"m_hOwner": null
//}
class PhysicsRagdollPose_t
{
	C_NetworkUtlVectorBase< CTransform > m_Transforms;
	CHandle< C_BaseEntity > m_hOwner;
	// MNotSaved
	bool m_bSetFromDebugHistory;
};
