#pragma once

namespace NS_Comp_MappageStock {
	ref class CLmapStock {
	private:
		System::String^ sSQL;
		int ID_art;
		int valeur_stock_art;
		float taux_tva_art;
		float prix_ht_art;
		int seuil_reappro_art;
		System::String^ couleur_art;
	public:
		System::String^ Select(void);
		//System::String^ Insert(void);
		//System::String^ Delete(void);
		//System::String^ Update(void);


	};
}