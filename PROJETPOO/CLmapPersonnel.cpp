#include "CLmapPersonnel.h"


System::String^ NS_Comp_MappagePersonnel::CLmapPersonnel::Select(void)
{
	return "SELECT  * FROM Personnel;";

}
System::String^ NS_Comp_MappagePersonnel::CLmapPersonnel::Insert(void) {

	return "";
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
void NS_Comp_MappagePersonnel::CLmapPersonnel::setDNN_personnel(System::DateTime^ a)				{ this->DNN_personnel = a; }
//void NS_Comp_MappagePersonnel::CLmapPersonnel::setid_superieur(System::String^ a)					{ this->id_superieur = a; }
//void NS_Comp_MappagePersonnel::CLmapPersonnel::setid_adresse(int a)								    { this->id_adresse = a; }


