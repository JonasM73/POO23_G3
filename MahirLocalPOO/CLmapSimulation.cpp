#include "CLmapSimulation.h"

System::String^ NS_Comp_MappageSimu::CLmapSimulation::margeCommerciale(void) {
    return "SELECT SUM((prix_HT_article * stock_article) * " + this->margeC + ") AS Valeur_du_stock " +
        "FROM Article " +
        "WHERE stock_article > 0; ";
}




void NS_Comp_MappageSimu::CLmapSimulation::setMargeC(System::String^ m) { this->margeC = m; }
