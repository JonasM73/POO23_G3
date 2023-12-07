#include "CLserviceClient.h"

NS_Comp_SvcClient::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->serviceClient = gcnew NS_Comp_MappageClient::CLmapTB();
}

System::Data::DataSet^ NS_Comp_SvcClient::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->serviceClient->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_SvcClient::CLservices::AjouterUnePersonne(System::String^ num, System::String^ nom, System::String^ prenom, System::DateTime^ DNN, System::DateTime^ D_Pachat, System::String^ AP_L, System::String^ AP_F, int CP_L, int CP_F, System::String^ ville_l, System::String^ ville_f)
{
	System::String^ sql;
	this->serviceClient->setnumero_client(num);
	this->serviceClient->setnom_client(nom);
	this->serviceClient->setprenom_client(prenom);
	this->serviceClient->setDNN_client(DNN);
	this->serviceClient->setDate_Pchat_client(D_Pachat);
	this->serviceClient->setAP_L_client(AP_L);
	this->serviceClient->setAP_F_client(AP_F);
	this->serviceClient->setCP_L_client(CP_L);
	this->serviceClient->setCP_F_client(CP_F);
	this->serviceClient->setvilleF_client(ville_l);
	this->serviceClient->setvilleL_client(ville_f);

	sql = this->serviceClient->Insert();
	this->oCad->actionRows(sql);


}
void NS_Comp_SvcClient::CLservices::DeleteUnePersonne(System::String^ num, System::String^ nom, System::String^ prenom, System::DateTime^ DNN) {

	System::String^ sql;
	this->serviceClient->setnom_client(nom);
	this->serviceClient->setprenom_client(prenom);
	this->serviceClient->setDNN_client(DNN);
	this->serviceClient->setnumero_client(num);

	sql = this->serviceClient->Delete();
	this->oCad->actionRows(sql);
}
void NS_Comp_SvcClient::CLservices::UpdateUnnePersonne(System::String^ num, System::String^ nom, System::String^ prenom, System::DateTime^ DNN, System::DateTime^ D_Pachat, System::String^ AP_L, System::String^ AP_F, int CP_L, int CP_F, System::String^ ville_l, System::String^ ville_f)
{
	System::String^ sql;
	this->serviceClient->setnumero_client(num);
	this->serviceClient->setnom_client(nom);
	this->serviceClient->setprenom_client(prenom);
	this->serviceClient->setDNN_client(DNN);
	this->serviceClient->setDate_Pchat_client(D_Pachat);
	this->serviceClient->setAP_L_client(AP_L);
	this->serviceClient->setAP_F_client(AP_F);
	this->serviceClient->setCP_L_client(CP_L);
	this->serviceClient->setCP_F_client(CP_F);
	this->serviceClient->setvilleF_client(ville_l);
	this->serviceClient->setvilleL_client(ville_f);

	sql = this->serviceClient->Update();
	this->oCad->actionRows(sql);
}