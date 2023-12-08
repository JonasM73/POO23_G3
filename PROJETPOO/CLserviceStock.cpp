#pragma once
#include "CLserviceStock.h"


NS_SvcStock::CLserviceStock::CLserviceStock(void) {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapStock = gcnew NS_Comp_MappageStock::CLmapStock();
}
System::Data::DataSet^ NS_SvcStock::CLserviceStock::ChargerTousArticles(System::String^ dataTableName) {
	System::String^ sql = "";

	sql = this->oMapStock->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_SvcStock::CLserviceStock::InsererUnArticle(System::String^ nom, System::String^ val, System::String^ tva, System::String^ prix, System::String^ seuil, System::String^ couleur) {
	System::String^ sql = "";
	this->oMapStock->setNomart(nom);
	this->oMapStock->setValeurstock(val);
	this->oMapStock->setTauxTVA(tva);
	this->oMapStock->setPrixHT(prix);
	this->oMapStock->setSeuil_reappro(seuil);
	this->oMapStock->setCouleurart(couleur);
	sql = this->oMapStock->Insert();
	this->oCad->actionRows(sql);
}
void NS_SvcStock::CLserviceStock::ModifierUnArticle(System::String^ nom, System::String^ val, System::String^ tva, System::String^ prix, System::String^ seuil) {
	this->oMapStock->setNomart(nom);
	System::String^ sql = "";
	this->oMapStock->setNomart(nom);
	this->oMapStock->setValeurstock(val);
	this->oMapStock->setTauxTVA(tva);
	this->oMapStock->setPrixHT(prix);
	this->oMapStock->setSeuil_reappro(seuil);
	sql = this->oMapStock->Update();
	this->oCad->actionRows(sql);
}
void NS_SvcStock::CLserviceStock::SupprimerUnArticle(System::String^ nom) {
	this->oMapStock->setNomart(nom);
	System::String^ sql = "";
	sql = this->oMapStock->Delete();
	this->oCad->actionRows(sql);
}
//