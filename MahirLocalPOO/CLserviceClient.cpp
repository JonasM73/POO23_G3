#include "CLserviceClient.h"

NS_Comp_SvcClient::CLservicesClient::CLservicesClient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->CLmapService = gcnew NS_Comp_MappageClient::CLmapTBClient();
}

System::Data::DataSet^ NS_Comp_SvcClient::CLservicesClient::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->CLmapService->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_SvcClient::CLservicesClient::AjouterUnePersonne(System::String^ num, System::String^ nom, System::String^ prenom, System::DateTime^ DNN, System::DateTime^ D_Pachat, System::String^ AP_L, System::String^ AP_F, int CP_L, int CP_F, System::String^ ville_l, System::String^ ville_f)
{
	System::String^ sql;
	this->CLmapService->setnumero_client(num);
	this->CLmapService->setnom_client(nom);
	this->CLmapService->setprenom_client(prenom);
	this->CLmapService->setDNN_client(DNN);
	this->CLmapService->setDate_Pchat_client(D_Pachat);
	this->CLmapService->setAP_L_client(AP_L);
	this->CLmapService->setAP_F_client(AP_F);
	this->CLmapService->setCP_L_client(CP_L);
	this->CLmapService->setCP_F_client(CP_F);
	this->CLmapService->setvilleF_client(ville_l);
	this->CLmapService->setvilleL_client(ville_f);

	sql = this->CLmapService->Insert();
	this->oCad->actionRows(sql);


}
void NS_Comp_SvcClient::CLservicesClient::DeleteUnePersonne(System::String^ num, System::String^ nom, System::String^ prenom, System::DateTime^ DNN) {

	System::String^ sql;
	this->CLmapService->setnom_client(nom);
	this->CLmapService->setprenom_client(prenom);
	this->CLmapService->setDNN_client(DNN);
	this->CLmapService->setnumero_client(num);

	sql = this->CLmapService->Delete();
	this->oCad->actionRows(sql);
}
void NS_Comp_SvcClient::CLservicesClient::UpdateUnnePersonne(System::String^ num, System::String^ nom, System::String^ prenom, System::DateTime^ DNN, System::DateTime^ D_Pachat, System::String^ AP_L, System::String^ AP_F, int CP_L, int CP_F, System::String^ ville_l, System::String^ ville_f)
{
	System::String^ sql;
	this->CLmapService->setnumero_client(num);
	this->CLmapService->setnom_client(nom);
	this->CLmapService->setprenom_client(prenom);
	this->CLmapService->setDNN_client(DNN);
	this->CLmapService->setDate_Pchat_client(D_Pachat);
	this->CLmapService->setAP_L_client(AP_L);
	this->CLmapService->setAP_F_client(AP_F);
	this->CLmapService->setCP_L_client(CP_L);
	this->CLmapService->setCP_F_client(CP_F);
	this->CLmapService->setvilleF_client(ville_l);
	this->CLmapService->setvilleL_client(ville_f);

	sql = this->CLmapService->Update();
	this->oCad->actionRows(sql);
}