// MGetKV3ClassDefaults = {
//	"m_unRewardOptionID": 0,
//	"m_sRewardClass": "",
//	"m_bDisplayIfAlreadyOwned": true
//}
// MPropertyAutoExpandSelf
class CandyShopRewardOption_t
{
	// MPropertyDescription = "A unique ID for this reward option."
	CandyShopRewardOptionID_t m_unRewardOptionID;
	// MPropertyDescription = "A CSS class to assign to rewards of this type"
	CUtlString m_sRewardClass;
	// MPropertyDescription = "If we should display that this reward is already owned in the user's inventory"
	bool m_bDisplayIfAlreadyOwned;
};
