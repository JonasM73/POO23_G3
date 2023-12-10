#pragma once
#include "CLservicePersonnel.h"

NS_Comp_SvcPersonnel::CLservicesPersonnel::CLservicesPersonnel(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->servicePersonnel = gcnew NS_Comp_MappagePersonnel::CLmapPersonnel();
}

System::Data::DataSet^ NS_Comp_SvcPersonnel::CLservicesPersonnel::selectionnerTousLesPersonnels(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->servicePersonnel->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_SvcPersonnel::CLservicesPersonnel::AjouterUnPersonnel(System::String^ nom, System::String^ prenom, System::DateTime^ DN_personnel, System::DateTime^ date_embauche_personnel, System::String^ AP_adresse, int CP_adresse, System::String^ ville, int id_superieur)
{
	System::String^ sql = "";
	this->servicePersonnel->setnom_personnel(nom);
	this->servicePersonnel->setprenom_personnel(prenom);
	this->servicePersonnel->setDN_Personnel(DN_personnel);
	this->servicePersonnel->setDate_embauche_personnel(date_embauche_personnel);
	this->servicePersonnel->setAP_adresse(AP_adresse);
	this->servicePersonnel->setCP_adresse(CP_adresse);
	this->servicePersonnel->setVille(ville);
	this->servicePersonnel->setid_superieur(id_superieur);



	sql = this->servicePersonnel->Insert();
	this->oCad->actionRows(sql);


}

void NS_Comp_SvcPersonnel::CLservicesPersonnel::DeleteUnPersonnel(System::String^ nom, System::String^ prenom, System::DateTime^ date_embauche_personnel) {

	System::String^ sql = "";
	this->servicePersonnel->setnom_personnel(nom);
	this->servicePersonnel->setprenom_personnel(prenom);
	this->servicePersonnel->setDate_embauche_personnel(date_embauche_personnel);



	sql = this->servicePersonnel->Delete();
	this->oCad->actionRows(sql);
}
void NS_Comp_SvcPersonnel::CLservicesPersonnel::UpdateUnPersonnel(System::String^ nom, System::String^ prenom, System::DateTime^ DN_personnel, System::DateTime^ date_embauche_personnel, System::String^ AP_adresse, int CP_adresse, System::String^ ville, int id_superieur)
{
	System::String^ sql = "";
	this->servicePersonnel->setnom_personnel(nom);
	this->servicePersonnel->setprenom_personnel(prenom);
	this->servicePersonnel->setDN_Personnel(DN_personnel);
	this->servicePersonnel->setDate_embauche_personnel(date_embauche_personnel);
	this->servicePersonnel->setAP_adresse(AP_adresse);
	this->servicePersonnel->setCP_adresse(CP_adresse);
	this->servicePersonnel->setVille(ville);
	this->servicePersonnel->setid_superieur(id_superieur);



	sql = this->servicePersonnel->Update();
	this->oCad->actionRows(sql);


}
