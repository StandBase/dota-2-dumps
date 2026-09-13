// MGetKV3ClassDefaults = {
//	"m_nCollisionAttributeIndex": 0,
//	"m_nSurfacePropertyIndex": 0,
//	"m_UserFriendlyName": "",
//	"m_bUserFriendlyNameSealed": false,
//	"m_bUserFriendlyNameLong": false,
//	"m_nToolMaterialHash": 0,
//	"m_Compound":
//	{
//		"m_Spheres":
//		[
//		],
//		"m_Capsules":
//		[
//		],
//		"m_Hulls":
//		[
//		],
//		"m_Meshes":
//		[
//		],
//		"m_Bounds":
//		{
//			"m_vMinBounds":
//			[
//				0.000000,
//				0.000000,
//				0.000000
//			],
//			"m_vMaxBounds":
//			[
//				0.000000,
//				0.000000,
//				0.000000
//			]
//		},
//		"m_vOrthographicAreas":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		],
//		"m_flSurfaceArea": 0.000000,
//		"m_flVolume": 0.000000
//	}
//}
class RnCompoundDesc_t : public RnShapeDesc_t
{
	RnCompound_t m_Compound;
};
