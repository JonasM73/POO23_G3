#include "CLserviceStats.h"
NS_SvcStats::CLserviceStats::CLserviceStats(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapStats = gcnew NS_Comp_MappageStats::CLmapStats();
}
System::Data::DataSet^ NS_SvcStats::CLserviceStats::AfficherPanierMoyen(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapStats->PanierMoyen();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_SvcStats::CLserviceStats::AfficherCAMois(System::String^ dataTableName, int m)
{
	System::String^ sql;
	this->oMapStats->setMois(m);
	sql = this->oMapStats->CAMois();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_SvcStats::CLserviceStats::AfficherProduitsStockBas(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMapStats->Reapprovisionnement();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_SvcStats::CLserviceStats::AfficherMontantTotalClient(System::String^ dataTableName, System::String^ n)
{
	System::String^ sql;
	this->oMapStats->setNumClient(n);
	sql = this->oMapStats->MontantTotalClient();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_SvcStats::CLserviceStats::AfficherArticlesPlusVendus(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->oMapStats->ArticlesPlusVendus();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_SvcStats::CLserviceStats::AfficherArticlesMoinsVendus(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->oMapStats->ArticlesMoinsVendus();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_SvcStats::CLserviceStats::AfficherValeurCommercialeStock(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->oMapStats->ValeurCommercialeStock();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_SvcStats::CLserviceStats::AfficherValeurAchatStock(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->oMapStats->ValeurAchatStock();
	return this->oCad->getRows(sql, dataTableName);
}
