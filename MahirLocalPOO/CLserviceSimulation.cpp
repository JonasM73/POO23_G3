#include "CLserviceSimulation.h"

NS_Svc_Simu::CLserviceSimulation::CLserviceSimulation(void){
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapSimu = gcnew NS_Comp_MappageSimu::CLmapSimulation();
}

System::Data::DataSet^ NS_Svc_Simu::CLserviceSimulation::MargeCommerciale5(System::String^ dataTableName, int m) {
	System::String^ sql;
	switch (m)
	{
	case 5:
		oMapSimu->setMargeC("1.05");
		break;
	case 10:
		oMapSimu->setMargeC("1.10");
		break;
	case 15:
		oMapSimu->setMargeC("1.15");
		break;
	}
	sql = this->oMapSimu->margeCommerciale();
	return oCad->getRows(sql, dataTableName);
}