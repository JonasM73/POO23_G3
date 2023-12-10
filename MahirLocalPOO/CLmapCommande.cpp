#include "CLmapCommande.h"


System::String^ NS_Comp_MappageCommande::CLmapTBCommande::Select(void)
{
    return "SELECT " +
        "c.ref_commande, c.date_livraison_commande as Date_livraison, c.date_emission_commande as Date_emission, SUM(ca.quantite_article_commande) as quantite_darticle, " +
        "cl.nom_client, cl.prenom_client, p.date_payement, p.montant, p.moyen_payement, p.date_enregistrement_solde " +
        "FROM Commande c " +
        "JOIN Client cl ON c.id_client = cl.id_client " +
        "JOIN Commande_Article ca ON c.id_commande = ca.id_commande " +
        "JOIN Article A ON A.id_article = ca.id_article " +
        "JOIN paiement p on c.id_commande = p.id_commande " +
        "GROUP BY c.ref_commande, c.date_livraison_commande, c.date_emission_commande, cl.nom_client, cl.prenom_client, p.date_payement, p.montant, p.moyen_payement, " +
        "p.date_enregistrement_solde;";

}
System::String^ NS_Comp_MappageCommande::CLmapTBCommande::SelectArticle(void) {

    return "SELECT Commande.ref_commande, Client.nom_client, Client.prenom_client, Article.id_article, nom_article, quantite_article_commande " +
        "FROM    Commande " +
        "JOIN    Client ON Commande.id_client = Client.id_client " +
        "JOIN    Commande_Article ON Commande.id_commande = Commande_Article.id_commande " +
        "JOIN    Article ON Article.id_article = Commande_Article.id_article";

}

System::String^ NS_Comp_MappageCommande::CLmapTBCommande::Insert1(void) {

    return "INSERT INTO Commande (ref_commande, date_livraison_commande, date_emission_commande, id_client) " +
        "VALUES ('" + this->ref_commande + "', '" + this->date_livraison_commande + "', '" + this->date_emission_commande + "', '" + this->Id_client + "');" +
        "INSERT INTO Commande_Article (id_commande, id_article, quantite_article_commande, Tva_commande, TTC_commande, HT_commande) " +
        "VALUES " +
        "((SELECT id_commande FROM Commande WHERE ref_commande = '" + this->ref_commande + "'), '" + this->id_article + "', '" + this->quantite_article_commande + "', " +
        "(SELECT taux_tva_article * prix_HT_article FROM Article WHERE id_article = '" + this->id_article + "'), " +
        "(SELECT (prix_HT_article + (taux_tva_article * prix_HT_article)) * " + this->quantite_article_commande + " FROM Article WHERE id_article = '" + this->id_article + "'), " +
        "(SELECT prix_HT_article * " + this->quantite_article_commande + " FROM Article WHERE id_article = '" + this->id_article + "'));" +
        "INSERT INTO Paiement (date_payement, montant, moyen_payement, date_enregistrement_solde, id_commande) " +
        "VALUES " +
        "('" + this->date_payement1 + "', (SELECT SUM(HT_commande) FROM Commande_Article WHERE id_commande = (SELECT id_commande FROM Commande WHERE ref_commande = '" + this->ref_commande + "')), " +
        "'" + this->moyen_paiement1 + "', '" + this->date_enregistrement_solde1 + "', " +
        "(SELECT id_commande FROM Commande WHERE ref_commande = '" + this->ref_commande + "'))" +
        "UPDATE Article SET stock_article = stock_article - " + this->quantite_article_commande + " WHERE id_article = '" + this->id_article + "'";
}



System::String^ NS_Comp_MappageCommande::CLmapTBCommande::Insert2(void) {
    return "INSERT INTO Commande (ref_commande, date_livraison_commande, date_emission_commande, id_client) " +
        "VALUES ('" + this->ref_commande + "', '" + this->date_livraison_commande + "', '" + this->date_emission_commande + "', '" + this->Id_client + "');" +
        "INSERT INTO Commande_Article (id_commande, id_article, quantite_article_commande, Tva_commande, TTC_commande, HT_commande) " +
        "VALUES " +
        "((SELECT id_commande FROM Commande WHERE ref_commande = '" + this->ref_commande + "'), '" + this->id_article + "', '" + this->quantite_article_commande + "', " +
        "(SELECT taux_tva_article * prix_HT_article FROM Article WHERE id_article = '" + this->id_article + "'), " +
        "(SELECT (prix_HT_article + (taux_tva_article * prix_HT_article)) * " + this->quantite_article_commande + " FROM Article WHERE id_article = '" + this->id_article + "'), " +
        "(SELECT prix_HT_article * " + this->quantite_article_commande + " FROM Article WHERE id_article = '" + this->id_article + "'));" +
        "INSERT INTO Paiement (date_payement, montant, moyen_payement, date_enregistrement_solde, id_commande) " +
        "VALUES " +
        "('" + this->date_payement1 + "', (SELECT SUM(HT_commande) FROM Commande_Article WHERE id_commande = (SELECT id_commande FROM Commande WHERE ref_commande = '" + this->ref_commande + "')), " +
        "'" + this->moyen_paiement1 + "', '" + this->date_enregistrement_solde1 + "', " +
        "(SELECT id_commande FROM Commande WHERE ref_commande = '" + this->ref_commande + "'))," +
        "('" + this->date_payement2 + "', (SELECT SUM(HT_commande) FROM Commande_Article WHERE id_commande = (SELECT id_commande FROM Commande WHERE ref_commande = '" + this->ref_commande + "')), " +
        "'" + this->moyen_paiement2 + "', '" + this->date_enregistrement_solde2 + "', " +
        "(SELECT id_commande FROM Commande WHERE ref_commande = '" + this->ref_commande + "'));" +
        "UPDATE Article SET stock_article = stock_article - " + this->quantite_article_commande + " WHERE id_article = '" + this->id_article + "'";

}



