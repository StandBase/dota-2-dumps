enum NPCPhysicsHullType_t : uint32_t
{
	// MPropertyFriendlyName = "None"
	eInvalid = 0,
	// MPropertyFriendlyName = "Capsule - Ground"
	eGroundCapsule = 1,
	// MPropertyFriendlyName = "Capsule - Centered"
	eCenteredCapsule = 2,
	// MPropertyFriendlyName = "Capsule - Generic"
	eGenericCapsule = 3,
	// MPropertyFriendlyName = "Box - Ground"
	eGroundBox = 4,
	// MPropertyFriendlyName = "Cylinder - Ground (SLOW PERF)"
	eGroundCylinder = 5,
	// MPropertyFriendlyName = "Cylinder - Centered (SLOW PERF)"
	eCenteredCylinder = 6,
};
