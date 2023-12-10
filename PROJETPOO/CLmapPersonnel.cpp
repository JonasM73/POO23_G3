#include "CLmapPersonnel.h"


System::String^ NS_Comp_MappagePersonnel::CLmapPersonnel::Select(void)
{
	return "SELECT " +
		"[p].[nom_personnel] as 'nom', " +
		"[p].[prenom_personnel] as 'prénom', " +
		"[p].[Date_embauche_personnel] as 'date embauche', " +
		"[a].[AP_adresse] AS 'adresse ', " +
		"[a].[CP_adresse] AS 'code postal', " +
		"[vp].[ville] AS 'ville', " +
		"[s].[nom_personnel] AS 'nom supérieur', " +
		"[s].[prenom_personnel] AS 'prenom du supérieur' " +
		"FROM [Personnel] p " +
		"JOIN [Adresse] a ON [p].[id_adresse] = [a].[id_adresse] " +
		"JOIN [Ville] vp ON [a].[id_ville] = [vp].[id_ville] " +
		"LEFT JOIN [Personnel] s ON [p].[id_superieur] = [s].[id_personnel]";

	

}
System::String^ NS_Comp_MappagePersonnel::CLmapPersonnel::Insert(void) {

	System::String^ toto = "DECLARE @IDVillePersonnel INT " +
		"SELECT TOP 1 @IDVillePersonnel = id_ville FROM [Ville] WHERE ville = @IDVillePersonnel;" +
		"INSERT INTO [Adresse](AP_adresse, CP_adresse, id_ville) VALUES ('" + this->AP_adresse + "', '" + this->CP_adresse + "', @IDVillePersonnel);" +
		"DECLARE @id_nouvelle_adresse INT SET @id_nouvelle_adresse = SCOPE_IDENTITY();" +
		"INSERT INTO [Personnel](nom_personnel, prenom_personnel, DNN_personnel, Date_embauche_personnel, id_superieur, id_adresse) " +
		"VALUES ('" + this->nom_personnel + "', '" + this->prenom_personnel + "', '" + this->DN_personnel + "', '" + this->Date_embauche_personnel + "', '" + this->id_superieur + "', @id_nouvelle_adresse);";


	System::Windows::Forms::MessageBox::Show(toto, "Erreur");

	return 
		"DECLARE @IDVillePersonnel INT " +
		"SELECT TOP 1 @IDVillePersonnel = id_ville FROM [Ville] WHERE ville = '" + this->ville + "';" +
		"INSERT INTO [Adresse](AP_adresse, CP_adresse, id_ville) VALUES ('" + this->AP_adresse + "', '" + this->CP_adresse + "', @IDVillePersonnel);" +
		"DECLARE @id_nouvelle_adresse INT SET @id_nouvelle_adresse = SCOPE_IDENTITY();" +
		"INSERT INTO [Personnel](nom_personnel, prenom_personnel, DNN_personnel, Date_embauche_personnel, id_superieur, id_adresse) " +
		"VALUES ('" + this->nom_personnel + "', '" + this->prenom_personnel + "', '" + this->DN_personnel + "', '" + this->Date_embauche_personnel + "', '" + this->id_superieur + "', @id_nouvelle_adresse);";
	
		
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
							

