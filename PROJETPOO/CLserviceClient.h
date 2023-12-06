//CLservice.h********************************************************************************
#pragma once
#include "CLcad.h"
#include "CLmapClient.h"

namespace NS_Comp_SvcClient
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappageClient::CLmapTB^ serviceClient;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void AjouterUnePersonne(System::String^ , System::String^ , System::String^,  System::DateTime^, System::DateTime^, System::String^ , System::String^ ,int, int, System::String^, System::String^);
		//void deleteuneperssonne(int);
		//udapte une personne
	};
}