System::String^ NS_Comp_MappageCommande::CLmapTBCommande::Update1(void) {
    return "DECLARE @ref_commande VARCHAR(100) " +
        "SET @ref_commande = '" + this->ref_commande + "'; " +
        "DECLARE @id_article_a_modifier int " +
        "SET @id_article_a_modifier = " + this->id_article + "; " +
        "DECLARE @nouvelle_quantite int " +
        "SET @nouvelle_quantite = " + this->quantite_article_commande + "; " +
        "MERGE INTO Commande_Article AS target " +
        "USING (SELECT id_commande FROM Commande WHERE ref_commande = @ref_commande) AS source " +
        "ON target.id_commande = source.id_commande AND target.id_article = @id_article_a_modifier " +
        "WHEN MATCHED THEN " +
        "UPDATE SET quantite_article_commande = @nouvelle_quantite, " +
        "Tva_commande = (SELECT taux_tva_article * prix_HT_article * @nouvelle_quantite FROM Article WHERE id_article = @id_article_a_modifier), " +
        "TTC_commande = (SELECT (prix_HT_article + (taux_tva_article * prix_HT_article)) * @nouvelle_quantite FROM Article WHERE id_article = @id_article_a_modifier), " +
        "HT_commande = (SELECT prix_HT_article * @nouvelle_quantite FROM Article WHERE id_article = @id_article_a_modifier) " +
        "WHEN NOT MATCHED THEN " +
        "INSERT (id_commande, id_article, quantite_article_commande, Tva_commande, TTC_commande, HT_commande) " +
        "VALUES ((SELECT id_commande FROM Commande WHERE ref_commande = @ref_commande), " +
        "@id_article_a_modifier, " +
        "@nouvelle_quantite, " +
        "(SELECT taux_tva_article * prix_HT_article * @nouvelle_quantite FROM Article WHERE id_article = @id_article_a_modifier), " +
        "(SELECT (prix_HT_article + (taux_tva_article * prix_HT_article)) * @nouvelle_quantite FROM Article WHERE id_article = @id_article_a_modifier), " +
        "(SELECT prix_HT_article * @nouvelle_quantite FROM Article WHERE id_article = @id_article_a_modifier));" +
        "UPDATE Article SET stock_article = stock_article - " + this->quantite_article_commande + " WHERE id_article = '" + this->id_article + "'";

}


System::String^ NS_Comp_MappageCommande::CLmapTBCommande::Update2(void) {

    return "UPDATE Commande SET date_livraison_commande = '" + this->date_livraison_commande + "' WHERE ref_commande = '" + this->ref_commande + "'";
}


System::String^ NS_Comp_MappageCommande::CLmapTBCommande::Delete(void) {

    return "DECLARE @ref_commande VARCHAR(100);" +
        "SET @ref_commande = 'CMD001';" +
        " MERGE INTO Article AS target" +
        " USING(" +
        "SELECT" +
        " ca.id_article," +
        " ca.quantite_article_commande" +
        " FROM" +
        " Commande_Article ca" +
        " JOIN Commande c ON ca.id_commande = c.id_commande" +
        " WHERE" +
        " c.ref_commande = @ref_commande" +
        " ) AS source" +
        " ON target.id_article = source.id_article" +
        " WHEN MATCHED THEN" +
        " UPDATE SET target.stock_article = target.stock_article + source.quantite_article_commande;" +
        " DELETE FROM Paiement WHERE id_commande = (SELECT id_commande FROM Commande WHERE ref_commande = @ref_commande);" +
        " DELETE FROM Commande_Article" +
        " WHERE id_commande = (SELECT id_commande FROM Commande WHERE ref_commande = @ref_commande);" +
        " DELETE FROM Commande" +
        " WHERE ref_commande = @ref_commande";
}



void NS_Comp_MappageCommande::CLmapTBCommande::setId_client(int a) { this->Id_client = a; }
void NS_Comp_MappageCommande::CLmapTBCommande::setId_article(int a) { this->id_article = a; }
void NS_Comp_MappageCommande::CLmapTBCommande::setquantite_article_commande(int a) { this->quantite_article_commande = a; }
void NS_Comp_MappageCommande::CLmapTBCommande::setRef_commande(System::String^ a) { this->ref_commande = a; }
void NS_Comp_MappageCommande::CLmapTBCommande::setdate_livraison_commande(System::DateTime^ a) { this->date_livraison_commande = a; }
void NS_Comp_MappageCommande::CLmapTBCommande::setDate_emission_commande(System::DateTime^ a) { this->date_emission_commande = a; }
void NS_Comp_MappageCommande::CLmapTBCommande::setDate_payement1(System::DateTime^ a) { this->date_payement1 = a; }
void NS_Comp_MappageCommande::CLmapTBCommande::setDate_payement2(System::DateTime^ a) { this->date_payement2 = a; }
void NS_Comp_MappageCommande::CLmapTBCommande::setDate_enregistrement_solde1(System::DateTime^ a) { this->date_enregistrement_solde1 = a; }
void NS_Comp_MappageCommande::CLmapTBCommande::setDate_enregistrement_solde2(System::DateTime^ a) { this->date_enregistrement_solde2 = a; }
void NS_Comp_MappageCommande::CLmapTBCommande::setMoyen_paiement1(System::String^ a) { this->moyen_paiement1 = a; }
void NS_Comp_MappageCommande::CLmapTBCommande::setMoyen_paiement2(System::String^ a) { this->moyen_paiement2 = a; }