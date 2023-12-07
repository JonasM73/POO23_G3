#include "CLserviceCommande.h"

NS_Comp_SvcCommande::CLservicesCommande::CLservicesCommande(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->CLmapCommande = gcnew NS_Comp_MappageCommande::CLmapTBCommande();
}

System::Data::DataSet^ NS_Comp_SvcCommande::CLservicesCommande::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->CLmapCommande->Select();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_SvcCommande::CLservicesCommande::selectionnerToutesLesCommandesArticle(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->CLmapCommande->SelectArticle();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_SvcCommande::CLservicesCommande::AjouterUneCommande1( System::String^ ref, System::DateTime^ D_E, System::DateTime^ D_L, int id_client, System::DateTime^ date_payement1, System::String^ M_paiement1, System::DateTime^ D_E_S1, int id_article, int quantite_article)
{
	System::String^ sql;
	this->CLmapCommande->setRef_commande(ref);
	this->CLmapCommande->setDate_emission_commande(D_E);
	this->CLmapCommande->setdate_livraison_commande(D_L);
	this->CLmapCommande->setId_client(id_client);
	this->CLmapCommande->setDate_payement1(date_payement1);
	this->CLmapCommande->setMoyen_paiement1(M_paiement1);
	this->CLmapCommande->setDate_enregistrement_solde1(D_E_S1);
	this->CLmapCommande->setId_article(id_article);
	this->CLmapCommande->setquantite_article_commande(quantite_article);

	sql = this->CLmapCommande->Insert1();
	this->oCad->actionRows(sql);
}
void NS_Comp_SvcCommande::CLservicesCommande::AjouterUneCommande2(System::String^ ref, System::DateTime^ D_E, System::DateTime^ D_L, int id_client, System::DateTime^ date_payement1, System::DateTime^ date_payement2, System::String^ M_paiement1, System::String^ M_paiement2, System::DateTime^ D_E_S1, System::DateTime^ D_E_S2, int id_article, int quantite_article)
{
	System::String^ sql;
	this->CLmapCommande->setRef_commande(ref);
	this->CLmapCommande->setDate_emission_commande(D_E);
	this->CLmapCommande->setdate_livraison_commande(D_L);
	this->CLmapCommande->setId_client(id_client);
	this->CLmapCommande->setDate_payement1(date_payement1);
	this->CLmapCommande->setDate_payement2(date_payement2);
	this->CLmapCommande->setMoyen_paiement1(M_paiement1);
	this->CLmapCommande->setMoyen_paiement2(M_paiement2);
	this->CLmapCommande->setDate_enregistrement_solde1(D_E_S1);
	this->CLmapCommande->setDate_enregistrement_solde1(D_E_S2);
	this->CLmapCommande->setId_article(id_article);
	this->CLmapCommande->setquantite_article_commande(quantite_article);

	sql = this->CLmapCommande->Insert2();
	this->oCad->actionRows(sql);
}
void NS_Comp_SvcCommande::CLservicesCommande::DeleteUneCommande(System::String^ ref, System::DateTime^ D_E, System::DateTime^ D_L) {
	
	System::String^ sql;
	this->CLmapCommande->setRef_commande(ref);
	this->CLmapCommande->setDate_emission_commande(D_E);
	this->CLmapCommande->setdate_livraison_commande(D_L);

	sql = this->CLmapCommande->Delete();
	this->oCad->actionRows(sql);
}
void NS_Comp_SvcCommande::CLservicesCommande::UpdateUneCommandeArticle(System::String^ ref, int id_article, int qtt_article){
	
	System::String^ sql;
	this->CLmapCommande->setRef_commande(ref);
	this->CLmapCommande->setId_article(id_article);
	this->CLmapCommande->setquantite_article_commande(qtt_article);
	sql = this->CLmapCommande->Update1();
	this->oCad->actionRows(sql);
}

void NS_Comp_SvcCommande::CLservicesCommande::UpdateUneCommandelivraison(System::DateTime^ D_L, System::String^ ref) {
	System::String^ sql;
	this->CLmapCommande->setdate_livraison_commande(D_L);
	this->CLmapCommande->setRef_commande(ref);
	sql = this->CLmapCommande->Update2();
	this->oCad->actionRows(sql);
}