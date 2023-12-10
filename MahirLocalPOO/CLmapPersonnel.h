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
		System::DateTime^ DN_personnel;
		System::DateTime^ Date_embauche_personnel;
		System::String^ AP_adresse;
		int  CP_adresse;
		System::String^ ville;
		int id_superieur;


	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setnom_personnel(System::String^);
		void setprenom_personnel(System::String^);
		void setDN_Personnel(System::DateTime^);
		void setDate_embauche_personnel(System::DateTime^);
		void setAP_adresse(System::String^);
		void setCP_adresse(int);
		void setVille(System::String^);
		void setid_superieur(int);

	};
}