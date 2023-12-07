#pragma once
#include "CLserviceStock.h"


NS_SvcStock::CLserviceStock::CLserviceStock(void) {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapStock = gcnew NS_Comp_MappageStock::CLmapStock();
}
System::Data::DataSet^ NS_SvcStock::CLserviceStock::ChargerTousArticles(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMapStock->Select();
	return this->oCad->getRows(sql, dataTableName);
}

//