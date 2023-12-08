#pragma once
namespace NS_Comp_MappageClient
{
	ref class CLmapTBClient
	{
	private:
		System::String^ sSql;
		int Id_client;
		System::String^ numero_client;
		System::String^ nom_client;
		System::String^ prenom_client;
		System::DateTime^ DNN_client;
		System::DateTime^ Date_Pchat_client;
		System::String^ villeL_client;
		System::String^ villeF_client;
		System::String^ AP_F_client;
		System::String^ AP_L_client;
		int CP_L_client;
		int CP_F_client;

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId_client(int);
		void setnumero_client(System::String^);
		void setnom_client(System::String^);
		void setprenom_client(System::String^);
		void setDNN_client(System::DateTime^);
		void setDate_Pchat_client(System::DateTime^);
		void setvilleL_client(System::String^);
		void setvilleF_client(System::String^);
		void setAP_L_client(System::String^);
		void setAP_F_client(System::String^);
		void setCP_L_client(int);
		void setCP_F_client(int);

	};
}