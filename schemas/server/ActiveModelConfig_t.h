// MGetKV3ClassDefaults = {
//	"_class": "ActiveModelConfig_t",
//	"m_Handle": 0,
//	"m_Name": "",
//	"m_AssociatedEntities":
//	[
//	],
//	"m_AssociatedEntityNames":
//	[
//	]
//}
class ActiveModelConfig_t
{
	ModelConfigHandle_t m_Handle;
	CUtlSymbolLarge m_Name;
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_AssociatedEntities;
	CNetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames;
};
