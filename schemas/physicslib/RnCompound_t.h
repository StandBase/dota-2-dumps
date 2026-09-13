// MGetKV3ClassDefaults = {
//	"m_Spheres":
//	[
//	],
//	"m_Capsules":
//	[
//	],
//	"m_Hulls":
//	[
//	],
//	"m_Meshes":
//	[
//	],
//	"m_Bounds":
//	{
//		"m_vMinBounds":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		],
//		"m_vMaxBounds":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		]
//	},
//	"m_vOrthographicAreas":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_flSurfaceArea": 0.000000,
//	"m_flVolume": 0.000000
//}
class RnCompound_t
{
	CUtlVector< RnSphere_t > m_Spheres;
	CUtlVector< RnCapsule_t > m_Capsules;
	CUtlVector< RnHull_t > m_Hulls;
	CUtlVector< RnMesh_t > m_Meshes;
	AABB_t m_Bounds;
	Vector m_vOrthographicAreas;
	float32 m_flSurfaceArea;
	float32 m_flVolume;
};
