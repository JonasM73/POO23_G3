#include "CLmapPersonnel.h"


System::String^ NS_Comp_MappagePersonnel::CLmapPersonnel::Select(void)
{
	return "SELECT " +
		"[p].[nom_personnel] as 'nom', " +
		"[p].[prenom_personnel] as 'pr�nom', " +
		"[p].[Date_embauche_personnel] as 'date embauche', " +
		"[a].[AP_adresse] AS 'adresse ', " +
		"[a].[CP_adresse] AS 'code postal', " +
		"[vp].[ville] AS 'ville', " +
		"[s].[nom_personnel] AS 'nom sup�rieur', " +
		"[s].[prenom_personnel] AS 'prenom du sup�rieur' " +
		"FROM [Personnel] p " +
		"JOIN [Adresse] a ON [p].[id_adresse] = [a].[id_adresse] " +
		"JOIN [Ville] vp ON [a].[id_ville] = [vp].[id_ville] " +
		"LEFT JOIN [Personnel] s ON [p].[id_superieur] = [s].[id_personnel]";

	

}
System::String^ NS_Comp_MappagePersonnel::CLmapPersonnel::Insert(void) {

	return"";



		
}
System::String^ NS_Comp_MappagePersonnel::CLmapPersonnel::Update(void) {


	return "";
}
System::String^ NS_Comp_MappagePersonnel::CLmapPersonnel::Delete(void) {
	return "";
}




void NS_Comp_MappagePersonnel::CLmapPersonnel::setnom_personnel(System::String^ a)					{ this->nom_personnel = a; }
void NS_Comp_MappagePersonnel::CLmapPersonnel::setprenom_personnel(System::String^ a)				{ this->prenom_personnel = a; }
void NS_Comp_MappagePersonnel::CLmapPersonnel::setDate_embauche_personnel(System::DateTime^ a)		{ this->Date_embauche_personnel = a; }
void NS_Comp_MappagePersonnel::CLmapPersonnel::setDN_Personnel(System::DateTime^ a)					{ this->DN_personnel = a; }
void NS_Comp_MappagePersonnel::CLmapPersonnel::setAP_adresse(System::String^ a)						{ this->AP_adresse = a; }
void NS_Comp_MappagePersonnel::CLmapPersonnel::setCP_adresse(int a)									{ this->CP_adresse = a; }
void NS_Comp_MappagePersonnel::CLmapPersonnel::setVille(System::String^ a)						    { this->ville = a; }
void NS_Comp_MappagePersonnel::CLmapPersonnel::setid_superieur(int a)								{ this->id_superieur = a; }
							

