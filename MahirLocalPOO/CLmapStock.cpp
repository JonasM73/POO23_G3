#include "CLmapStock.h"



System::String^ NS_Comp_MappageStock::CLmapStock::Select(void) {
	return"SELECT * FROM Article ;";
}
System::String^ NS_Comp_MappageStock::CLmapStock::Insert(void) {
	return"INSERT INTO Article (nom_article, stock_article, " +
		"taux_tva_article, prix_HT_article, seuille_reapprovisionnement, id_couleur, id_nature, id_catalogue) " +
		"VALUES ('" + this->nom_article + "', " + this->valeur_stock_art + ", " + this->taux_tva_art + ", " +
		this->prix_ht_art + ", " + this->seuil_reappro_art + ", " + this->id_couleur_art + ", 9, 2);";;
}

System::String^ NS_Comp_MappageStock::CLmapStock::Delete(void) {
	return "DELETE FROM Commande_Article WHERE id_article = (SELECT id_article FROM Article WHERE nom_article = '" + this->nom_article + "');" +
		"DELETE FROM Article WHERE nom_article = '" + this->nom_article + "';";

}
System::String^ NS_Comp_MappageStock::CLmapStock::Update() {
	return "UPDATE Article SET stock_article = " + this->valeur_stock_art + ", taux_tva_article = " + this->taux_tva_art + ", seuille_reapprovisionnement = " + this->seuil_reappro_art + " WHERE nom_article = '" + this->nom_article + "';" +
		"UPDATE Commande_Article SET Tva_commande = (SELECT taux_tva_article FROM Article WHERE nom_article = '" + this->nom_article + "') * " +
		"(SELECT prix_ht_article FROM Article WHERE nom_article = '" + this->nom_article + "') * (SELECT quantite_article_commande FROM Commande_Article " +
		"WHERE id_article = (SELECT id_article FROM Article WHERE nom_article = '" + this->nom_article + "')), " +
		"TTC_commande = ((SELECT prix_HT_article FROM Article WHERE nom_article = '" + this->nom_article + "') + " +
		"(SELECT taux_tva_article FROM Article WHERE nom_article = '" + this->nom_article + "') * " +
		"(SELECT prix_ht_article FROM Article WHERE nom_article = '" + this->nom_article + "')) * " +
		"(SELECT quantite_article_commande FROM Commande_Article " +
		"WHERE id_article = (SELECT id_article FROM Article WHERE nom_article = '" + this->nom_article + "')), " +
		"HT_commande = (SELECT prix_HT_article FROM Article WHERE nom_article = '" + this->nom_article + "') * " +
		"(SELECT quantite_article_commande FROM Commande_Article " +
		"WHERE id_article = (SELECT id_article FROM Article WHERE nom_article = '" + this->nom_article + "')) " +
		"WHERE id_article = (SELECT id_article FROM Article WHERE nom_article = '" + this->nom_article + "');";
}

void NS_Comp_MappageStock::CLmapStock::setNomart(System::String^ n) { this->nom_article = n; }
void NS_Comp_MappageStock::CLmapStock::setValeurstock(System::String^ v) { this->valeur_stock_art = v; }
void NS_Comp_MappageStock::CLmapStock::setTauxTVA(System::String^ t) { this->taux_tva_art = t; }
void NS_Comp_MappageStock::CLmapStock::setPrixHT(System::String^ p) { this->prix_ht_art = p; }
void NS_Comp_MappageStock::CLmapStock::setSeuil_reappro(System::String^ s) { this->seuil_reappro_art = s; }
void NS_Comp_MappageStock::CLmapStock::setCouleurart(System::String^ c) {
	if (c = "Noir") { this->id_couleur_art = "1"; }
	if (c = "Blanc") { this->id_couleur_art = "2"; }
	if (c = "Gris") { this->id_couleur_art = "3"; }
	if (c = "Bleu") { this->id_couleur_art = "4"; }
	if (c = "Rouge") { this->id_couleur_art = "5"; }
	if (c = "Vert") { this->id_couleur_art = "6"; }
	if (c = "Jaune") { this->id_couleur_art = "7"; }
	if (c = "Rose") { this->id_couleur_art = "8"; }
	if (c = "Violet") { this->id_couleur_art = "9"; }
	if (c = "Orange") { this->id_couleur_art = "10"; }
	if (c = "Marron") { this->id_couleur_art = "11"; }
	if (c = "Beige") { this->id_couleur_art = "12"; }
	if (c = "Turquoise") { this->id_couleur_art = "13"; }
	if (c = "Argent") { this->id_couleur_art = "14"; }
	if (c = "Or") { this->id_couleur_art = "15"; }
	if (c = "Bronze") { this->id_couleur_art = "16"; }
	if (c = "Cuivre") { this->id_couleur_art = "17"; }
	if (c = "Transparent") { this->id_couleur_art = "18"; }
	if (c = "Multicolore") { this->id_couleur_art = "19"; }
	if (c = "Camouflage") { this->id_couleur_art = "20"; }
}