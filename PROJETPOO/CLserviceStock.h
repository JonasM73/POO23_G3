#pragma once
#include "CLcad.h"
#include "CLmapStock.h"

namespace NS_SvcStock {
	ref class CLserviceStock {
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappageStock::CLmapStock^ oMapStock;
	public:
		CLserviceStock(void);
		System::Data::DataSet^ ChargerTousArticles(System::String^ dataTableName);
		void InsererUnArticle(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void ModifierUnArticle(System::String^, System::String^, System::String^, System::String^, System::String^);
		void SupprimerUnArticle(System::String^);
	};
}