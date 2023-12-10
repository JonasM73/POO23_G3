#include "CLmapPersonnel.h"


System::String^ NS_Comp_MappagePersonnel::CLmapPersonnel::Select(void)
{
	return  "SELECT [p].[nom_personnel],[p].[prenom_personnel],[p].[Date_embauche_personnel]" + "FROM [Personnel] p "; /*+ "[a].[AP_adresse] AS AP_adresse_perso, [a].[CP_adresse] AS CP_adresse_perso," + "[vp].[ville] AS ville_perso, [s].[nom_personnel] AS nom_superieur," +
		"[s].[prenom_personnel] AS prenom_supérieur " + "FROM [Personnel] p "; /* + "JOIN [Adresse] a ON [p].[id_adresse] = [a].[id_adresse] " + "JOIN [Ville] vp ON [a].[id_ville] = [vp].[id_ville] " +
		"JOIN [Adresse] adresse_livraison ON [c].[adresse_L] = [adresse_livraison].[id_adresse] " + "LEFT JOIN [personnel] s ON [p].[id_superieur] = [s].[id_personnel] ";*/



	/*SELECT [p].[]
    p.nom_personnel ,
    p.prenom_personnel ,
    p.Date_embauche_personnel,
    a.AP_adresse AS AP_adresse_perso,
    a.CP_adresse AS CP_adresse_perso,
    vp.ville AS ville_perso,
    s.nom_personnel AS nom_supérieur,
    s.prenom_personnel AS prenom_supérieur
FROM     Personnel p
JOIN     Adresse a ON p.id_adresse = a.id_adresse
JOIN     Ville vp ON a.id_ville = vp.id_ville
LEFT JOIN     Personnel s ON p.id_superieur = s.id_personnel;*/

	

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
							

