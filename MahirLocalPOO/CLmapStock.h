#pragma once

namespace NS_Comp_MappageStock {
	ref class CLmapStock {
	private:
		System::String^ sSQL;

		System::String^ nom_article;
		System::String^ valeur_stock_art;
		System::String^ taux_tva_art;
		System::String^ prix_ht_art;
		System::String^ seuil_reappro_art;
		System::String^ id_couleur_art;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setNomart(System::String^);
		void setValeurstock(System::String^);
		void setTauxTVA(System::String^);
		void setPrixHT(System::String^);
		void setSeuil_reappro(System::String^);
		void setCouleurart(System::String^);

	};
}