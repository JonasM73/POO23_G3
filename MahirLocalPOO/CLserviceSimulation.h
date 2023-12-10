#pragma once
#include "CLcad.h"
#include "CLmapSimulation.h"
namespace NS_Svc_Simu {
	ref class CLserviceSimulation
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_MappageSimu::CLmapSimulation^ oMapSimu;
	public:
		CLserviceSimulation(void);
		System::Data::DataSet^ MargeCommerciale5(System::String^ dataTableName, System::String^ TVA1, int m, int r, int d);
	};
}
