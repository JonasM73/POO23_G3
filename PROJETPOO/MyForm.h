#pragma once
#include "CLserviceClient.h"

namespace ProjetPOOG3 {

	int b;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description resumee de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisees.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: NS_Comp_SvcClient::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;

	protected:

	private: System::Windows::Forms::Button^ btn_GestionPersonnel;
	private: System::Windows::Forms::Button^ btn_GestionClient;
	private: System::Windows::Forms::Button^ btn_GestionCommande;
	private: System::Windows::Forms::Button^ btn_GestionStock;
	private: System::Windows::Forms::Button^ btn_GestionStatistique;
	private: System::Windows::Forms::TextBox^ nom;

	private: System::Windows::Forms::TextBox^ prenom;
	private: System::Windows::Forms::TextBox^ DNN;
	private: System::Windows::Forms::TextBox^ Date_Pachat_client;

	private: System::Windows::Forms::TextBox^ AP_F;
	private: System::Windows::Forms::TextBox^ CP_F;
	private: System::Windows::Forms::TextBox^ ville_F;
	private: System::Windows::Forms::TextBox^ AP_L;
	private: System::Windows::Forms::TextBox^ CP_L;
	private: System::Windows::Forms::TextBox^ ville_L;
	private: System::Windows::Forms::Label^ txt_AdresseF;
	private: System::Windows::Forms::Label^ txt_adresseL;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_add;


	private: System::Windows::Forms::Button^ btn_supp;
	private: System::Windows::Forms::Button^ btn_upd;
	private: System::Windows::Forms::Button^ btn_afficher;
	private: System::Windows::Forms::Label^ txt_nom;





	private: System::Windows::Forms::Label^ txt_DNN;
	private: System::Windows::Forms::Label^ txt_Pachat;
	private: System::Windows::Forms::Label^ txt_prenom;
	private: System::Windows::Forms::Label^ txt_numeroclient;
	private: System::Windows::Forms::Label^ txt_AP_F;
	private: System::Windows::Forms::Label^ txt_AP_L;
	private: System::Windows::Forms::Label^ txt_CP_F;
	private: System::Windows::Forms::Label^ txt_CP_L;
	private: System::Windows::Forms::Label^ txt_ville_L;
	private: System::Windows::Forms::Label^ txt_ville_F;
	private: System::Windows::Forms::Label^ txt_ville_personnel;
	private: System::Windows::Forms::Label^ txt_CP_personnel;
	private: System::Windows::Forms::Label^ txt_AP_personnel;
	private: System::Windows::Forms::Label^ txt_nom_personnel;
	private: System::Windows::Forms::Label^ txt_prenom_personnel;

	private: System::Windows::Forms::TextBox^ numero_client;
	private: System::Windows::Forms::TextBox^ nom_personnel;
	private: System::Windows::Forms::TextBox^ prenom_personnel;
	private: System::Windows::Forms::TextBox^ AP_personnel;
	private: System::Windows::Forms::TextBox^ CP_personnel;
	private: System::Windows::Forms::TextBox^ ville_personnel;




	private: System::Windows::Forms::Label^ txt_nom_superieur;
	private: System::Windows::Forms::TextBox^ id_superieur;
	private: System::Windows::Forms::Label^ txt_id_superieur;
	private: System::Windows::Forms::TextBox^ ref_commande;
	private: System::Windows::Forms::Label^ txt_ref_commande;
	private: System::Windows::Forms::Label^ txt_id_client_commande;

	private: System::Windows::Forms::TextBox^ id_client_commande;



	private: System::Windows::Forms::Button^ add_commande;
	private: System::Windows::Forms::Label^ txt_date_emision_commande;

	private: System::Windows::Forms::TextBox^ Date_emision_commande;
	private: System::Windows::Forms::Label^ txt_date_livraison_commande;

	private: System::Windows::Forms::TextBox^ Date_livraison_commande;
	private: System::Windows::Forms::Label^ txt_id_article_commande;

	private: System::Windows::Forms::TextBox^ id_article_commande;
	private: System::Windows::Forms::Label^ txt_quantite_article_commande;
	private: System::Windows::Forms::TextBox^ quantite_article_commande;
	private: System::Windows::Forms::Button^ panier_moyen_stats;
	private: System::Windows::Forms::ComboBox^ liste_mois_stats;
	private: System::Windows::Forms::Label^ chiffre_affaire;
	private: System::Windows::Forms::Button^ produits_reapprovision_stats;
	private: System::Windows::Forms::Button^ articles_plus_vendus_stats;
	private: System::Windows::Forms::Button^ articles_moins_vendus_stats;
	private: System::Windows::Forms::Button^ valeur_commerciale_stock_stats;
	private: System::Windows::Forms::Button^ valeur_achat_stock_stats;
	private: System::Windows::Forms::TextBox^ nom_client_stats;
	private: System::Windows::Forms::Label^ label_nom_client_stats;
	private: System::Windows::Forms::TextBox^ prenom_client_stats;
	private: System::Windows::Forms::Label^ lab_prenom_client_stats;
	private: System::Windows::Forms::TextBox^ ddn_client_stats;
	private: System::Windows::Forms::Label^ lab_ddn_client_stats;
	private: System::Windows::Forms::Button^ bouton_simulations;
	private: System::Windows::Forms::Button^ btn_ajouter_article_stock;
	private: System::Windows::Forms::Button^ btn_maj_article_stock;
	private: System::Windows::Forms::Button^ btn_sup_article_stock;
	private: System::Windows::Forms::Button^ btn_afficher_article_stock;



	protected:





