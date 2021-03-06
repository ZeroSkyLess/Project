#pragma once


namespace sky {

	using namespace System;
	using namespace System::Globalization;
	using namespace System::Runtime;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for adbus
	/// </summary>
	public ref class adbus : public System::Windows::Forms::Form
	{
	public:
		adbus(void)
		{
			InitializeComponent();
			comboBox->Items->Add("Public");
			comboBox->Items->Add("Private");
			comboBox->Items->Add("School");
			comboBox1->Items->Add("less than or equal 45");
			comboBox1->Items->Add("more than 45");
			Cpass->PasswordChar = '*';
			password->PasswordChar = '*';
			password1->PasswordChar = '*';
			tabPage2->Enabled = false;

			DateTime  ga = DateTime::Now;
			datebox->Text = ga.ToString("yyyy-MM-dd");


			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~adbus()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tab1;
	protected:

	protected:
















	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  address_txt;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::TextBox^  name_txt;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  password;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;



	private: System::Windows::Forms::ComboBox^  comboBox;
	private: System::Windows::Forms::TextBox^  brand;


	private: System::Windows::Forms::TextBox^  plate;


	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  Cpass;
	private: System::Windows::Forms::TextBox^  Cid;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  price_txt;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  password1;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  userID;





	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  date;
	private: System::Windows::Forms::TextBox^  datebox;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  enddate;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::MaskedTextBox^  hp_no;
	private: System::Windows::Forms::MaskedTextBox^  ic_no;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tab1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->password1 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->address_txt = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->datebox = (gcnew System::Windows::Forms::TextBox());
			this->date = (gcnew System::Windows::Forms::Label());
			this->userID = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->Cpass = (gcnew System::Windows::Forms::TextBox());
			this->Cid = (gcnew System::Windows::Forms::TextBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->enddate = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->price_txt = (gcnew System::Windows::Forms::TextBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->brand = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->plate = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->hp_no = (gcnew System::Windows::Forms::MaskedTextBox());
			this->ic_no = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tab1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tab1
			// 
			this->tab1->Controls->Add(this->tabPage1);
			this->tab1->Controls->Add(this->tabPage2);
			this->tab1->Location = System::Drawing::Point(-1, -1);
			this->tab1->Name = L"tab1";
			this->tab1->SelectedIndex = 0;
			this->tab1->Size = System::Drawing::Size(544, 434);
			this->tab1->TabIndex = 16;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Transparent;
			this->tabPage1->Controls->Add(this->ic_no);
			this->tabPage1->Controls->Add(this->hp_no);
			this->tabPage1->Controls->Add(this->linkLabel1);
			this->tabPage1->Controls->Add(this->label24);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->password1);
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->address_txt);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->name_txt);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->password);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(536, 408);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Step 1";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(10, 15);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(40, 13);
			this->linkLabel1->TabIndex = 36;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"< back";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &adbus::linkLabel1_LinkClicked);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::Red;
			this->label24->Location = System::Drawing::Point(268, 15);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(252, 13);
			this->label24->TabIndex = 35;
			this->label24->Text = L"* ( Please finished Step 1 before proceed to Step 2 )";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(449, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 34;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &adbus::button2_Click);
			// 
			// password1
			// 
			this->password1->Location = System::Drawing::Point(179, 367);
			this->password1->MaxLength = 10;
			this->password1->Name = L"password1";
			this->password1->Size = System::Drawing::Size(130, 20);
			this->password1->TabIndex = 33;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(46, 370);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(111, 13);
			this->label21->TabIndex = 32;
			this->label21->Text = L"Comfirmed Password :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(176, 116);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 13);
			this->label8->TabIndex = 31;
			this->label8->Text = L"* eg. 931010121365";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(118, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Personal Information  ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(176, 67);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 13);
			this->label10->TabIndex = 30;
			this->label10->Text = L"* eg. Lee May Ping";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Name               :";
			// 
			// address_txt
			// 
			this->address_txt->Location = System::Drawing::Point(179, 146);
			this->address_txt->MaxLength = 100;
			this->address_txt->Multiline = true;
			this->address_txt->Name = L"address_txt";
			this->address_txt->Size = System::Drawing::Size(314, 74);
			this->address_txt->TabIndex = 24;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(176, 260);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 13);
			this->label9->TabIndex = 29;
			this->label9->Text = L"* eg. 0122134567";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"IC                     :";
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(179, 44);
			this->name_txt->MaxLength = 45;
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(265, 20);
			this->name_txt->TabIndex = 22;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Address            :";
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(179, 300);
			this->password->MaxLength = 10;
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(130, 20);
			this->password->TabIndex = 26;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(46, 237);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"H/P number     :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(46, 300);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Password         :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(176, 323);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(243, 26);
			this->label5->TabIndex = 27;
			this->label5->Text = L"* This password is used for modify your information\r\n(Maximum 10 characther)";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Transparent;
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->datebox);
			this->tabPage2->Controls->Add(this->date);
			this->tabPage2->Controls->Add(this->userID);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(536, 408);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Step 2";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(29, 376);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 20;
			this->button3->Text = L"< back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &adbus::button3_Click);
			// 
			// datebox
			// 
			this->datebox->Enabled = false;
			this->datebox->Location = System::Drawing::Point(333, 6);
			this->datebox->Name = L"datebox";
			this->datebox->Size = System::Drawing::Size(176, 20);
			this->datebox->TabIndex = 19;
			// 
			// date
			// 
			this->date->AutoSize = true;
			this->date->Location = System::Drawing::Point(368, 6);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(0, 13);
			this->date->TabIndex = 18;
			// 
			// userID
			// 
			this->userID->BackColor = System::Drawing::Color::Gainsboro;
			this->userID->Enabled = false;
			this->userID->Location = System::Drawing::Point(105, 3);
			this->userID->Name = L"userID";
			this->userID->Size = System::Drawing::Size(42, 20);
			this->userID->TabIndex = 17;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(9, 6);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(102, 13);
			this->label22->TabIndex = 14;
			this->label22->Text = L"Welcome, your id is ";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->Cpass);
			this->groupBox3->Controls->Add(this->Cid);
			this->groupBox3->Controls->Add(this->radioButton6);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Location = System::Drawing::Point(287, 224);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(237, 141);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Payment";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(4, 110);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(112, 13);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Credit card password :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(7, 79);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(102, 13);
			this->label19->TabIndex = 5;
			this->label19->Text = L"Credit card number :";
			// 
			// Cpass
			// 
			this->Cpass->Location = System::Drawing::Point(122, 107);
			this->Cpass->MaxLength = 6;
			this->Cpass->Name = L"Cpass";
			this->Cpass->Size = System::Drawing::Size(100, 20);
			this->Cpass->TabIndex = 4;
			// 
			// Cid
			// 
			this->Cid->Location = System::Drawing::Point(122, 77);
			this->Cid->MaxLength = 16;
			this->Cid->Name = L"Cid";
			this->Cid->Size = System::Drawing::Size(100, 20);
			this->Cid->TabIndex = 3;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(173, 51);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(49, 17);
			this->radioButton6->TabIndex = 2;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Cash";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &adbus::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(7, 51);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(108, 17);
			this->radioButton5->TabIndex = 1;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Credit card (BSM)";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &adbus::radioButton5_CheckedChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(5, 25);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(172, 13);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Please select the type of payment :";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->enddate);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->price_txt);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Location = System::Drawing::Point(287, 35);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(237, 176);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"RoadTax";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(104, 75);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(103, 13);
			this->label23->TabIndex = 8;
			this->label23->Text = L"Road Tax dead line:";
			// 
			// enddate
			// 
			this->enddate->Enabled = false;
			this->enddate->Location = System::Drawing::Point(104, 91);
			this->enddate->Name = L"enddate";
			this->enddate->Size = System::Drawing::Size(127, 20);
			this->enddate->TabIndex = 7;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(21, 159);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(60, 13);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Price :  RM";
			// 
			// price_txt
			// 
			this->price_txt->Enabled = false;
			this->price_txt->Location = System::Drawing::Point(83, 156);
			this->price_txt->Name = L"price_txt";
			this->price_txt->ReadOnly = true;
			this->price_txt->Size = System::Drawing::Size(81, 20);
			this->price_txt->TabIndex = 5;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(24, 121);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(54, 17);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"4 year";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &adbus::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(24, 98);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(54, 17);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"3 year";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &adbus::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(24, 75);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(54, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"2 year";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &adbus::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(24, 52);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(54, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"1 year";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &adbus::radioButton1_CheckedChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(5, 23);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(195, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Please select the year you want to buy :";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->comboBox);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->brand);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->plate);
			this->groupBox1->Location = System::Drawing::Point(9, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(258, 330);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Bus Information";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(118, 198);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &adbus::comboBox1_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(20, 52);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(91, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Bus Plate            :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(114, 75);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"* BKP 1213";
			// 
			// comboBox
			// 
			this->comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox->Location = System::Drawing::Point(118, 117);
			this->comboBox->Name = L"comboBox";
			this->comboBox->Size = System::Drawing::Size(121, 21);
			this->comboBox->Sorted = true;
			this->comboBox->TabIndex = 9;
			this->comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &adbus::comboBox_SelectedIndexChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(20, 117);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(91, 13);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Bus Type            :";
			// 
			// brand
			// 
			this->brand->Location = System::Drawing::Point(117, 270);
			this->brand->MaxLength = 45;
			this->brand->Name = L"brand";
			this->brand->Size = System::Drawing::Size(122, 20);
			this->brand->TabIndex = 8;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(17, 198);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(93, 13);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Bus Capacity       :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(20, 278);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(89, 13);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Bus Brand          :";
			// 
			// plate
			// 
			this->plate->Location = System::Drawing::Point(117, 52);
			this->plate->MaxLength = 8;
			this->plate->Name = L"plate";
			this->plate->Size = System::Drawing::Size(107, 20);
			this->plate->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(449, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Send";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &adbus::button1_Click);
			// 
			// hp_no
			// 
			this->hp_no->Location = System::Drawing::Point(179, 234);
			this->hp_no->Mask = L"00000000000";
			this->hp_no->Name = L"hp_no";
			this->hp_no->Size = System::Drawing::Size(100, 20);
			this->hp_no->TabIndex = 37;
			// 
			// ic_no
			// 
			this->ic_no->Location = System::Drawing::Point(180, 93);
			this->ic_no->Mask = L"000000000000";
			this->ic_no->Name = L"ic_no";
			this->ic_no->Size = System::Drawing::Size(100, 20);
			this->ic_no->TabIndex = 38;
			// 
			// adbus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 432);
			this->Controls->Add(this->tab1);
			this->Name = L"adbus";
			this->Text = L"adbus";
			this->tab1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int year = 0;  //year of road tax
		bool cash = false; //check wheter pay with cash
		double total; // find total price of road tax
		double price; //price for road tax
		int x = 0; // check the guest if he have choose either pay with cash or credit card
		DateTime cur = DateTime(DateTime::Now);
		DateTime endD = cur.AddYears(year);


	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		year = 1;

		DateTime endD = cur.AddYears(year);
		enddate->Text = endD.ToString("yyyy-MM-dd");

		if (comboBox->Text == "")
		{

			MessageBox::Show("The type of bus is blank, please select the type of bus");

		}

		else if (comboBox1->Text == "")
		{
			MessageBox::Show("The capacity of bus is blank, please select the capacity of bus");
		}


		else if (comboBox->Text == "Public")
		{

			price = 20;
		}

		else if (comboBox->Text == "Private")
		{

			price = 40;
		}

		else
		{

			price = 10;
		}


		if (comboBox1->Text == "more than 45")
		{
			price = 1.5 * price;

			total = price * 0.5;
			price_txt->Text = total.ToString();
		}

		else
		{
			total = price * 0.5;
			price_txt->Text = total.ToString();
		}


	}

	private: System::Void comboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		if (comboBox->Text == "Public")
		{

			price = 20;
		}

		else if (comboBox->Text == "Private")
		{

			price = 40;
		}

		else
		{

			price = 10;
		}

		if (comboBox1->Text == "more than 45")
		{
			price = 1.5 * price;

			total = price * year;
			price_txt->Text = total.ToString();
		}

		else
		{
			total = price * year;
			price_txt->Text = total.ToString();
		}

	}

	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		year = 2;

		DateTime endD = cur.AddYears(year);
		enddate->Text = endD.ToString("yyyy-MM-dd");

		if (comboBox->Text == "")
		{

			MessageBox::Show("The type of bus is blank, please select the type of bus");

		}

		else if (comboBox1->Text == "")
		{
			MessageBox::Show("The capacity of bus is blank, please select the capacity of bus");
		}

		else if (comboBox->Text == "Public")
		{

			price = 20;
		}

		else if (comboBox->Text == "Private")
		{

			price = 40;
		}

		else
		{

			price = 10;
		}


		if (comboBox1->Text == "more than 45")
		{
			price = 1.5 * price;

			total = price * year;
			price_txt->Text = total.ToString();
		}

		else
		{
			total = price * year;
			price_txt->Text = total.ToString();
		}
	}

	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		year = 3;

		DateTime endD = cur.AddYears(year);
		enddate->Text = endD.ToString("yyyy-MM-dd");

		if (comboBox->Text == "")
		{

			MessageBox::Show("The type of bus is blank, please select the type of bus");

		}

		else if (comboBox1->Text == "")
		{
			MessageBox::Show("The capacity of bus is blank, please select the capacity of bus");
		}

		else if (comboBox->Text == "Public")
		{

			price = 20;
		}

		else if (comboBox->Text == "Private")
		{

			price = 40;
		}

		else
		{

			price = 10;
		}


		if (comboBox1->Text == "more than 45")
		{
			price = 1.5 * price;

			total = price * year;
			price_txt->Text = total.ToString();
		}

		else
		{
			total = price * year;
			price_txt->Text = total.ToString();
		}
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		year = 4;

		DateTime endD = cur.AddYears(year);
		enddate->Text = endD.ToString("yyyy-MM-dd");


		if (comboBox->Text == "")
		{

			MessageBox::Show("The type of bus is blank, please select the type of bus");

		}

		else if (comboBox1->Text == "")
		{
			MessageBox::Show("The capacity of bus is blank, please select the capacity of bus");
		}

		else if (comboBox->Text == "Public")
		{

			price = 20;
		}

		else if (comboBox->Text == "Private")
		{

			price = 40;
		}

		else
		{

			price = 10;
		}


		if (comboBox1->Text == "more than 45")
		{
			price = 1.5 * price;

			total = price * year;
			price_txt->Text = total.ToString();
		}

		else
		{
			total = price * year;
			price_txt->Text = total.ToString();
		}
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (comboBox->Text == "Public")
		{

			price = 20;
		}

		else if (comboBox->Text == "Private")
		{

			price = 40;
		}

		else
		{

			price = 10;
		}

		if (comboBox1->Text == "more than 45")
		{
			price = 1.5 * price;

			total = price * year;
			price_txt->Text = total.ToString();
		}

		else
		{
			total = price * year;
			price_txt->Text = total.ToString();
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		if (MessageBox::Show("Any changing information will not accept, are you sure want to proceed?", "Bus Registration System", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{

			if (plate->Text == "")
			{
				MessageBox::Show("Please enter your Bus Plate");
			}

			else if (comboBox->Text == "")
			{
				MessageBox::Show("Please select your Bus Plate");
			}

			else if (comboBox1->Text == "")
			{
				MessageBox::Show("Please select your Bus Capacity");
			}

			else if (brand->Text == "")
			{
				MessageBox::Show("Please enter your Bus Brand");
			}

			else if (price == 0)
			{
				MessageBox::Show("Please select the year of road tax you prefer");
			}

			else if (x == 0)
			{
				MessageBox::Show("Please select the payment you are prefer");
			}

			else if (x == 0 || price == 0 || brand->Text == "" || comboBox->Text == "" || comboBox1->Text == "" || plate->Text == "")
			{
				MessageBox::Show("Please insert the blank");
			}
			else
			{
				String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";
				MySqlConnection^ conDatabase1 = gcnew MySqlConnection(constring);
				MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("select bplate from workshop.bus;", conDatabase1);
				MySqlDataReader^ myReader1;

				try{
					conDatabase1->Open();
					myReader1 = cmdDatabase1->ExecuteReader();
					String^ bus;
					bool not = true;

					while (myReader1->Read())
					{
						bus = myReader1->GetString("bplate");
						if (plate->Text == bus)
						{
							MessageBox::Show("The plate had been registered, if you were enter wrong plate number ,please try again");
							MessageBox::Show("If you want to quit, please click '< back ' back to previous page");
							not = false;
							break;
						}

					}


					if (not)
					{

						MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
						MySqlConnection^ conDatabase3 = gcnew MySqlConnection(constring);
						MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);



						// insert value of bus 
						MySqlCommand^ cmdDatabase2 = gcnew MySqlCommand("insert into workshop.bus (bplate,btype,capacity,brand,oid) values ('" + this->plate->Text + "','" + this->comboBox->Text + "','" + this->comboBox1->Text + "','" + this->brand->Text + "','" + userID->Text + "');", conDatabase2);
						MySqlDataReader^ myReader2;

						try{
							conDatabase2->Open();
							myReader2 = cmdDatabase2->ExecuteReader();
						}
						catch (Exception^ex){

							MessageBox::Show(ex->Message);
						}
						myReader2->Close();

						//insert Start date
						MySqlCommand^ cmdDatabase3 = gcnew MySqlCommand("insert into workshop.roadtax (startDate,endDate,bplate) values ('" + this->datebox->Text + "','" + this->enddate->Text + "','" + this->plate->Text + "');", conDatabase3);
						MySqlDataReader^ myReader3;

						try{
							conDatabase3->Open();
							myReader3 = cmdDatabase3->ExecuteReader();

						}
						catch (Exception^ex){

							MessageBox::Show(ex->Message);
						}
						myReader3->Close();

						//inseet value of income
						MySqlCommand^ cmdDatabase4 = gcnew MySqlCommand("insert into workshop.income (roadtax,date,plate) values ('" + total + "','" + this->datebox->Text + "','" + this->plate->Text + "');", conDatabase4);
						MySqlDataReader^ myReader4;
						try{
							conDatabase4->Open();
							myReader4 = cmdDatabase4->ExecuteReader();

							if (cash = true)
								MessageBox::Show("Insert successfully, please go to counter to pay road tax");

							else
								MessageBox::Show("Insert successfully");

							this->Visible = true;

						}
						catch (Exception^ex){

							MessageBox::Show(ex->Message);
						}
						myReader4->Close();
						this->Hide();
					}
				}

				catch (Exception^ ex)
				{

					MessageBox::Show(ex->Message);
				}
				myReader1->Close();
			}
		}

		else
			this->Visible = true;


	}

	private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		cash = false;
		Cid->Enabled = true;
		Cpass->Enabled = true;
		x = 1;
	}
	private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		cash = true;
		Cid->Enabled = false;
		Cpass->Enabled = false;
		x = 1;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Any changing information will not accept, are you sure want to proceed?", "Bus Registration System", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			if (password->Text == "")
			{
				MessageBox::Show("Please enter your password");
				this->Visible = true;
			}

			else if (password1->Text == "")
			{
				MessageBox::Show("Please enter comfirmed password");
				this->Visible = true;
			}

			else if (name_txt->Text == "")
			{
				MessageBox::Show("Please enter your name");
				this->Visible = true;
			}

			else if (address_txt->Text == "")
			{
				MessageBox::Show("Please enter your address");
				this->Visible = true;
			}

			else if (ic_no->Text == "")
			{
				MessageBox::Show("Please enter your IC");
				this->Visible = true;
			}

			else
			{

				if (password->Text == password1->Text)
				{
					String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";
					MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
					MySqlConnection^ conDatabase1 = gcnew MySqlConnection(constring);

					//insert value of owner
					MySqlCommand^ cmdDatabase = gcnew MySqlCommand("insert into workshop.owner (oic,oname,ohp,oaddress,opassword) values ('" + this->ic_no->Text + "','" + this->name_txt->Text + "','" + this->hp_no->Text + "','" + this->address_txt->Text + "','" + this->password->Text + "');", conDatabase);

					// find the owner id (error taking value from database)
					MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("SELECT * FROM workshop.owner where oic = '" + this->ic_no->Text + "';", conDatabase1);

					MySqlDataReader^ myReader;
					MySqlDataReader^ myReader1;

					try{

						conDatabase->Open();

						myReader = cmdDatabase->ExecuteReader();

						myReader->Close();

					}


					catch (Exception^ex){

						MessageBox::Show(ex->Message);
					}


					try{
						conDatabase1->Open();

						myReader1 = cmdDatabase1->ExecuteReader();

						MessageBox::Show("Saved successfully, you can proceed to Step 2 now");
						tabPage2->Enabled = true;
						tabPage2->Show();

						if (myReader1->Read())
						{
							String^ a = myReader1->GetInt32("oid").ToString();
							userID->Text = a;
						}

						myReader1->Close();

					}


					catch (Exception^ex){

						MessageBox::Show(ex->Message);
					}


				}


				else
				{
					MessageBox::Show("Your password enter wrong, please retype your password");
					password->Text = "";
					password1->Text = "";
					this->Visible = true;
				}
			}
		}
		else
			this->Visible = true;

	}

	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {

		if (MessageBox::Show("All information will be clear, are you sure want to go back?", "Bus Registration System", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			if (tabPage2->Enabled)
			{
				String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";
				MySqlConnection^ conDatabase1 = gcnew MySqlConnection(constring);
				MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("delete from workshop.owner where oname = '" + this->name_txt->Text + "';", conDatabase1);
				MySqlDataReader^ myReader1;


				try
				{
					conDatabase1->Open();
					myReader1 = cmdDatabase1->ExecuteReader();
					this->Hide();
				}

				catch (Exception^ex){

					MessageBox::Show(ex->Message);
				}


				this->Hide();
				myReader1->Close();
			}
			else
				this->Hide();
		}

		else
		{
		}

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("All information will be clear, are you sure want to go back?", "Bus Registration System", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{

			String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";
			MySqlConnection^ conDatabase1 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("delete from workshop.owner where oname = '" + this->name_txt->Text + "';", conDatabase1);
			MySqlDataReader^ myReader1;


			try
			{
				conDatabase1->Open();
				myReader1 = cmdDatabase1->ExecuteReader();
				this->Hide();
			}

			catch (Exception^ex){

				MessageBox::Show(ex->Message);
			}


			this->Hide();
			myReader1->Close();

		}

		else
		{
		}
	}
	};
}