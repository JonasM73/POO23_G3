//CLservicešPersonnel.h********************************************************************************
#pragma once
#include "CLcad.h"
#include "CLmapPersonnel.h"

namespace NS_Comp_SvcPersonnel
{
	ref class CLservicesPersonnel
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappagePersonnel::CLmapPersonnel^ servicePersonnel;
	public:
		CLservicesPersonnel(void);
		System::Data::DataSet^ selectionnerTousLesPersonnels(System::String^);
		void AjouterUnPersonnel(System::String^ nom, System::String^ prenom, System::DateTime^ DN_Personnel, System::DateTime^ date_embauche_personnel, System::String^ AP_adresse, int CP_adresse, System::String^ ville, int id_superieur);
		void DeleteUnPersonnel(System::String^ nom, System::String^ prenom, System::DateTime^ date_embauche_personnel);
		void UpdateUnPersonnel(System::String^ nom, System::String^ prenom, System::DateTime^ DN_Personnel, System::DateTime^ date_embauche_personnel, System::String^ AP_adresse, int CP_adresse, System::String^ ville, int id_superieur);

	};
}
