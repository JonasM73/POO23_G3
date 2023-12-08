#include "CLmapStats.h"

System::String^ NS_Comp_MappageStats::CLmapStats::PanierMoyen(void) {
	return "WITH TotalCommandes AS " +
		"(SELECT ca.id_commande,SUM(ca.TTC_Commande) AS Total_TTC " +
		"FROM Commande_Article ca GROUP BY ca.id_commande ) " +
		"SELECT AVG(TotalCommandes.Total_TTC) AS Panier_Moyen FROM TotalCommandes; ";
}

System::String^ NS_Comp_MappageStats::CLmapStats::CAMois(void) {
	return "DECLARE @Mois INT =" + this->mois + "; " +
		"SELECT SUM(ca.HT_Commande) AS Chiffre_Affaire from Commande_Article ca INNER JOIN Paiement P ON ca.id_commande = P.id_commande " +
		"WHERE MONTH(P.date_enregistrement_solde) = @Mois;";
}
System::String^ NS_Comp_MappageStats::CLmapStats::Reapprovisionnement(void) {
	return "Select a.nom_article, a.stock_article, a.seuille_reapprovisionnement " +
		"FROM Article a WHERE stock_article < seuille_reapprovisionnement;";
}
System::String^ NS_Comp_MappageStats::CLmapStats::MontantTotalClient(void) {
	return "DECLARE @Num CHAR(50) = '" + this->num_client + "'" +
		"SELECT DISTINCT Cl.nom_client, Cl.prenom_client, Sum(Ca.TTC_commande) AS Total_Achats " +
		"FROM Client Cl JOIN Commande C ON Cl.id_client = C.id_client " +
		"JOIN Commande_Article Ca ON Ca.id_commande = C.id_commande " +
		"WHERE Cl.Numero_client = @Num GROUP BY CL.prenom_client, CL.nom_client; ";
}

System::String^ NS_Comp_MappageStats::CLmapStats::ArticlesPlusVendus(void) {
	return "SELECT TOP 10 A.id_article, A.nom_article, SUM(CA.quantite_article_commande) AS total_quantity_sold " +
		"FROM Article A JOIN Commande_Article CA ON A.id_article = CA.id_article " +
		"GROUP BY A.id_article, A.nom_article ORDER BY total_quantity_sold DESC";

}

System::String^ NS_Comp_MappageStats::CLmapStats::ArticlesMoinsVendus(void) {
	return "SELECT TOP 10 A.id_article, A.nom_article, SUM(CA.quantite_article_commande) AS total_quantity_sold " +
		"FROM Article A JOIN Commande_Article CA ON A.id_article = CA.id_article " +
		"GROUP BY A.id_article, A.nom_article ORDER BY total_quantity_sold ASC; ";
}

System::String^ NS_Comp_MappageStats::CLmapStats::ValeurCommercialeStock(void) {
	return "SELECT SUM(prix_HT_article * (1 + taux_tva_article*prix_HT_article)) AS prix_avec_taxe " +
		"FROM Article " +
		"WHERE stock_article > 0; ";
}
System::String^ NS_Comp_MappageStats::CLmapStats::ValeurAchatStock(void) {
	return "SELECT SUM(prix_HT_article * stock_article) AS prix_achat " +
		"FROM Article " +
		"WHERE stock_article > 0; ";
}
void NS_Comp_MappageStats::CLmapStats::setMois(int m) { this->mois = m; }
void NS_Comp_MappageStats::CLmapStats::setNumClient(System::String^ n) { this->num_client = n; }