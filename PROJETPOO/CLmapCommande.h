#pragma once
namespace NS_Comp_MappageCommande
{
	ref class CLmapTBCommande
	{
	private:
		System::String^ sSql;
		int Id_client;
		System::String^ ref_commande;
		System::DateTime^ date_livraison_commande;
		System::DateTime^ date_emission_commande;
		System::DateTime^ date_payement1;
		System::DateTime^ date_payement2;
		System::DateTime^ date_enregistrement_solde1;
		System::DateTime^ date_enregistrement_solde2;
		System::String^ moyen_paiement1;
		System::String^ moyen_paiement2;
		int quantité_article_commande;
		int id_article;

	public:
		System::String^ Select(void);
		System::String^ SelectArticle(void);
		System::String^ Insert1(void);
		System::String^ Insert2(void);
		System::String^ Delete(void);
		System::String^ Update1(void);
		System::String^ Update2(void);
		void setId_client(int);
		void setId_article(int);
		void setquantite_article_commande(int);
		void setRef_commande(System::String^);
		void setdate_livraison_commande(System::DateTime^);
		void setDate_emission_commande(System::DateTime^);
		void setDate_payement1(System::DateTime^);
		void setDate_payement2(System::DateTime^);
		void setDate_enregistrement_solde1(System::DateTime^);
		void setDate_enregistrement_solde2(System::DateTime^);
		void setMoyen_paiement1(System::String^);
		void setMoyen_paiement2(System::String^);


	};
}