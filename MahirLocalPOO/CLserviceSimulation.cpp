#include "CLserviceSimulation.h"
using namespace NS_Svc_Simu;

CLserviceSimulation::CLserviceSimulation(void){
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapSimu = gcnew NS_Comp_MappageSimu::CLmapSimulation();

}

System::Data::DataSet^ CLserviceSimulation::MargeCommerciale5(System::String^ dataTableName, System::String^ TVA1, int m, int r, int d) {
    System::String^ sql;
    switch (m) {
    case 0: oMapSimu->setMargeC("0"); break;
    case 5: oMapSimu->setMargeC("0.05"); break;
    case 10: oMapSimu->setMargeC("0.10"); break;
    case 15: oMapSimu->setMargeC("0.15"); break;
    }
    switch (r) {
    case 0: oMapSimu->setRemiseC("0"); break;
    case 5: oMapSimu->setRemiseC("0.05"); break;
    case 6: oMapSimu->setRemiseC("0.06"); break;
    }
    switch (d) {
    case 0: oMapSimu->setDemarqueI("0"); break;
    case 2: oMapSimu->setDemarqueI("0.02"); break;
    case 3: oMapSimu->setDemarqueI("0.03"); break;
    case 5: oMapSimu->setDemarqueI("0.05"); break;
    }
    NS_Comp_MappageSimu::CLmapSimulation::Simulation^ simTVA = gcnew NS_Comp_MappageSimu::CLmapSimulation::Simulation(this->oMapSimu, &NS_Comp_MappageSimu::CLmapSimulation::modifTVA);
    sql = this->oMapSimu->SimulerVariation(TVA1, simTVA);
    NS_Comp_MappageSimu::CLmapSimulation::Simulation^ simMarge = gcnew NS_Comp_MappageSimu::CLmapSimulation::Simulation(this->oMapSimu, &NS_Comp_MappageSimu::CLmapSimulation::modifmarge);
    sql += this->oMapSimu->SimulerVariation("0", simMarge);
    NS_Comp_MappageSimu::CLmapSimulation::Simulation^ simRemise = gcnew NS_Comp_MappageSimu::CLmapSimulation::Simulation(this->oMapSimu, &NS_Comp_MappageSimu::CLmapSimulation::modifRemise);
    sql += this->oMapSimu->SimulerVariation("0", simRemise);
    NS_Comp_MappageSimu::CLmapSimulation::Simulation^ simDemarque = gcnew NS_Comp_MappageSimu::CLmapSimulation::Simulation(this->oMapSimu, &NS_Comp_MappageSimu::CLmapSimulation::modifDemarque);
    sql += this->oMapSimu->SimulerVariation("0", simDemarque);
    NS_Comp_MappageSimu::CLmapSimulation::Simulation^ simmtt = gcnew NS_Comp_MappageSimu::CLmapSimulation::Simulation(this->oMapSimu, &NS_Comp_MappageSimu::CLmapSimulation::modifTT);
    sql += this->oMapSimu->SimulerVariation("0", simmtt);
    // Retourne le résultat des requêtes concaténées
    return oCad->getRows(sql, dataTableName);
}

