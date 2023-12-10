#pragma once
namespace NS_Comp_MappageSimu {
	ref class CLmapSimulation
	{
	private:
		System::String^ sSQL;
		float TVA;
		System::String^ margeC;
		float remiseC;
		float demarqueInconnue;
	public:
		System::String^ margeCommerciale(void);
		void setMargeC(System::String^);

	};

}