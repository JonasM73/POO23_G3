#pragma once
namespace NS_Comp_MappageSimu {
	ref class CLmapSimulation
	{
	private:
		System::String^ sSQL;
		System::String^ TVA= "0";
		System::String^ margeC = "0";
		System::String^ remiseC = "0";
		System::String^ demarqueInconnue = "0";


	public:
		System::String^ margeCommerciale(void);
		void setRemiseC(System::String^ r);
		void setMargeC(System::String^ m);
		void setDemarqueI(System::String^ d);
		void setTVA1(System::String^ td);
	};

}