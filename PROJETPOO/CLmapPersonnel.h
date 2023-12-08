#pragma once
namespace NS_Comp_MappagePersonnel
{
	ref class CLmapPersonnel
	{
	private:
		System::String^ sSql;
		int Id_personnel;
		System::String^ nom_personnel;
		System::String^ prenom_personnel;
		System::DateTime^ DNN_personnel;
		System::DateTime^ Date_embauche_personnel;
		System::String^  id_superieur;
		int id_adresse;


		int setid_superieur;
		int setid_adresse;

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		
		void setnom_personnel(System::String^);
		void setprenom_personnel(System::String^);
		void setDNN_personnel(System::DateTime^);
		void setDate_embauche_personnel(System::DateTime^);
		//void setid_superieur(System::String^);
		


		
		

	};
}