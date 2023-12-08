//CLservice¨Personnel.h********************************************************************************
#pragma once
#include "CLcad.h"
#include "CLmapPersonnel.h"

namespace NS_Comp_SvcPersonnel
{
	ref class CLservicesPersonnel
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappagePersonnel::CLmapPersonnel^ servicePersonnel;
	public:
		CLservicesPersonnel(void);
		System::Data::DataSet^ selectionnerTousLesPersonnels(System::String^);
		void AjouterUnPersonnel(System::String^, System::String^, System::DateTime^, System::DateTime^, System::String^,int, System::String^);
		//void DeleteUnPersonnel(System::String^, System::String^, System::DateTime^, System::DateTime^, System::String^, int, System::String^);
		//void UpdateUnePersonne(System::String^, System::String^, System::DateTime^, System::DateTime^, System::String^, int, System::String^);
		
	};
}