	private:
		/// <summary>
		/// Variable necessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Methode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette methode avec l'editeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_GestionPersonnel = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_GestionClient = (gcnew System::Windows::Forms::Button());
			this->btn_GestionCommande = (gcnew System::Windows::Forms::Button());
			this->btn_GestionStock = (gcnew System::Windows::Forms::Button());
			this->btn_GestionStatistique = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_supp = (gcnew System::Windows::Forms::Button());
			this->btn_upd = (gcnew System::Windows::Forms::Button());
			this->btn_afficher = (gcnew System::Windows::Forms::Button());
			this->numero_client = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::TextBox());
			this->prenom = (gcnew System::Windows::Forms::TextBox());
			this->DNN = (gcnew System::Windows::Forms::TextBox());
			this->Date_Pachat_client = (gcnew System::Windows::Forms::TextBox());
			this->AP_F = (gcnew System::Windows::Forms::TextBox());
			this->CP_F = (gcnew System::Windows::Forms::TextBox());
			this->ville_F = (gcnew System::Windows::Forms::TextBox());
			this->AP_L = (gcnew System::Windows::Forms::TextBox());
			this->CP_L = (gcnew System::Windows::Forms::TextBox());
			this->ville_L = (gcnew System::Windows::Forms::TextBox());
			this->txt_AdresseF = (gcnew System::Windows::Forms::Label());
			this->txt_adresseL = (gcnew System::Windows::Forms::Label());
			this->txt_nom = (gcnew System::Windows::Forms::Label());
			this->txt_DNN = (gcnew System::Windows::Forms::Label());
			this->txt_Pachat = (gcnew System::Windows::Forms::Label());
			this->txt_prenom = (gcnew System::Windows::Forms::Label());
			this->txt_numeroclient = (gcnew System::Windows::Forms::Label());
			this->txt_AP_F = (gcnew System::Windows::Forms::Label());
			this->txt_AP_L = (gcnew System::Windows::Forms::Label());
			this->txt_CP_F = (gcnew System::Windows::Forms::Label());
			this->txt_CP_L = (gcnew System::Windows::Forms::Label());
			this->txt_ville_L = (gcnew System::Windows::Forms::Label());
			this->txt_ville_F = (gcnew System::Windows::Forms::Label());
			this->nom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_personnel = (gcnew System::Windows::Forms::Label());
			this->txt_prenom_personnel = (gcnew System::Windows::Forms::Label());
			this->prenom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_AP_personnel = (gcnew System::Windows::Forms::Label());
			this->AP_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_CP_personnel = (gcnew System::Windows::Forms::Label());
			this->CP_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_ville_personnel = (gcnew System::Windows::Forms::Label());
			this->ville_personnel = (gcnew System::Windows::Forms::TextBox());
			this->id_superieur = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_superieur = (gcnew System::Windows::Forms::Label());
			this->ref_commande = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_commande = (gcnew System::Windows::Forms::Label());
			this->txt_id_client_commande = (gcnew System::Windows::Forms::Label());
			this->id_client_commande = (gcnew System::Windows::Forms::TextBox());
			this->add_commande = (gcnew System::Windows::Forms::Button());
			this->txt_date_emision_commande = (gcnew System::Windows::Forms::Label());
			this->Date_emision_commande = (gcnew System::Windows::Forms::TextBox());
			this->txt_date_livraison_commande = (gcnew System::Windows::Forms::Label());
			this->Date_livraison_commande = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_article_commande = (gcnew System::Windows::Forms::Label());
			this->id_article_commande = (gcnew System::Windows::Forms::TextBox());
			this->txt_quantite_article_commande = (gcnew System::Windows::Forms::Label());
			this->quantite_article_commande = (gcnew System::Windows::Forms::TextBox());
			this->panier_moyen_stats = (gcnew System::Windows::Forms::Button());
			this->liste_mois_stats = (gcnew System::Windows::Forms::ComboBox());
			this->chiffre_affaire = (gcnew System::Windows::Forms::Label());
			this->produits_reapprovision_stats = (gcnew System::Windows::Forms::Button());
			this->articles_plus_vendus_stats = (gcnew System::Windows::Forms::Button());
			this->articles_moins_vendus_stats = (gcnew System::Windows::Forms::Button());
			this->valeur_commerciale_stock_stats = (gcnew System::Windows::Forms::Button());
			this->valeur_achat_stock_stats = (gcnew System::Windows::Forms::Button());
			this->nom_client_stats = (gcnew System::Windows::Forms::TextBox());
			this->label_nom_client_stats = (gcnew System::Windows::Forms::Label());
			this->prenom_client_stats = (gcnew System::Windows::Forms::TextBox());
			this->lab_prenom_client_stats = (gcnew System::Windows::Forms::Label());
			this->ddn_client_stats = (gcnew System::Windows::Forms::TextBox());
			this->lab_ddn_client_stats = (gcnew System::Windows::Forms::Label());
			this->bouton_simulations = (gcnew System::Windows::Forms::Button());
			this->btn_ajouter_article_stock = (gcnew System::Windows::Forms::Button());
			this->btn_maj_article_stock = (gcnew System::Windows::Forms::Button());
			this->btn_sup_article_stock = (gcnew System::Windows::Forms::Button());
			this->btn_afficher_article_stock = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_GestionPersonnel
			// 
			this->btn_GestionPersonnel->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_GestionPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_GestionPersonnel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_GestionPersonnel->Location = System::Drawing::Point(32, 17);
			this->btn_GestionPersonnel->Name = L"btn_GestionPersonnel";
			this->btn_GestionPersonnel->Size = System::Drawing::Size(230, 153);
			this->btn_GestionPersonnel->TabIndex = 0;
			this->btn_GestionPersonnel->Text = L"Gestion du personnel";
			this->btn_GestionPersonnel->UseVisualStyleBackColor = false;
			this->btn_GestionPersonnel->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionPersonnel_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(297, 26);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1573, 401);
			this->dataGridView1->TabIndex = 5;
			// 
			// btn_GestionClient
			// 
			this->btn_GestionClient->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_GestionClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_GestionClient->Location = System::Drawing::Point(32, 176);
			this->btn_GestionClient->Name = L"btn_GestionClient";
			this->btn_GestionClient->Size = System::Drawing::Size(230, 144);
			this->btn_GestionClient->TabIndex = 6;
			this->btn_GestionClient->Text = L"Gestion des clients";
			this->btn_GestionClient->UseVisualStyleBackColor = false;
			this->btn_GestionClient->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionClient_Click);
			// 
			// btn_GestionCommande
			// 
			this->btn_GestionCommande->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_GestionCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_GestionCommande->Location = System::Drawing::Point(32, 326);
			this->btn_GestionCommande->Name = L"btn_GestionCommande";
			this->btn_GestionCommande->Size = System::Drawing::Size(230, 143);
			this->btn_GestionCommande->TabIndex = 7;
			this->btn_GestionCommande->Text = L"Gestion des commandes";
			this->btn_GestionCommande->UseVisualStyleBackColor = false;
			this->btn_GestionCommande->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionCommande_Click);
			// 
			// btn_GestionStock
			// 
			this->btn_GestionStock->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_GestionStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_GestionStock->Location = System::Drawing::Point(32, 475);
			this->btn_GestionStock->Name = L"btn_GestionStock";
			this->btn_GestionStock->Size = System::Drawing::Size(230, 153);
			this->btn_GestionStock->TabIndex = 8;
			this->btn_GestionStock->Text = L"Gestion du stock";
			this->btn_GestionStock->UseVisualStyleBackColor = false;
			this->btn_GestionStock->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionStock_Click);
			// 
			// btn_GestionStatistique
			// 
			this->btn_GestionStatistique->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_GestionStatistique->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_GestionStatistique->Location = System::Drawing::Point(32, 634);
			this->btn_GestionStatistique->Name = L"btn_GestionStatistique";
			this->btn_GestionStatistique->Size = System::Drawing::Size(230, 160);
			this->btn_GestionStatistique->TabIndex = 9;
			this->btn_GestionStatistique->Text = L"Gestion des statistiques";
			this->btn_GestionStatistique->UseVisualStyleBackColor = false;
			this->btn_GestionStatistique->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionStatistique_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::PaleGreen;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->Location = System::Drawing::Point(212, 407);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(212, 152);
			this->btn_add->TabIndex = 25;
			this->btn_add->Text = L"Ajouter";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_click);

			// 
			// btn_supp
			// 
			this->btn_supp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->btn_supp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_supp->Location = System::Drawing::Point(430, 407);
			this->btn_supp->Name = L"btn_supp";
			this->btn_supp->Size = System::Drawing::Size(227, 152);
			this->btn_supp->TabIndex = 26;
			this->btn_supp->Text = L"Suppresion ";
			this->btn_supp->UseVisualStyleBackColor = false;
			this->btn_supp->Click += gcnew System::EventHandler(this, &MyForm::btn_del_click);

			// 
			// btn_upd
			// 
			this->btn_upd->BackColor = System::Drawing::Color::CornflowerBlue;
			this->btn_upd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_upd->Location = System::Drawing::Point(212, 565);
			this->btn_upd->Name = L"btn_upd";
			this->btn_upd->Size = System::Drawing::Size(212, 142);
			this->btn_upd->TabIndex = 27;
			this->btn_upd->Text = L"Update";
			this->btn_upd->UseVisualStyleBackColor = false;
			this->btn_upd->Click += gcnew System::EventHandler(this, &MyForm::btn_update_click);

			// 
			// btn_afficher
			// 
			this->btn_afficher->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn_afficher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_afficher->Location = System::Drawing::Point(430, 565);
			this->btn_afficher->Name = L"btn_afficher";
			this->btn_afficher->Size = System::Drawing::Size(227, 142);
			this->btn_afficher->TabIndex = 28;
			this->btn_afficher->Text = L"Afficher";
			this->btn_afficher->UseVisualStyleBackColor = false;
			this->btn_afficher->Click += gcnew System::EventHandler(this, &MyForm::btn_afficher_click);

			// 
			// numero_client
			// 
			this->numero_client->Location = System::Drawing::Point(792, 423);
			this->numero_client->Multiline = true;
			this->numero_client->Name = L"numero_client";
			this->numero_client->Size = System::Drawing::Size(347, 30);
			this->numero_client->TabIndex = 13;
			this->numero_client->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// nom
			// 
			this->nom->Location = System::Drawing::Point(792, 489);
			this->nom->Multiline = true;
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(347, 30);
			this->nom->TabIndex = 10;
			this->nom->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// prenom
			// 
			this->prenom->Location = System::Drawing::Point(792, 568);
			this->prenom->Multiline = true;
			this->prenom->Name = L"prenom";
			this->prenom->Size = System::Drawing::Size(347, 30);
			this->prenom->TabIndex = 11;
			this->prenom->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DNN
			// 
			this->DNN->Location = System::Drawing::Point(792, 629);
			this->DNN->Multiline = true;
			this->DNN->Name = L"DNN";
			this->DNN->Size = System::Drawing::Size(347, 30);
			this->DNN->TabIndex = 12;
			this->DNN->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Date_Pachat_client
			// 
			this->Date_Pachat_client->Location = System::Drawing::Point(792, 691);
			this->Date_Pachat_client->Multiline = true;
			this->Date_Pachat_client->Name = L"Date_Pachat_client";
			this->Date_Pachat_client->Size = System::Drawing::Size(347, 30);
			this->Date_Pachat_client->TabIndex = 14;
			this->Date_Pachat_client->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AP_F
			// 
			this->AP_F->Location = System::Drawing::Point(1205, 431);
			this->AP_F->Multiline = true;
			this->AP_F->Name = L"AP_F";
			this->AP_F->Size = System::Drawing::Size(347, 30);
			this->AP_F->TabIndex = 16;
			this->AP_F->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// CP_F
			// 
			this->CP_F->Location = System::Drawing::Point(1205, 474);
			this->CP_F->Multiline = true;
			this->CP_F->Name = L"CP_F";
			this->CP_F->Size = System::Drawing::Size(347, 30);
			this->CP_F->TabIndex = 17;
			this->CP_F->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ville_F
			// 
			this->ville_F->Location = System::Drawing::Point(1205, 522);
			this->ville_F->Multiline = true;
			this->ville_F->Name = L"ville_F";
			this->ville_F->Size = System::Drawing::Size(347, 30);
			this->ville_F->TabIndex = 18;
			this->ville_F->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ville_F->UseSystemPasswordChar = true;
			// 
			// AP_L
			// 
			this->AP_L->Location = System::Drawing::Point(1205, 598);
			this->AP_L->Multiline = true;
			this->AP_L->Name = L"AP_L";
			this->AP_L->Size = System::Drawing::Size(347, 30);
			this->AP_L->TabIndex = 19;
			this->AP_L->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// CP_L
			// 
			this->CP_L->Location = System::Drawing::Point(1205, 645);
			this->CP_L->Multiline = true;
			this->CP_L->Name = L"CP_L";
			this->CP_L->Size = System::Drawing::Size(347, 30);
			this->CP_L->TabIndex = 20;
			this->CP_L->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ville_L
			// 
			this->ville_L->Location = System::Drawing::Point(1205, 691);
			this->ville_L->Multiline = true;
			this->ville_L->Name = L"ville_L";
			this->ville_L->Size = System::Drawing::Size(347, 30);
			this->ville_L->TabIndex = 21;
			this->ville_L->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_AdresseF
			// 
			this->txt_AdresseF->AutoSize = true;
			this->txt_AdresseF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_AdresseF->Location = System::Drawing::Point(1317, 395);
			this->txt_AdresseF->Name = L"txt_AdresseF";
			this->txt_AdresseF->Size = System::Drawing::Size(127, 16);
			this->txt_AdresseF->TabIndex = 22;
			this->txt_AdresseF->Text = L"Adresse Facturation";
			// 
			// txt_adresseL
			// 
			this->txt_adresseL->AutoSize = true;
			this->txt_adresseL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_adresseL->Location = System::Drawing::Point(1317, 561);
			this->txt_adresseL->Name = L"txt_adresseL";
			this->txt_adresseL->Size = System::Drawing::Size(115, 16);
			this->txt_adresseL->TabIndex = 23;
			this->txt_adresseL->Text = L"Adresse Livraison";
			// 
			// txt_nom
			// 
			this->txt_nom->AutoSize = true;
			this->txt_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nom->Location = System::Drawing::Point(799, 480);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(90, 16);
			this->txt_nom->TabIndex = 29;
			this->txt_nom->Text = L"Entrez un nom";
			this->txt_nom->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_DNN
			// 
			this->txt_DNN->AutoSize = true;
			this->txt_DNN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_DNN->Location = System::Drawing::Point(799, 619);
			this->txt_DNN->Name = L"txt_DNN";
			this->txt_DNN->Size = System::Drawing::Size(160, 16);
			this->txt_DNN->TabIndex = 32;
			this->txt_DNN->Text = L"Entrez Date de naissance";
			// 
			// txt_Pachat
			// 
			this->txt_Pachat->AutoSize = true;
			this->txt_Pachat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Pachat->Location = System::Drawing::Point(798, 681);
			this->txt_Pachat->Name = L"txt_Pachat";
			this->txt_Pachat->Size = System::Drawing::Size(179, 16);
			this->txt_Pachat->TabIndex = 33;
			this->txt_Pachat->Text = L"Entrez Date du premier achat";
			// 
			// txt_prenom
			// 
			this->txt_prenom->AutoSize = true;
			this->txt_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_prenom->Location = System::Drawing::Point(798, 562);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(110, 16);
			this->txt_prenom->TabIndex = 34;
			this->txt_prenom->Text = L"Entrez un prenom";
			this->txt_prenom->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_numeroclient
			// 
			this->txt_numeroclient->AutoSize = true;
			this->txt_numeroclient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_numeroclient->Location = System::Drawing::Point(798, 420);
			this->txt_numeroclient->Name = L"txt_numeroclient";
			this->txt_numeroclient->Size = System::Drawing::Size(147, 16);
			this->txt_numeroclient->TabIndex = 35;
			this->txt_numeroclient->Text = L"Entrez un numero_client";
			this->txt_numeroclient->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_AP_F
			// 
			this->txt_AP_F->AutoSize = true;
			this->txt_AP_F->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_AP_F->Location = System::Drawing::Point(1214, 423);
			this->txt_AP_F->Name = L"txt_AP_F";
			this->txt_AP_F->Size = System::Drawing::Size(97, 16);
			this->txt_AP_F->TabIndex = 36;
			this->txt_AP_F->Text = L"adresse postal";
			// 
			// txt_AP_L
			// 
			this->txt_AP_L->AutoSize = true;
			this->txt_AP_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_AP_L->Location = System::Drawing::Point(1214, 589);
			this->txt_AP_L->Name = L"txt_AP_L";
			this->txt_AP_L->Size = System::Drawing::Size(98, 16);
			this->txt_AP_L->TabIndex = 37;
			this->txt_AP_L->Text = L"Adresse postal";
			// 
			// txt_CP_F
			// 
			this->txt_CP_F->AutoSize = true;
			this->txt_CP_F->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_CP_F->Location = System::Drawing::Point(1214, 464);
			this->txt_CP_F->Name = L"txt_CP_F";
			this->txt_CP_F->Size = System::Drawing::Size(86, 16);
			this->txt_CP_F->TabIndex = 38;
			this->txt_CP_F->Text = L"code postale";
			// 
			// txt_CP_L
			// 
			this->txt_CP_L->AutoSize = true;
			this->txt_CP_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_CP_L->Location = System::Drawing::Point(1214, 635);
			this->txt_CP_L->Name = L"txt_CP_L";
			this->txt_CP_L->Size = System::Drawing::Size(80, 16);
			this->txt_CP_L->TabIndex = 39;
			this->txt_CP_L->Text = L"Code postal";
			// 
			// txt_ville_L
			// 
			this->txt_ville_L->AutoSize = true;
			this->txt_ville_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_ville_L->Location = System::Drawing::Point(1214, 681);
			this->txt_ville_L->Name = L"txt_ville_L";
			this->txt_ville_L->Size = System::Drawing::Size(33, 16);
			this->txt_ville_L->TabIndex = 40;
			this->txt_ville_L->Text = L"Ville";
			// 
			// txt_ville_F
			// 
			this->txt_ville_F->AutoSize = true;
			this->txt_ville_F->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_ville_F->Location = System::Drawing::Point(1214, 513);
			this->txt_ville_F->Name = L"txt_ville_F";
			this->txt_ville_F->Size = System::Drawing::Size(33, 16);
			this->txt_ville_F->TabIndex = 41;
			this->txt_ville_F->Text = L"Ville";
			// 
			// nom_personnel
			// 
			this->nom_personnel->Location = System::Drawing::Point(764, 403);
			this->nom_personnel->Multiline = true;
			this->nom_personnel->Name = L"nom_personnel";
			this->nom_personnel->Size = System::Drawing::Size(371, 59);
			this->nom_personnel->TabIndex = 29;
			// 
			// txt_nom_personnel
			// 
			this->txt_nom_personnel->AutoSize = true;
			this->txt_nom_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nom_personnel->Location = System::Drawing::Point(761, 394);
			this->txt_nom_personnel->Name = L"txt_nom_personnel";
			this->txt_nom_personnel->Size = System::Drawing::Size(96, 16);
			this->txt_nom_personnel->TabIndex = 30;
			this->txt_nom_personnel->Text = L"nom personnel";
			// 
			// txt_prenom_personnel
			// 
			this->txt_prenom_personnel->AutoSize = true;
			this->txt_prenom_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_prenom_personnel->Location = System::Drawing::Point(761, 465);
			this->txt_prenom_personnel->Name = L"txt_prenom_personnel";
			this->txt_prenom_personnel->Size = System::Drawing::Size(116, 16);
			this->txt_prenom_personnel->TabIndex = 32;
			this->txt_prenom_personnel->Text = L"prenom personnel";
			// 
			// prenom_personnel
			// 
			this->prenom_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenom_personnel->Location = System::Drawing::Point(764, 474);
			this->prenom_personnel->Multiline = true;
			this->prenom_personnel->Name = L"prenom_personnel";
			this->prenom_personnel->Size = System::Drawing::Size(371, 57);
			this->prenom_personnel->TabIndex = 31;
			// 
			// txt_AP_personnel
			// 
			this->txt_AP_personnel->AutoSize = true;
			this->txt_AP_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_AP_personnel->Location = System::Drawing::Point(761, 536);
			this->txt_AP_personnel->Name = L"txt_AP_personnel";
			this->txt_AP_personnel->Size = System::Drawing::Size(102, 16);
			this->txt_AP_personnel->TabIndex = 34;
			this->txt_AP_personnel->Text = L"Adresse prostal";
			// 
			// AP_personnel
			// 
			this->AP_personnel->Location = System::Drawing::Point(764, 545);
			this->AP_personnel->Multiline = true;
			this->AP_personnel->Name = L"AP_personnel";
			this->AP_personnel->Size = System::Drawing::Size(371, 50);
			this->AP_personnel->TabIndex = 33;
			// 
			// txt_CP_personnel
			// 
			this->txt_CP_personnel->AutoSize = true;
			this->txt_CP_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_CP_personnel->Location = System::Drawing::Point(761, 614);
			this->txt_CP_personnel->Name = L"txt_CP_personnel";
			this->txt_CP_personnel->Size = System::Drawing::Size(80, 16);
			this->txt_CP_personnel->TabIndex = 36;
			this->txt_CP_personnel->Text = L"Code postal";
			// 
			// CP_personnel
			// 
			this->CP_personnel->Location = System::Drawing::Point(764, 623);
			this->CP_personnel->Multiline = true;
			this->CP_personnel->Name = L"CP_personnel";
			this->CP_personnel->Size = System::Drawing::Size(371, 55);
			this->CP_personnel->TabIndex = 35;
			// 
			// txt_ville_personnel
			// 
			this->txt_ville_personnel->AutoSize = true;
			this->txt_ville_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_ville_personnel->Location = System::Drawing::Point(761, 696);
			this->txt_ville_personnel->Name = L"txt_ville_personnel";
			this->txt_ville_personnel->Size = System::Drawing::Size(94, 16);
			this->txt_ville_personnel->TabIndex = 38;
			this->txt_ville_personnel->Text = L"ville personnel";
			// 
			// ville_personnel
			// 
			this->ville_personnel->Location = System::Drawing::Point(764, 705);
			this->ville_personnel->Multiline = true;
			this->ville_personnel->Name = L"ville_personnel";
			this->ville_personnel->Size = System::Drawing::Size(371, 59);
			this->ville_personnel->TabIndex = 37;
			// 
			// id_superieur
			// 
			this->id_superieur->Location = System::Drawing::Point(1169, 524);
			this->id_superieur->Multiline = true;
			this->id_superieur->Name = L"id_superieur";
			this->id_superieur->Size = System::Drawing::Size(371, 43);
			this->id_superieur->TabIndex = 39;
			// 
			// txt_id_superieur
			// 
			this->txt_id_superieur->AutoSize = true;
			this->txt_id_superieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_id_superieur->Location = System::Drawing::Point(1166, 515);
			this->txt_id_superieur->Name = L"txt_id_superieur";
			this->txt_id_superieur->Size = System::Drawing::Size(122, 16);
			this->txt_id_superieur->TabIndex = 40;
			this->txt_id_superieur->Text = L"identifiant superieur";
			// 
			// ref_commande
			// 
			this->ref_commande->Location = System::Drawing::Point(229, 378);
			this->ref_commande->Multiline = true;
			this->ref_commande->Name = L"ref_commande";
			this->ref_commande->Size = System::Drawing::Size(294, 31);
			this->ref_commande->TabIndex = 29;
			// 
			// txt_ref_commande
			// 
			this->txt_ref_commande->AutoSize = true;
			this->txt_ref_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_ref_commande->Location = System::Drawing::Point(229, 364);
			this->txt_ref_commande->Name = L"txt_ref_commande";
			this->txt_ref_commande->Size = System::Drawing::Size(97, 16);
			this->txt_ref_commande->TabIndex = 30;
			this->txt_ref_commande->Text = L"ref_commande";
			// 
			// txt_id_client_commande
			// 
			this->txt_id_client_commande->AutoSize = true;
			this->txt_id_client_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_id_client_commande->Location = System::Drawing::Point(229, 419);
			this->txt_id_client_commande->Name = L"txt_id_client_commande";
			this->txt_id_client_commande->Size = System::Drawing::Size(167, 16);
			this->txt_id_client_commande->TabIndex = 32;
			this->txt_id_client_commande->Text = L"id_client (voir gestionclient)";
			// 
			// id_client_commande
			// 
			this->id_client_commande->Location = System::Drawing::Point(229, 433);
			this->id_client_commande->Multiline = true;
			this->id_client_commande->Name = L"id_client_commande";
			this->id_client_commande->Size = System::Drawing::Size(294, 31);
			this->id_client_commande->TabIndex = 31;
			// 
			// add_commande
			// 
			this->add_commande->BackColor = System::Drawing::Color::PaleGreen;
			this->add_commande->Location = System::Drawing::Point(569, 483);
			this->add_commande->Name = L"add_commande";
			this->add_commande->Size = System::Drawing::Size(253, 85);
			this->add_commande->TabIndex = 35;
			this->add_commande->Text = L"Ajouter une commande";
			this->add_commande->UseVisualStyleBackColor = false;
			// 
			// txt_date_emision_commande
			// 
			this->txt_date_emision_commande->AutoSize = true;
			this->txt_date_emision_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_date_emision_commande->Location = System::Drawing::Point(229, 469);
			this->txt_date_emision_commande->Name = L"txt_date_emision_commande";
			this->txt_date_emision_commande->Size = System::Drawing::Size(171, 16);
			this->txt_date_emision_commande->TabIndex = 37;
			this->txt_date_emision_commande->Text = L"date d\'emision (aujourd\'hui)";
			// 
			// Date_emision_commande
			// 
			this->Date_emision_commande->Location = System::Drawing::Point(229, 483);
			this->Date_emision_commande->Multiline = true;
			this->Date_emision_commande->Name = L"Date_emision_commande";
			this->Date_emision_commande->Size = System::Drawing::Size(294, 31);
			this->Date_emision_commande->TabIndex = 36;
			// 
			// txt_date_livraison_commande
			// 
			this->txt_date_livraison_commande->AutoSize = true;
			this->txt_date_livraison_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_date_livraison_commande->Location = System::Drawing::Point(229, 525);
			this->txt_date_livraison_commande->Name = L"txt_date_livraison_commande";
			this->txt_date_livraison_commande->Size = System::Drawing::Size(167, 16);
			this->txt_date_livraison_commande->TabIndex = 39;
			this->txt_date_livraison_commande->Text = L"Date livraison (AAAA-MM-JJ)";
			// 
			// Date_livraison_commande
			// 
			this->Date_livraison_commande->Location = System::Drawing::Point(229, 539);
			this->Date_livraison_commande->Multiline = true;
			this->Date_livraison_commande->Name = L"Date_livraison_commande";
			this->Date_livraison_commande->Size = System::Drawing::Size(294, 31);
			this->Date_livraison_commande->TabIndex = 38;
			// 
			// txt_id_article_commande
			// 
			this->txt_id_article_commande->AutoSize = true;
			this->txt_id_article_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_id_article_commande->Location = System::Drawing::Point(229, 581);
			this->txt_id_article_commande->Name = L"txt_id_article_commande";
			this->txt_id_article_commande->Size = System::Drawing::Size(151, 16);
			this->txt_id_article_commande->TabIndex = 41;
			this->txt_id_article_commande->Text = L"ID d\'article (gestion stock)";
			// 
			// id_article_commande
			// 
			this->id_article_commande->Location = System::Drawing::Point(229, 595);
			this->id_article_commande->Multiline = true;
			this->id_article_commande->Name = L"id_article_commande";
			this->id_article_commande->Size = System::Drawing::Size(294, 31);
			this->id_article_commande->TabIndex = 40;
			// 
			// txt_quantite_article_commande
			// 
			this->txt_quantite_article_commande->AutoSize = true;
			this->txt_quantite_article_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_quantite_article_commande->Location = System::Drawing::Point(229, 641);
			this->txt_quantite_article_commande->Name = L"txt_quantite_article_commande";
			this->txt_quantite_article_commande->Size = System::Drawing::Size(144, 16);
			this->txt_quantite_article_commande->TabIndex = 43;
			this->txt_quantite_article_commande->Text = L"Quantite d\'articles";
			// 
			// quantite_article_commande
			// 
			this->quantite_article_commande->Location = System::Drawing::Point(229, 655);
			this->quantite_article_commande->Multiline = true;
			this->quantite_article_commande->Name = L"quantite_article_commande";
			this->quantite_article_commande->Size = System::Drawing::Size(294, 31);
			this->quantite_article_commande->TabIndex = 42;
			// 
			// panier_moyen_stats
			// 
			this->panier_moyen_stats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panier_moyen_stats->Location = System::Drawing::Point(250, 420);
			this->panier_moyen_stats->Name = L"panier_moyen_stats";
			this->panier_moyen_stats->Size = System::Drawing::Size(180, 60);
			this->panier_moyen_stats->TabIndex = 10;
			this->panier_moyen_stats->Text = L"Panier Moyen";
			this->panier_moyen_stats->UseVisualStyleBackColor = true;
			this->panier_moyen_stats->Click += gcnew System::EventHandler(this, &MyForm::panier_moyen_stats_Click);
			// 
			// liste_mois_stats
			// 
			this->liste_mois_stats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->liste_mois_stats->FormattingEnabled = true;
			this->liste_mois_stats->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Janvier", L"Fevrier", L"Mars", L"Avril",
					L"Mai", L"Juin", L"Juillet", L"Aout", L"Septembre", L"Octobre", L"Novembre", L"Decembre"
			});
			this->liste_mois_stats->Location = System::Drawing::Point(640, 430);
			this->liste_mois_stats->Name = L"liste_mois_stats";
			this->liste_mois_stats->Size = System::Drawing::Size(120, 25);
			this->liste_mois_stats->TabIndex = 10;
			this->liste_mois_stats->Text = L"Mois";
			this->liste_mois_stats->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::liste_mois_SelectedIndexChanged);
			// 
			// chiffre_affaire
			// 
			this->chiffre_affaire->AutoSize = true;
			this->chiffre_affaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chiffre_affaire->Location = System::Drawing::Point(640, 420);
			this->chiffre_affaire->Name = L"chiffre_affaire";
			this->chiffre_affaire->Size = System::Drawing::Size(180, 60);
			this->chiffre_affaire->TabIndex = 11;
			this->chiffre_affaire->Text = L"Chiffre d\'affaire";
			this->chiffre_affaire->Click += gcnew System::EventHandler(this, &MyForm::label_mois_Click);
			// 
			// produits_reapprovision_stats
			// 
			this->produits_reapprovision_stats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->produits_reapprovision_stats->Location = System::Drawing::Point(250, 490);
			this->produits_reapprovision_stats->Name = L"produits_reapprovision_stats";
			this->produits_reapprovision_stats->Size = System::Drawing::Size(180, 60);
			this->produits_reapprovision_stats->TabIndex = 10;
			this->produits_reapprovision_stats->Text = L"Produits a reapprovisionner";
			this->produits_reapprovision_stats->UseVisualStyleBackColor = true;
			this->produits_reapprovision_stats->Click += gcnew System::EventHandler(this, &MyForm::produits_reapprovision_Click);
			// 
			// articles_plus_vendus_stats
			// 
			this->articles_plus_vendus_stats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->articles_plus_vendus_stats->Location = System::Drawing::Point(450, 420);
			this->articles_plus_vendus_stats->Name = L"articles_plus_vendus_stats";
			this->articles_plus_vendus_stats->Size = System::Drawing::Size(90, 60);
			this->articles_plus_vendus_stats->TabIndex = 10;
			this->articles_plus_vendus_stats->Text = L"10 Articles les plus vendus";
			this->articles_plus_vendus_stats->UseVisualStyleBackColor = true;
			this->articles_plus_vendus_stats->Click += gcnew System::EventHandler(this, &MyForm::articles_plus_vendus_Click);
			// 
			// articles_moins_vendus_stats
			// 
			this->articles_moins_vendus_stats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->articles_moins_vendus_stats->Location = System::Drawing::Point(540, 420);
			this->articles_moins_vendus_stats->Name = L"articles_moins_vendus_stats";
			this->articles_moins_vendus_stats->Size = System::Drawing::Size(90, 60);
			this->articles_moins_vendus_stats->TabIndex = 10;
			this->articles_moins_vendus_stats->Text = L"10 articles les moins vendus";
			this->articles_moins_vendus_stats->UseVisualStyleBackColor = true;
			this->articles_moins_vendus_stats->Click += gcnew System::EventHandler(this, &MyForm::articles_moins_vendus_Click);
			// 
			// valeur_commerciale_stock_stats
			// 
			this->valeur_commerciale_stock_stats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->valeur_commerciale_stock_stats->Location = System::Drawing::Point(450, 490);
			this->valeur_commerciale_stock_stats->Name = L"valeur_commerciale_stock_stats";
			this->valeur_commerciale_stock_stats->Size = System::Drawing::Size(90, 60);
			this->valeur_commerciale_stock_stats->TabIndex = 10;
			this->valeur_commerciale_stock_stats->Text = L"Valeur commerciale du stock";
			this->valeur_commerciale_stock_stats->UseVisualStyleBackColor = true;
			this->valeur_commerciale_stock_stats->Click += gcnew System::EventHandler(this, &MyForm::valeur_commerciale_stock_Click);
			// 
			// valeur_achat_stock_stats
			// 
			this->valeur_achat_stock_stats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->valeur_achat_stock_stats->Location = System::Drawing::Point(540, 490);
			this->valeur_achat_stock_stats->Name = L"valeur_achat_stock_stats";
			this->valeur_achat_stock_stats->Size = System::Drawing::Size(90, 60);
			this->valeur_achat_stock_stats->TabIndex = 10;
			this->valeur_achat_stock_stats->Text = L"Valeur d\'achat du stock";
			this->valeur_achat_stock_stats->UseVisualStyleBackColor = true;
			this->valeur_achat_stock_stats->Click += gcnew System::EventHandler(this, &MyForm::valeur_achat_stock_Click);
			// 
			// nom_client_stats
			// 
			this->nom_client_stats->Location = System::Drawing::Point(830, 430);
			this->nom_client_stats->Name = L"nom_client_stats";
			this->nom_client_stats->Size = System::Drawing::Size(200, 22);
			this->nom_client_stats->TabIndex = 10;
			// 
			// label_nom_client_stats
			// 
			this->label_nom_client_stats->AutoSize = true;
			this->label_nom_client_stats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_nom_client_stats->Location = System::Drawing::Point(830, 410);
			this->label_nom_client_stats->Name = L"label_nom_client_stats";
			this->label_nom_client_stats->Size = System::Drawing::Size(180, 60);
			this->label_nom_client_stats->TabIndex = 11;
			this->label_nom_client_stats->Text = L"Nom du client";
			this->label_nom_client_stats->Click += gcnew System::EventHandler(this, &MyForm::lab_nom_client_stats_Click);
			// 
			// prenom_client_stats
			// 
			this->prenom_client_stats->Location = System::Drawing::Point(830, 490);
			this->prenom_client_stats->Name = L"prenom_client_stats";
			this->prenom_client_stats->Size = System::Drawing::Size(200, 22);
			this->prenom_client_stats->TabIndex = 10;
			// 
			// lab_prenom_client_stats
			// 
			this->lab_prenom_client_stats->AutoSize = true;
			this->lab_prenom_client_stats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lab_prenom_client_stats->Location = System::Drawing::Point(830, 470);
			this->lab_prenom_client_stats->Name = L"lab_prenom_client_stats";
			this->lab_prenom_client_stats->Size = System::Drawing::Size(180, 60);
			this->lab_prenom_client_stats->TabIndex = 11;
			this->lab_prenom_client_stats->Text = L"Prenom du client";
			this->lab_prenom_client_stats->Click += gcnew System::EventHandler(this, &MyForm::lab_prenom_client_stats_Click);
			// 
			// ddn_client_stats
			// 
			this->ddn_client_stats->Location = System::Drawing::Point(830, 550);
			this->ddn_client_stats->Name = L"ddn_client_stats";
			this->ddn_client_stats->Size = System::Drawing::Size(200, 22);
			this->ddn_client_stats->TabIndex = 10;
			// 
			// lab_ddn_client_stats
			// 
			this->lab_ddn_client_stats->AutoSize = true;
			this->lab_ddn_client_stats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lab_ddn_client_stats->Location = System::Drawing::Point(830, 515);
			this->lab_ddn_client_stats->Name = L"lab_ddn_client_stats";
			this->lab_ddn_client_stats->Size = System::Drawing::Size(180, 60);
			this->lab_ddn_client_stats->TabIndex = 11;
			this->lab_ddn_client_stats->Text = L"Date de naissance du client \r\n(AAAA-MM-JJ)";
			// 
			// bouton_simulations
			// 
			this->bouton_simulations->BackColor = System::Drawing::Color::LightSkyBlue;
			this->bouton_simulations->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bouton_simulations->Location = System::Drawing::Point(32, 800);
			this->bouton_simulations->Name = L"bouton_simulations";
			this->bouton_simulations->Size = System::Drawing::Size(230, 160);
			this->bouton_simulations->TabIndex = 10;
			this->bouton_simulations->Text = L"Simulations";
			this->bouton_simulations->UseVisualStyleBackColor = false;
			this->bouton_simulations->Click += gcnew System::EventHandler(this, &MyForm::bouton_simulations_Click);
			// 
			// btn_ajouter_article_stock
			// 
			this->btn_ajouter_article_stock->BackColor = System::Drawing::Color::LightGreen;
			this->btn_ajouter_article_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_ajouter_article_stock->Location = System::Drawing::Point(297, 475);
			this->btn_ajouter_article_stock->Name = L"btn_ajouter_article_stock";
			this->btn_ajouter_article_stock->Size = System::Drawing::Size(195, 106);
			this->btn_ajouter_article_stock->TabIndex = 11;
			this->btn_ajouter_article_stock->Text = L"Ajouter un article";
			this->btn_ajouter_article_stock->UseVisualStyleBackColor = false;
			// 
			// btn_maj_article_stock
			// 
			this->btn_maj_article_stock->BackColor = System::Drawing::Color::CornflowerBlue;
			this->btn_maj_article_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_maj_article_stock->Location = System::Drawing::Point(297, 604);
			this->btn_maj_article_stock->Name = L"btn_maj_article_stock";
			this->btn_maj_article_stock->Size = System::Drawing::Size(195, 108);
			this->btn_maj_article_stock->TabIndex = 12;
			this->btn_maj_article_stock->Text = L"Mettre a jour un article";
			this->btn_maj_article_stock->UseVisualStyleBackColor = false;
			// 
			// btn_sup_article_stock
			// 
			this->btn_sup_article_stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->btn_sup_article_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_sup_article_stock->Location = System::Drawing::Point(498, 475);
			this->btn_sup_article_stock->Name = L"btn_sup_article_stock";
			this->btn_sup_article_stock->Size = System::Drawing::Size(193, 106);
			this->btn_sup_article_stock->TabIndex = 13;
			this->btn_sup_article_stock->Text = L"Supprimer un article";
			this->btn_sup_article_stock->UseVisualStyleBackColor = false;
			this->btn_sup_article_stock->Click += gcnew System::EventHandler(this, &MyForm::btn_afficher_article_Click);
			// 
			// btn_afficher_article_stock
			// 
			this->btn_afficher_article_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_afficher_article_stock->Location = System::Drawing::Point(498, 604);
			this->btn_afficher_article_stock->Name = L"btn_afficher_article_stock";
			this->btn_afficher_article_stock->Size = System::Drawing::Size(195, 108);
			this->btn_afficher_article_stock->TabIndex = 14;
			this->btn_afficher_article_stock->Text = L"Afficher un article";
			this->btn_afficher_article_stock->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1900, 1000);
			this->Controls->Add(this->bouton_simulations);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_GestionStatistique);
			this->Controls->Add(this->btn_GestionStock);
			this->Controls->Add(this->btn_GestionCommande);
			this->Controls->Add(this->btn_GestionClient);
			this->Controls->Add(this->btn_GestionPersonnel);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
		{
			this->oSvc = gcnew NS_Comp_SvcClient::CLservices();
		}


	private: System::Void btn_GestionPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		b = 1;
		couleur(b);
		windformaffiche(0);
		this->dataGridView1->Refresh();
		windformaffiche(b);
	}
	private: System::Void btn_GestionClient_Click(System::Object^ sender, System::EventArgs^ e) {
		b = 2;
		couleur(b);
		windformaffiche(0);
		this->dataGridView1->Refresh();
		windformaffiche(b);


	}
	private: System::Void btn_GestionCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		b = 3;
		couleur(b);
		windformaffiche(0);
		this->dataGridView1->Refresh();
		windformaffiche(b);


	}
	private: System::Void btn_GestionStock_Click(System::Object^ sender, System::EventArgs^ e) {
		b = 4;
		couleur(b);
		windformaffiche(0);
		this->dataGridView1->Refresh();
		windformaffiche(b);


	}
	private: System::Void btn_GestionStatistique_Click(System::Object^ sender, System::EventArgs^ e) {
		b = 5;
		couleur(b);
		windformaffiche(0);
		this->dataGridView1->Refresh();
		windformaffiche(b);

	}
	private: System::Void bouton_simulations_Click(System::Object^ sender, System::EventArgs^ e) {
		b = 6;
		couleur(b);
		windformaffiche(0);
		this->dataGridView1->Refresh();
		windformaffiche(b);
	}



		   void couleur(int a) {
			   this->btn_GestionPersonnel->BackColor = System::Drawing::Color::LightSkyBlue;
			   this->btn_GestionStock->BackColor = System::Drawing::Color::LightSkyBlue;
			   this->btn_GestionStatistique->BackColor = System::Drawing::Color::LightSkyBlue;
			   this->btn_GestionCommande->BackColor = System::Drawing::Color::LightSkyBlue;
			   this->btn_GestionClient->BackColor = System::Drawing::Color::LightSkyBlue;
			   switch (a)
			   {
			   case 1: this->btn_GestionPersonnel->BackColor = System::Drawing::Color::SteelBlue; break;
			   case 2: this->btn_GestionClient->BackColor = System::Drawing::Color::SteelBlue; break;
			   case 3: this->btn_GestionCommande->BackColor = System::Drawing::Color::SteelBlue; break;
			   case 4: this->btn_GestionStock->BackColor = System::Drawing::Color::SteelBlue; break;
			   case 5: this->btn_GestionStatistique->BackColor = System::Drawing::Color::SteelBlue; break;
			   }
		   }

		   void windformaffiche(int a) {
			   switch (a)
			   {
			   case 0:
				   this->Controls->Remove(this->txt_ville_F);
				   this->Controls->Remove(this->txt_ville_L);
				   this->Controls->Remove(this->txt_CP_L);
				   this->Controls->Remove(this->txt_CP_F);
				   this->Controls->Remove(this->txt_AP_L);
				   this->Controls->Remove(this->txt_AP_F);
				   this->Controls->Remove(this->txt_numeroclient);
				   this->Controls->Remove(this->txt_prenom);
				   this->Controls->Remove(this->txt_Pachat);
				   this->Controls->Remove(this->txt_DNN);
				   this->Controls->Remove(this->txt_nom);
				   this->Controls->Remove(this->txt_adresseL);
				   this->Controls->Remove(this->txt_AdresseF);
				   this->Controls->Remove(this->ville_L);
				   this->Controls->Remove(this->CP_L);
				   this->Controls->Remove(this->AP_L);
				   this->Controls->Remove(this->ville_F);
				   this->Controls->Remove(this->CP_F);
				   this->Controls->Remove(this->AP_F);
				   this->Controls->Remove(this->Date_Pachat_client);
				   this->Controls->Remove(this->numero_client);
				   this->Controls->Remove(this->DNN);
				   this->Controls->Remove(this->prenom);
				   this->Controls->Remove(this->nom);
				   this->Controls->Remove(this->txt_id_superieur);
				   this->Controls->Remove(this->id_superieur);
				   this->Controls->Remove(this->txt_ville_personnel);
				   this->Controls->Remove(this->ville_personnel);
				   this->Controls->Remove(this->txt_CP_personnel);
				   this->Controls->Remove(this->CP_personnel);
				   this->Controls->Remove(this->txt_AP_personnel);
				   this->Controls->Remove(this->AP_personnel);
				   this->Controls->Remove(this->txt_prenom_personnel);
				   this->Controls->Remove(this->prenom_personnel);
				   this->Controls->Remove(this->txt_nom_personnel);
				   this->Controls->Remove(this->nom_personnel);
				   this->Controls->Remove(this->btn_afficher);
				   this->Controls->Remove(this->btn_upd);
				   this->Controls->Remove(this->btn_supp);
				   this->Controls->Remove(this->btn_add);
				   this->Controls->Remove(this->txt_quantite_article_commande);
				   this->Controls->Remove(this->quantite_article_commande);
				   this->Controls->Remove(this->txt_id_article_commande);
				   this->Controls->Remove(this->id_article_commande);
				   this->Controls->Remove(this->txt_date_livraison_commande);
				   this->Controls->Remove(this->Date_livraison_commande);
				   this->Controls->Remove(this->txt_date_emision_commande);
				   this->Controls->Remove(this->Date_emision_commande);
				   this->Controls->Remove(this->add_commande);
				   this->Controls->Remove(this->txt_id_client_commande);
				   this->Controls->Remove(this->id_client_commande);
				   this->Controls->Remove(this->txt_ref_commande);
				   this->Controls->Remove(this->ref_commande);
				   this->Controls->Remove(this->panier_moyen_stats);
				   this->Controls->Remove(this->chiffre_affaire);
				   this->Controls->Remove(this->liste_mois_stats);
				   this->Controls->Remove(this->produits_reapprovision_stats);
				   this->Controls->Remove(this->articles_plus_vendus_stats);
				   this->Controls->Remove(this->articles_moins_vendus_stats);
				   this->Controls->Remove(this->valeur_commerciale_stock_stats);
				   this->Controls->Remove(this->valeur_achat_stock_stats);
				   this->Controls->Remove(this->label_nom_client_stats);
				   this->Controls->Remove(this->nom_client_stats);
				   this->Controls->Remove(this->lab_prenom_client_stats);
				   this->Controls->Remove(this->prenom_client_stats);
				   this->Controls->Remove(this->lab_ddn_client_stats);
				   this->Controls->Remove(this->ddn_client_stats);
				   this->Controls->Remove(this->btn_afficher_article_stock);
				   this->Controls->Remove(this->btn_sup_article_stock);
				   this->Controls->Remove(this->btn_maj_article_stock);
				   this->Controls->Remove(this->btn_ajouter_article_stock);
				   break;

			   case 1:
				   this->Controls->Add(this->btn_afficher);
				   this->Controls->Add(this->btn_upd);
				   this->Controls->Add(this->btn_supp);
				   this->Controls->Add(this->btn_add);
				   this->Controls->Add(this->txt_id_superieur);
				   this->Controls->Add(this->id_superieur);
				   this->Controls->Add(this->txt_ville_personnel);
				   this->Controls->Add(this->ville_personnel);
				   this->Controls->Add(this->txt_CP_personnel);
				   this->Controls->Add(this->CP_personnel);
				   this->Controls->Add(this->txt_AP_personnel);
				   this->Controls->Add(this->AP_personnel);
				   this->Controls->Add(this->txt_prenom_personnel);
				   this->Controls->Add(this->prenom_personnel);
				   this->Controls->Add(this->txt_nom_personnel);
				   this->Controls->Add(this->nom_personnel);
				   break;
			   case 2:
				   this->Controls->Add(this->btn_afficher);
				   this->Controls->Add(this->btn_upd);
				   this->Controls->Add(this->btn_supp);
				   this->Controls->Add(this->btn_add);
				   this->Controls->Add(this->txt_ville_F);
				   this->Controls->Add(this->txt_ville_L);
				   this->Controls->Add(this->txt_CP_L);
				   this->Controls->Add(this->txt_CP_F);
				   this->Controls->Add(this->txt_AP_L);
				   this->Controls->Add(this->txt_AP_F);
				   this->Controls->Add(this->txt_numeroclient);
				   this->Controls->Add(this->txt_prenom);
				   this->Controls->Add(this->txt_Pachat);
				   this->Controls->Add(this->txt_DNN);
				   this->Controls->Add(this->txt_nom);
				   this->Controls->Add(this->txt_adresseL);
				   this->Controls->Add(this->txt_AdresseF);
				   this->Controls->Add(this->ville_L);
				   this->Controls->Add(this->CP_L);
				   this->Controls->Add(this->AP_L);
				   this->Controls->Add(this->ville_F);
				   this->Controls->Add(this->CP_F);
				   this->Controls->Add(this->AP_F);
				   this->Controls->Add(this->Date_Pachat_client);
				   this->Controls->Add(this->numero_client);
				   this->Controls->Add(this->DNN);
				   this->Controls->Add(this->prenom);
				   this->Controls->Add(this->nom);
				   break;
			   case 3:
				   this->Controls->Add(this->txt_quantite_article_commande);
				   this->Controls->Add(this->quantite_article_commande);
				   this->Controls->Add(this->txt_id_article_commande);
				   this->Controls->Add(this->id_article_commande);
				   this->Controls->Add(this->txt_date_livraison_commande);
				   this->Controls->Add(this->Date_livraison_commande);
				   this->Controls->Add(this->txt_date_emision_commande);
				   this->Controls->Add(this->Date_emision_commande);
				   this->Controls->Add(this->add_commande);
				   this->Controls->Add(this->txt_id_client_commande);
				   this->Controls->Add(this->id_client_commande);
				   this->Controls->Add(this->txt_ref_commande);
				   this->Controls->Add(this->ref_commande);
				   break;
			   case 4:
				   this->Controls->Add(this->btn_afficher_article_stock);
				   this->Controls->Add(this->btn_sup_article_stock);
				   this->Controls->Add(this->btn_maj_article_stock);
				   this->Controls->Add(this->btn_ajouter_article_stock);
				   break;
			   case 5:
				   this->Controls->Add(this->panier_moyen_stats);
				   this->Controls->Add(this->chiffre_affaire);
				   this->Controls->Add(this->liste_mois_stats);
				   this->Controls->Add(this->produits_reapprovision_stats);
				   this->Controls->Add(this->articles_plus_vendus_stats);
				   this->Controls->Add(this->articles_moins_vendus_stats);
				   this->Controls->Add(this->valeur_commerciale_stock_stats);
				   this->Controls->Add(this->valeur_achat_stock_stats);
				   this->Controls->Add(this->label_nom_client_stats);
				   this->Controls->Add(this->nom_client_stats);
				   this->Controls->Add(this->lab_prenom_client_stats);
				   this->Controls->Add(this->prenom_client_stats);
				   this->Controls->Add(this->lab_ddn_client_stats);
				   this->Controls->Add(this->ddn_client_stats);
				   break;
			   case 6:
				   break;
			   }
		   }



		  

	private: System::Void btn_afficher_click(System::Object^ sender, System::EventArgs^ e) {
		//affichage personnel
		if (b == 2) {
			this->dataGridView1->Refresh();
			this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "Rsl";
			
		}
	}
	private: System::Void btn_add_click(System::Object^ sender, System::EventArgs^ e) {
		//affichage personnel
		if (b == 2) {
		this->dataGridView1->Refresh();
		DateTime DateNN, DatePahat;
		int codePostalL, codePostalF;
		try {			 DateNN = System::Convert::ToDateTime(DNN->Text);
						 DatePahat = System::Convert::ToDateTime(Date_Pachat_client->Text);		}
		catch (FormatException^ e) {MessageBox::Show("Erreur dans les Dates", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Information);}
		try {			codePostalL = System::Convert::ToInt32(CP_L->Text);
						codePostalF = System::Convert::ToInt32(CP_F->Text);		}
		catch (FormatException^ e) { MessageBox::Show("Erreur dans les Codes postals", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Information); }
		this->oSvc->AjouterUnePersonne(this->numero_client->Text, this->nom->Text, this->prenom->Text, DateNN, DatePahat, this->AP_L->Text, this->AP_F->Text, codePostalL, codePostalF, this->ville_L->Text, this->ville_F->Text);
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
		}
	}
	private: System::Void btn_del_click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void btn_update_click(System::Object^ sender, System::EventArgs^ e) {}



	private: System::Void panier_moyen_stats_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void liste_mois_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->liste_mois_stats->Text == L"Janvier") {

		}
		if (this->liste_mois_stats->Text == L"Fevrier") {

		}
		if (this->liste_mois_stats->Text == L"Mars") {

		}
		if (this->liste_mois_stats->Text == L"Avril") {

		}
		if (this->liste_mois_stats->Text == L"Mai") {

		}
		if (this->liste_mois_stats->Text == L"Juin") {

		}
		if (this->liste_mois_stats->Text == L"Juillet") {

		}
		if (this->liste_mois_stats->Text == L"Aout") {

		}
		if (this->liste_mois_stats->Text == L"Septembre") {

		}
		if (this->liste_mois_stats->Text == L"Octobre") {

		}
		if (this->liste_mois_stats->Text == L"Novembre") {

		}
		if (this->liste_mois_stats->Text == L"Decembre") {

		}
	}
	private: System::Void label_mois_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void produits_reapprovision_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void articles_plus_vendus_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void articles_moins_vendus_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void valeur_commerciale_stock_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void valeur_achat_stock_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lab_nom_client_stats_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lab_prenom_client_stats_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btn_afficher_article_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}