#pragma once
NS_SvcStock::CLserviceStock::CLserviceStock(void) {
		this->oCad = gcnew NS_Comp_Data::CLcad();
		this->oMapStock = gcnew NS_Comp_MappageStock::CLmapTB();
	}
System::Data::DataSet^ NS_SvcStock::ChargerTousArticles(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->oMapStock->Select();
	return this->oCad->getRows(sql, dataTableName);
	}