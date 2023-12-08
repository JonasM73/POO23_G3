#pragma once
namespace NS_Comp_MappageStats {
	ref class CLmapStats
	{
	private:
		System::String^ sSQL;
		int mois;
		int annee;
		System::String^ num_client;
	public:
		System::String^ PanierMoyen(void);
		System::String^ CAMois(void);
		System::String^ Reapprovisionnement(void);
		System::String^ MontantTotalClient(void);
		System::String^ ArticlesPlusVendus(void);
		System::String^ ArticlesMoinsVendus(void);
		System::String^ ValeurCommercialeStock(void);
		System::String^ ValeurAchatStock(void);


		void setMois(int);
		void setNumClient(System::String^);

	};

}//