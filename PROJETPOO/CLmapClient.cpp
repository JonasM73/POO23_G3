#include "CLmapClient.h"

System::String^ NS_Comp_MappageClient::CLmapTB::Select(void)
{
	return "SELECT [c].[Numéro_Client],[c].[nom_client],[c].[prenom_client],[c].[DNN_CLient], [c].[Date_Pachat_Client]," +
		"[adresse_facturation].[AP_adresse] AS AP_facturation, [adresse_facturation].[CP_adresse] AS CP_facturation," +
		"[ville_facturation].[ville] AS ville_facturation, [adresse_livraison].[AP_adresse] AS AP_livraison," +
		"[adresse_livraison].[CP_adresse] AS CP_livraison, [ville_livraison].[ville] AS ville_livraison " +
		"FROM [Client] c " +
		"JOIN [Adresse] adresse_facturation ON [c].[adresse_F] = [adresse_facturation].[id_adresse] " +
		"JOIN [Ville] ville_facturation ON [adresse_facturation].[id_ville] = [ville_facturation].[id_ville] " +
		"JOIN [Adresse] adresse_livraison ON [c].[adresse_L] = [adresse_livraison].[id_adresse] " +
		"JOIN [Ville] ville_livraison ON [adresse_livraison].[id_ville] = [ville_livraison].[id_ville]";

}
System::String^ NS_Comp_MappageClient::CLmapTB::Insert(void){
		
	return "DECLARE @NomVilleF NVARCHAR(100) " +
		"SET @NomVilleF = '" + this->villeF_client + "' " +
		"DECLARE @IDVilleF INT " +
		"SELECT TOP 1 @IDVilleF = id_ville FROM Ville WHERE ville = @NomVilleF " +
		"DECLARE @NomVilleL NVARCHAR(100) " +
		"SET @NomVilleL = '" + this->villeL_client + "' " +
		"DECLARE @IDVilleL INT " +
		"SELECT TOP 1 @IDVilleL = id_ville FROM Ville WHERE ville = @NomVilleL " +
		"INSERT INTO [Projet_POO].[dbo].[Adresse] (AP_adresse, CP_adresse, id_ville) VALUES ('" + this->AP_F_client + "', " + this->CP_F_client + ", @IDVilleF),('" + this->AP_L_client + "', " + this->CP_L_client + ", @IDVilleL); " +
		"INSERT INTO [Projet_POO].[dbo].[Client] (Numéro_Client, nom_client, prenom_client, DNN_client, Date_Pachat_client, adresse_F, adresse_L) VALUES ('" + this->numero_client + "', '" + this->nom_client + "', '" + this->prenom_client + "', '" + this->DNN_client + "', '" + this->Date_Pchat_client + "', " +
		"(SELECT TOP 1 id_adresse FROM [Adresse] WHERE CP_adresse = " + this->CP_F_client + " AND AP_adresse = '" + this->AP_F_client + "'), " +
		"(SELECT TOP 1 id_adresse FROM [Adresse] WHERE CP_adresse = " + this->CP_L_client + " AND AP_adresse = '" + this->AP_L_client + "'))";
}

System::String^ NS_Comp_MappageClient::CLmapTB::Update(void) {
	return "SELECT [c].[Numéro_Client],[c].[nom_client],[c].[prenom_client],[c].[DNN_CLient], [c].[Date_Pachat_Client]," +
		"[adresse_facturation].[AP_adresse] AS AP_facturation, [adresse_facturation].[CP_adresse] AS CP_facturation," +
		"[ville_facturation].[ville] AS ville_facturation, [adresse_livraison].[AP_adresse] AS AP_livraison," +
		"[adresse_livraison].[CP_adresse] AS CP_livraison, [ville_livraison].[ville] AS ville_livraison " +
		"FROM [Client] c " +
		"JOIN [Adresse] adresse_facturation ON [c].[adresse_F] = [adresse_facturation].[id_adresse] " +
		"JOIN [Ville] ville_facturation ON [adresse_facturation].[id_ville] = [ville_facturation].[id_ville] " +
		"JOIN [Adresse] adresse_livraison ON [c].[adresse_L] = [adresse_livraison].[id_adresse] " +
		"JOIN [Ville] ville_livraison ON [adresse_livraison].[id_ville] = [ville_livraison].[id_ville]";
}
System::String^ NS_Comp_MappageClient::CLmapTB::Delete(void) {
	return "SELECT [c].[Numéro_Client],[c].[nom_client],[c].[prenom_client],[c].[DNN_CLient], [c].[Date_Pachat_Client]," +
		"[adresse_facturation].[AP_adresse] AS AP_facturation, [adresse_facturation].[CP_adresse] AS CP_facturation," +
		"[ville_facturation].[ville] AS ville_facturation, [adresse_livraison].[AP_adresse] AS AP_livraison," +
		"[adresse_livraison].[CP_adresse] AS CP_livraison, [ville_livraison].[ville] AS ville_livraison " +
		"FROM [Client] c " +
		"JOIN [Adresse] adresse_facturation ON [c].[adresse_F] = [adresse_facturation].[id_adresse] " +
		"JOIN [Ville] ville_facturation ON [adresse_facturation].[id_ville] = [ville_facturation].[id_ville] " +
		"JOIN [Adresse] adresse_livraison ON [c].[adresse_L] = [adresse_livraison].[id_adresse] " +
		"JOIN [Ville] ville_livraison ON [adresse_livraison].[id_ville] = [ville_livraison].[id_ville]";
}


void NS_Comp_MappageClient::CLmapTB::setId_client(int a){							this->Id_client = a;}
void NS_Comp_MappageClient::CLmapTB::setnumero_client(System::String^ a){			this->numero_client = a;}
void NS_Comp_MappageClient::CLmapTB::setnom_client(System::String^ a){				this->nom_client = a;}
void NS_Comp_MappageClient::CLmapTB::setprenom_client(System::String^ a){			this->prenom_client = a;}
void NS_Comp_MappageClient::CLmapTB::setDNN_client(System::DateTime^ a){			this->DNN_client = a;}
void NS_Comp_MappageClient::CLmapTB::setDate_Pchat_client(System::DateTime^ a){		this->Date_Pchat_client = a;}
void NS_Comp_MappageClient::CLmapTB::setvilleL_client(System::String^a){			this->villeL_client = a;}
void NS_Comp_MappageClient::CLmapTB::setvilleF_client(System::String^a){			this->villeF_client = a;}
void NS_Comp_MappageClient::CLmapTB::setAP_L_client(System::String^a){				this->AP_L_client = a;}
void NS_Comp_MappageClient::CLmapTB::setAP_F_client(System::String^a){				this->AP_F_client = a;}
void NS_Comp_MappageClient::CLmapTB::setCP_L_client(int a){							this->CP_L_client = a;}
void NS_Comp_MappageClient::CLmapTB::setCP_F_client(int a){							this->CP_F_client = a;}
