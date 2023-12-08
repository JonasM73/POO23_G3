//CLservice.h********************************************************************************
#pragma once
#include "CLcad.h"
#include "CLmapCommande.h"

namespace NS_Comp_SvcCommande
{
	ref class CLservicesCommande
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappageCommande::CLmapTBCommande^ CLmapCommande;
	public:
		CLservicesCommande(void);
		System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
		System::Data::DataSet^ selectionnerToutesLesCommandesArticle(System::String^);
		void AjouterUneCommande1(System::String^ , System::DateTime^, System::DateTime^, int, System::DateTime^, System::String^, System::DateTime^, int, int );
		void AjouterUneCommande2(System::String^, System::DateTime^, System::DateTime^, int, System::DateTime^, System::DateTime^, System::String^, System::String^, System::DateTime^, System::DateTime^, int, int);
		void DeleteUneCommande(System::String^, System::DateTime^, System::DateTime^);
		void UpdateUneCommandeArticle(System::String^,  int, int );
		void UpdateUneCommandelivraison(System::DateTime^, System::String^);

	};
}