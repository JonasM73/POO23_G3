#include "CLserviceSimulation.h"

NS_Svc_Simu::CLserviceSimulation::CLserviceSimulation(void){
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapSimu = gcnew NS_Comp_MappageSimu::CLmapSimulation();
}

System::Data::DataSet^ NS_Svc_Simu::CLserviceSimulation::MargeCommerciale5(System::String^ dataTableName,System::String^ TVA1, int m, int r, int d) {
	System::String^ sql;
	switch (m)
	{
	case 0:
		oMapSimu->setMargeC("0");
		break;
	case 5:
		oMapSimu->setMargeC("0.05");
		break;
	case 10:
		oMapSimu->setMargeC("0.10");
		break;
	case 15:
		oMapSimu->setMargeC("0.15");
		break;
	}
	switch (r)
	{
	case 0:
		oMapSimu->setRemiseC("0");
		break;
	case 5:
		oMapSimu->setRemiseC("0.05");
		break;
	case 6:
		oMapSimu->setRemiseC("0.06");
		break;
	}
	switch (d)
	{
	case 0:
		oMapSimu->setDemarqueI("0");
		break;
	case 2:
		oMapSimu->setDemarqueI("0.02");
		break;
	case 3:
		oMapSimu->setDemarqueI("0.03");
		break;
	case 5:
		oMapSimu->setDemarqueI("0.05");
		break;
	}
	oMapSimu->setTVA1(TVA1);
	sql = this->oMapSimu->margeCommerciale();
	return oCad->getRows(sql, dataTableName);
}