#pragma once
namespace NS_Comp_MappageSimu {
	ref class CLmapSimulation
	{
	private:
		System::String^ sSQL;
		System::String^ TVA;
		System::String^ margeC;
		System::String^ remiseC;
		System::String^ demarqueInconnue;


	public:
		System::String^ margeCommerciale(void);
		void setRemiseC(System::String^ r);
		void setMargeC(System::String^ m);
		void setDemarqueI(System::String^ d);
		void setTVA1(System::String^ td);
	};

}