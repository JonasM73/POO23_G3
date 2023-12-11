#include "CLmapSimulation.h"

using namespace NS_Comp_MappageSimu;

System::String^ CLmapSimulation::modifTVA(System::String^ a)
{
    this->TVA = a;
    return "DECLARE @Valeur_du_stock DECIMAL(15, 2);" +
        "Set @Valeur_du_stock = (SELECT SUM((prix_HT_article * stock_article) * (1 + " + this->TVA + ")) FROM Article WHERE stock_article > 0);" +
        "DECLARE @STOCK DECIMAL(15, 2);" +
        "Set @STOCK = (SELECT SUM(prix_HT_article * stock_article) FROM Article WHERE stock_article > 0);";

}

System::String^ CLmapSimulation::modifmarge(System::String^ a)
{
    return "Declare @valeur_marge DECIMAL(15, 2);" +
        "Set @valeur_marge = (SELECT SUM((prix_HT_article * stock_article) * (1+ " + this->margeC + ")) AS Valeur_du_stock FROM Article WHERE stock_article > 0); ";
}

System::String^ CLmapSimulation::modifRemise(System::String^ a)
{
    return "DECLARE @valeur_remise DECIMAL(15, 2);" +
        "Set @valeur_remise = (SELECT SUM((prix_HT_article * stock_article)*(1 - " + this->remiseC + ")) AS Valeur_du_stock FROM Article WHERE stock_article > 0); ";
}

System::String^ CLmapSimulation::modifDemarque(System::String^ a)
{
    return "DECLARE @valeur_demarque DECIMAL(15, 2);" +
        "Set @valeur_demarque = (SELECT SUM((prix_HT_article * stock_article)*(1 - " + this->demarqueInconnue + ")) AS Valeur_du_stock FROM Article WHERE stock_article > 0); ";
}

System::String^ CLmapSimulation::modifTT(System::String^ a)
{
    return "DECLARE @tt DECIMAL(15, 2);" +
        "Set @tt = (SELECT SUM((prix_HT_article * stock_article)*(1 + " + this->TVA + ")*(1+ " + this->margeC + ")*(1 - " + this->remiseC + ")*(1 - " + this->remiseC + ")*(1 - " + this->demarqueInconnue + ")) AS Valeur_du_stock FROM Article WHERE stock_article > 0); " +
        "SELECT TOP 1 @STOCK as STOCK, @Valeur_du_stock as STOCK_tva,@valeur_marge as STOCK_marge, @valeur_remise as STOCK_remise, @valeur_demarque as STOCK_demarque, @tt as STOCK_toutAppliquer From Article WHERE stock_article > 0";
}
System::String^ CLmapSimulation::SimulerVariation(System::String^ valeur, Simulation^ sim)
{
    return sim(valeur);
}

void CLmapSimulation::setMargeC(System::String^ m) { this->margeC = m; }
void CLmapSimulation::setRemiseC(System::String^ r) { this->remiseC = r; }
void CLmapSimulation::setDemarqueI(System::String^ d) { this->demarqueInconnue = d; }
void CLmapSimulation::setTVA1(System::String^ t) { this->TVA = t; }
