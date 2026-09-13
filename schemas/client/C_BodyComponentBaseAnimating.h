// MGetKV3ClassDefaults = {
//	"_class": "C_BodyComponentBaseAnimating",
//	"m_skeletonInstance":
//	{
//		"m_hParent":
//		{
//			"m_hOwner": null,
//			"m_name": ""
//		},
//		"m_vecOrigin":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		],
//		"m_angRotation":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		],
//		"m_flScale": 1.000000,
//		"m_vecAbsOrigin": null,
//		"m_angAbsRotation":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		],
//		"m_flAbsScale": 1.000000,
//		"m_bDormant": false,
//		"m_bForceParentToBeNetworked": false,
//		"m_name": "",
//		"m_hierarchyAttachName": "",
//		"m_flZOffset": 0.000000,
//		"m_angLocalOrientation":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		],
//		"m_flClientLocalScale": 1.000000,
//		"m_modelState":
//		{
//			"m_hModel": "",
//			"m_ModelName": "",
//			"m_flRootBoneOffset_x": 0.000000,
//			"m_flRootBoneOffset_y": 0.000000,
//			"m_flRootBoneOffset_z": 0.000000,
//			"m_nRootBoneOffsetResetSerialNumber": 0,
//			"m_bClientClothCreationSuppressed": false,
//			"m_nAnimStateNoInterpSerialNumber": 0,
//			"m_MeshGroupMask": 9223372036854775808,
//			"m_nBodyGroupChoices":
//			[
//			],
//			"m_nIdealMotionType": 3,
//			"m_nForceLOD": -1,
//			"m_nClothUpdateFlags": 0
//		},
//		"m_bDisableSolidCollisionsForHierarchy": false,
//		"m_materialGroup": "",
//		"m_nHitboxSet": 0
//	},
//	"m_animationController": null
//}
class C_BodyComponentBaseAnimating : public CBodyComponentSkeletonInstance
{
	C_BaseAnimatingController m_animationController;
};
