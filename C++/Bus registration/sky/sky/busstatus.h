#pragma once

namespace sky {

	using namespace System;
	using namespace System::Runtime;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for busstatus
	/// </summary>
	public ref class busstatus : public System::Windows::Forms::Form
	{
	public:
		busstatus(String^ a)
		{
			InitializeComponent();
			plate_txt->Text = a;
			DateTime b = DateTime::Now;
			timebox1->Text = b.ToString();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~busstatus()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox2;
	protected:
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  ic_txt;

	private: System::Windows::Forms::TextBox^  password_txt;
	private: System::Windows::Forms::TextBox^  hp_txt;
	private: System::Windows::Forms::TextBox^  address_txt;
	private: System::Windows::Forms::TextBox^  name_txt;
	private: System::Windows::Forms::TextBox^  id_txt;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  remaining;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  day2;
	private: System::Windows::Forms::TextBox^  day;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  brand_txt;
	private: System::Windows::Forms::TextBox^  cc_txt;
	private: System::Windows::Forms::TextBox^  type_txt;
	private: System::Windows::Forms::TextBox^  plate_txt;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  status;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  penalty;
	private: System::Windows::Forms::TextBox^  reason;
	private: System::Windows::Forms::TextBox^  date2;
	private: System::Windows::Forms::TextBox^  date1;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::ComboBox^  history;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  timebox1;



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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->ic_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->hp_txt = (gcnew System::Windows::Forms::TextBox());
			this->address_txt = (gcnew System::Windows::Forms::TextBox());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->remaining = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->day2 = (gcnew System::Windows::Forms::TextBox());
			this->day = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->brand_txt = (gcnew System::Windows::Forms::TextBox());
			this->cc_txt = (gcnew System::Windows::Forms::TextBox());
			this->type_txt = (gcnew System::Windows::Forms::TextBox());
			this->plate_txt = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->status = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->penalty = (gcnew System::Windows::Forms::TextBox());
			this->reason = (gcnew System::Windows::Forms::TextBox());
			this->date2 = (gcnew System::Windows::Forms::TextBox());
			this->date1 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->history = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timebox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->ic_txt);
			this->groupBox2->Controls->Add(this->password_txt);
			this->groupBox2->Controls->Add(this->hp_txt);
			this->groupBox2->Controls->Add(this->address_txt);
			this->groupBox2->Controls->Add(this->name_txt);
			this->groupBox2->Controls->Add(this->id_txt);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(12, 33);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(352, 290);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Owner Information";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(8, 98);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(131, 13);
			this->label14->TabIndex = 12;
			this->label14->Text = L"IC                                    : ";
			// 
			// ic_txt
			// 
			this->ic_txt->Enabled = false;
			this->ic_txt->Location = System::Drawing::Point(145, 98);
			this->ic_txt->Name = L"ic_txt";
			this->ic_txt->Size = System::Drawing::Size(124, 20);
			this->ic_txt->TabIndex = 11;
			// 
			// password_txt
			// 
			this->password_txt->Enabled = false;
			this->password_txt->Location = System::Drawing::Point(145, 259);
			this->password_txt->MaxLength = 10;
			this->password_txt->Name = L"password_txt";
			this->password_txt->Size = System::Drawing::Size(124, 20);
			this->password_txt->TabIndex = 9;
			// 
			// hp_txt
			// 
			this->hp_txt->Enabled = false;
			this->hp_txt->Location = System::Drawing::Point(145, 228);
			this->hp_txt->Name = L"hp_txt";
			this->hp_txt->Size = System::Drawing::Size(124, 20);
			this->hp_txt->TabIndex = 8;
			// 
			// address_txt
			// 
			this->address_txt->Enabled = false;
			this->address_txt->Location = System::Drawing::Point(145, 131);
			this->address_txt->Multiline = true;
			this->address_txt->Name = L"address_txt";
			this->address_txt->Size = System::Drawing::Size(163, 81);
			this->address_txt->TabIndex = 7;
			// 
			// name_txt
			// 
			this->name_txt->Enabled = false;
			this->name_txt->Location = System::Drawing::Point(145, 62);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(124, 20);
			this->name_txt->TabIndex = 6;
			// 
			// id_txt
			// 
			this->id_txt->Enabled = false;
			this->id_txt->Location = System::Drawing::Point(145, 28);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(124, 20);
			this->id_txt->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 262);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Password                        :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 231);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Hand Phone Number      : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Address                           : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Name                              : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ID                                    : ";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->brand_txt);
			this->groupBox3->Controls->Add(this->cc_txt);
			this->groupBox3->Controls->Add(this->type_txt);
			this->groupBox3->Controls->Add(this->plate_txt);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Location = System::Drawing::Point(408, 23);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(349, 300);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Bus Information";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->remaining);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->day2);
			this->groupBox4->Controls->Add(this->day);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Location = System::Drawing::Point(10, 168);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(333, 126);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Road Tax";
			// 
			// remaining
			// 
			this->remaining->Enabled = false;
			this->remaining->Location = System::Drawing::Point(119, 94);
			this->remaining->Name = L"remaining";
			this->remaining->Size = System::Drawing::Size(122, 20);
			this->remaining->TabIndex = 5;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 97);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(107, 13);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Day remaining          :";
			// 
			// day2
			// 
			this->day2->Enabled = false;
			this->day2->Location = System::Drawing::Point(189, 46);
			this->day2->Name = L"day2";
			this->day2->Size = System::Drawing::Size(122, 20);
			this->day2->TabIndex = 3;
			// 
			// day
			// 
			this->day->Enabled = false;
			this->day->Location = System::Drawing::Point(6, 46);
			this->day->Name = L"day";
			this->day->Size = System::Drawing::Size(122, 20);
			this->day->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(195, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(99, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Deadline Road Tax";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(17, 30);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Date Pay Road Tax";
			// 
			// brand_txt
			// 
			this->brand_txt->Enabled = false;
			this->brand_txt->Location = System::Drawing::Point(115, 112);
			this->brand_txt->Name = L"brand_txt";
			this->brand_txt->Size = System::Drawing::Size(136, 20);
			this->brand_txt->TabIndex = 7;
			// 
			// cc_txt
			// 
			this->cc_txt->Enabled = false;
			this->cc_txt->Location = System::Drawing::Point(115, 81);
			this->cc_txt->Name = L"cc_txt";
			this->cc_txt->Size = System::Drawing::Size(136, 20);
			this->cc_txt->TabIndex = 6;
			// 
			// type_txt
			// 
			this->type_txt->Enabled = false;
			this->type_txt->Location = System::Drawing::Point(115, 48);
			this->type_txt->Name = L"type_txt";
			this->type_txt->Size = System::Drawing::Size(136, 20);
			this->type_txt->TabIndex = 5;
			// 
			// plate_txt
			// 
			this->plate_txt->Enabled = false;
			this->plate_txt->Location = System::Drawing::Point(115, 20);
			this->plate_txt->Name = L"plate_txt";
			this->plate_txt->Size = System::Drawing::Size(136, 20);
			this->plate_txt->TabIndex = 4;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 119);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Bus Brand            :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 84);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Capacity               :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Bus Type              :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 23);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Bus Plate              :";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::Wheat;
			this->groupBox6->Controls->Add(this->label20);
			this->groupBox6->Controls->Add(this->label19);
			this->groupBox6->Controls->Add(this->status);
			this->groupBox6->Controls->Add(this->label18);
			this->groupBox6->Controls->Add(this->penalty);
			this->groupBox6->Controls->Add(this->reason);
			this->groupBox6->Controls->Add(this->date2);
			this->groupBox6->Controls->Add(this->date1);
			this->groupBox6->Controls->Add(this->label17);
			this->groupBox6->Controls->Add(this->label16);
			this->groupBox6->Location = System::Drawing::Point(296, 329);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(368, 300);
			this->groupBox6->TabIndex = 10;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Summon Detailed";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(66, 241);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(43, 13);
			this->label20->TabIndex = 9;
			this->label20->Text = L"Status :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(63, 171);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(68, 13);
			this->label19->TabIndex = 8;
			this->label19->Text = L"Penalty : RM";
			// 
			// status
			// 
			this->status->Enabled = false;
			this->status->Location = System::Drawing::Point(132, 238);
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(83, 20);
			this->status->TabIndex = 7;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(63, 106);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(50, 13);
			this->label18->TabIndex = 6;
			this->label18->Text = L"Reason :";
			// 
			// penalty
			// 
			this->penalty->Enabled = false;
			this->penalty->Location = System::Drawing::Point(132, 168);
			this->penalty->Name = L"penalty";
			this->penalty->Size = System::Drawing::Size(148, 20);
			this->penalty->TabIndex = 5;
			// 
			// reason
			// 
			this->reason->Enabled = false;
			this->reason->Location = System::Drawing::Point(132, 106);
			this->reason->Name = L"reason";
			this->reason->Size = System::Drawing::Size(148, 20);
			this->reason->TabIndex = 4;
			// 
			// date2
			// 
			this->date2->Enabled = false;
			this->date2->Location = System::Drawing::Point(218, 55);
			this->date2->Name = L"date2";
			this->date2->Size = System::Drawing::Size(104, 20);
			this->date2->TabIndex = 3;
			// 
			// date1
			// 
			this->date1->Enabled = false;
			this->date1->Location = System::Drawing::Point(48, 55);
			this->date1->Name = L"date1";
			this->date1->Size = System::Drawing::Size(116, 20);
			this->date1->TabIndex = 2;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(225, 39);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(49, 13);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Deadline";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(58, 39);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(55, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Start Date";
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::Color::Moccasin;
			this->groupBox7->Controls->Add(this->history);
			this->groupBox7->Location = System::Drawing::Point(46, 352);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(200, 266);
			this->groupBox7->TabIndex = 11;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Summon History";
			// 
			// history
			// 
			this->history->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->history->FormattingEnabled = true;
			this->history->Location = System::Drawing::Point(24, 50);
			this->history->Name = L"history";
			this->history->Size = System::Drawing::Size(121, 21);
			this->history->TabIndex = 0;
			this->history->SelectedIndexChanged += gcnew System::EventHandler(this, &busstatus::history_SelectedIndexChanged_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(695, 606);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &busstatus::button1_Click);
			// 
			// timebox1
			// 
			this->timebox1->Enabled = false;
			this->timebox1->Location = System::Drawing::Point(198, 7);
			this->timebox1->Name = L"timebox1";
			this->timebox1->Size = System::Drawing::Size(135, 20);
			this->timebox1->TabIndex = 13;
			// 
			// busstatus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(796, 641);
			this->Controls->Add(this->timebox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Name = L"busstatus";
			this->Text = L"busstatus";
			this->Load += gcnew System::EventHandler(this, &busstatus::busstatus_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void busstatus_Load(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

		//Searching people by using bus plate
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select * from workshop.owner where oid = (select oid from workshop.bus where bplate = '" + this->plate_txt->Text + "');", conDatabase);

		MySqlDataReader^ read;

		history->Items->Clear();

		try
		{
			conDatabase->Open();
			read = cmdDatabase->ExecuteReader();
			if (read->Read())
			{
				String^ id = read->GetString("oid");
				id_txt->Text = id;

				String^ name = read->GetString("oname");
				name_txt->Text = name;

				String^ ic = read->GetString("oic");
				ic_txt->Text = ic;

				String^ hp = read->GetString("ohp");
				hp_txt->Text = hp;

				String^ address = read->GetString("oaddress");
				address_txt->Text = address;

				String^ password = read->GetString("opassword");
				password_txt->Text = password;

				read->Close();
			}

		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}



		//Searching bus by using bus plate
		MySqlConnection^ conDatabase1 = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("select * from workshop.bus where bplate = '" + this->plate_txt->Text + "';", conDatabase1);

		MySqlDataReader^ read1;

		try
		{
			conDatabase1->Open();
			read1 = cmdDatabase1->ExecuteReader();
			if (read1->Read())
			{

				String^ type = read1->GetString("btype");
				type_txt->Text = type;

				String^ cc = read1->GetString("capacity");
				cc_txt->Text = cc;

				String^ brand = read1->GetString("brand");
				brand_txt->Text = brand;

				read1->Close();
			}
		}

		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);

		}


		//Searching raod tax by using bus plate
		MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase2 = gcnew MySqlCommand("select * from workshop.roadtax where bplate = '" + this->plate_txt->Text + "';", conDatabase2);

		MySqlDataReader^ read2;

		try
		{
			conDatabase2->Open();
			read2 = cmdDatabase2->ExecuteReader();
			if (read2->Read())
			{
				String^ start = read2->GetDateTime("startDate").ToString("dd-MM-yyyy");
				day->Text = start;

				String^ ends = read2->GetDateTime("endDate").ToString("dd-MM-yyyy");
				day2->Text = ends;

				read2->Close();

			}

		}

		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);

		}


		//Different Day
		MySqlConnection^ conDatabase3 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase3 = gcnew MySqlCommand("select datediff (endDate,now()) as diff from workshop.roadtax where bplate = '" + this->plate_txt->Text + "';", conDatabase3);

		MySqlDataReader^ read3;

		try
		{
			conDatabase3->Open();
			read3 = cmdDatabase3->ExecuteReader();
			if (read3->Read())
			{
				String^ dif = read3->GetInt64("diff").ToString();
				remaining->Text = dif;
			}

			read3->Close();
		}

		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);

		}

		MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase4 = gcnew MySqlCommand("select * from workshop.saman where sstatus = 'Not Paid' and busplate = '" + this->plate_txt->Text + "';", conDatabase4);

		MySqlDataReader^ read4;

		try
		{
			conDatabase4->Open();
			read4 = cmdDatabase4->ExecuteReader();

			while (read4->Read())
			{
				String^ da;
				da = read4->GetDateTime("dateSaman").ToString("yyyy-MM-dd");
				history->Items->Add(da);
			}

			if (history->SelectedItem == nullptr)
			{
				MessageBox::Show("This bus had no saman");
			}


		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}
		read4->Close();

	}
		
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
	
private: System::Void history_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";
		String^ comboval = history->Text;
		MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase4 = gcnew MySqlCommand("select * from workshop.saman where dateSaman = '" + this->history->Text + "';", conDatabase4);

		MySqlDataReader^ read4;

		try
		{
			conDatabase4->Open();
			read4 = cmdDatabase4->ExecuteReader();

			if (read4->Read())
			{
				String^ da;
				da = read4->GetDateTime("dateSaman").ToString();
				date1->Text = da;

				String^ en = read4->GetDateTime("deadline").ToString();
				date2->Text = en;

				String^ re = read4->GetString("reason");
				reason->Text = re;

				String^ pe = read4->GetString("penalty");
				penalty->Text = pe;

				String^ stat = read4->GetString("sstatus");
				status->Text = stat;

			}

		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}
		read4->Close();

	}
};
}
