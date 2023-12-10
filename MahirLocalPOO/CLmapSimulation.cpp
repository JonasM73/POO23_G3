#include "CLmapSimulation.h"

System::String^ NS_Comp_MappageSimu::CLmapSimulation::margeCommerciale(void) {
    return "SELECT SUM((prix_HT_article * stock_article)"+
        " * (1 + " + this->margeC + ") * (1 - "+ this->remiseC +")*(1-" + this->demarqueInconnue +
        ")*(1+" + this->TVA + ")) AS Valeur_du_stock " +
        "FROM Article " +
        "WHERE stock_article > 0; ";
}




void NS_Comp_MappageSimu::CLmapSimulation::setMargeC(System::String^ m) { this->margeC = m; }
void NS_Comp_MappageSimu::CLmapSimulation::setRemiseC(System::String^ r) { this->remiseC = r; }
void NS_Comp_MappageSimu::CLmapSimulation::setDemarqueI(System::String^ d) { this->demarqueInconnue = d; }
void NS_Comp_MappageSimu::CLmapSimulation::setTVA1(System::String^ t) { this->TVA = t; }
