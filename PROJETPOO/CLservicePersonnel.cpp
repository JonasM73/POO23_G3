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
void NS_Comp_SvcPersonnel::CLservicesPersonnel::AjouterUnPersonnel(System::String^ nom, System::String^ prenom,System::DateTime^ DNN, System::DateTime^ DNN_embauche, System::String^ id_sup)
{
	System::String^ sql = "";
	this->servicePersonnel->setnom_personnel(nom);
	this->servicePersonnel->setprenom_personnel(prenom);
	this->servicePersonnel->setDNN_personnel(DNN);
	this->servicePersonnel->setDate_embauche_personnel(DNN_embauche);
	//this->servicePersonnel->setid_superieur(id_sup);

	

	sql = this->servicePersonnel->Insert();
	this->oCad->actionRows(sql);


}
/*
void NS_Comp_SvcPersonnel::CLservicesPersonnel::DeleteUnePersonne(System::String^ num, System::String^ nom, System::String^ prenom, System::DateTime^ DNN) {

	System::String^ sql;
	this->servicePersonnel->setnom_personnel(nom);
	this->servicePersonnel->setprenom_personnel(prenom);
	this->servicePersonnel->setDNN_personnel(DNN);
	//this->servicePersonnel->setid_adresse(num);

	sql = this->servicePersonnel->Delete();
	this->oCad->actionRows(sql);
}
void NS_Comp_SvcPersonnel::CLservicesPersonnel::UpdateUnePersonne(System::String^ nom, System::String^ prenom, System::DateTime^ DNN, System::DateTime^ DNN_embauche)
{
	System::String^ sql;
	this->servicePersonnel->setnom_personnel(nom);
	this->servicePersonnel->setprenom_personnel(prenom);
	this->servicePersonnel->setDNN_personnel(DNN);
	this->servicePersonnel->setDate_embauche_personnel(DNN_embauche);
	//this->servicePersonnel->setid_superieur(id_sup);
	//this->servicePersonnel->setid_adresse(adresse);

	sql = this->servicePersonnel->Update();
	this->oCad->actionRows(sql);
}
	*/