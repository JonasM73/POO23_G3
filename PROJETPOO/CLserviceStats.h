#pragma once
#include "CLcad.h"
#include "CLmapStats.h"
namespace NS_SvcStats {
	ref class CLserviceStats
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappageStats::CLmapStats^ oMapStats;
	public:
		CLserviceStats(void);
		System::Data::DataSet^ AfficherPanierMoyen(System::String^ dataTableName);
		System::Data::DataSet^ AfficherCAMois(System::String^ dataTableName, int);
		System::Data::DataSet^ AfficherProduitsStockBas(System::String^ dataTableName);
		System::Data::DataSet^ AfficherMontantTotalClient(System::String^, System::String^);
		System::Data::DataSet^ AfficherArticlesPlusVendus(System::String^);
		System::Data::DataSet^ AfficherArticlesMoinsVendus(System::String^);
		System::Data::DataSet^ AfficherValeurCommercialeStock(System::String^);
		System::Data::DataSet^ AfficherValeurAchatStock(System::String^);
	};

}