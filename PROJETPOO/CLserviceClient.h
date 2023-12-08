//CLservice.h********************************************************************************
#pragma once
#include "CLcad.h"
#include "CLmapClient.h"

namespace NS_Comp_SvcClient
{
	ref class CLservicesClient
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappageClient::CLmapTBClient^ CLmapService;
	public:
		CLservicesClient(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void AjouterUnePersonne(System::String^ , System::String^ , System::String^,  System::DateTime^, System::DateTime^, System::String^ , System::String^ ,int, int, System::String^, System::String^);
		void DeleteUnePersonne(System::String^, System::String^, System::String^, System::DateTime^);
		void UpdateUnnePersonne(System::String^, System::String^, System::String^, System::DateTime^, System::DateTime^, System::String^, System::String^, int, int, System::String^, System::String^);
	};
}