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
	/// Summary for pay
	/// </summary>
	public ref class pay : public System::Windows::Forms::Form
	{
	public:
		pay(String^ a)
		{
			InitializeComponent();
			DateTime b = DateTime::Now;
			plate->Text = a;
			datebox->Text = b.ToString("yyyy-MM-dd");
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~pay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::TextBox^  plate;
	private: System::Windows::Forms::TextBox^  datebox;



	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::GroupBox^  Summon;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  penalty;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  reason;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  dayleft;
	private: System::Windows::Forms::TextBox^  enddate;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  box1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  roadtax;

	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::TextBox^  deadline1;
	private: System::Windows::Forms::TextBox^  price;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  dayleft2;
	private: System::Windows::Forms::TextBox^  deadline;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::MaskedTextBox^  textBox1;


	protected:

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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->plate = (gcnew System::Windows::Forms::TextBox());
			this->datebox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->Summon = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->penalty = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->reason = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dayleft = (gcnew System::Windows::Forms::TextBox());
			this->enddate = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->box1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->roadtax = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->deadline1 = (gcnew System::Windows::Forms::TextBox());
			this->price = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dayleft2 = (gcnew System::Windows::Forms::TextBox());
			this->deadline = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->Summon->SuspendLayout();
			this->roadtax->SuspendLayout();
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(13, 13);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(40, 13);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"< back";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &pay::linkLabel1_LinkClicked);
			// 
			// plate
			// 
			this->plate->Enabled = false;
			this->plate->Location = System::Drawing::Point(84, 13);
			this->plate->Name = L"plate";
			this->plate->Size = System::Drawing::Size(78, 20);
			this->plate->TabIndex = 1;
			// 
			// datebox
			// 
			this->datebox->Enabled = false;
			this->datebox->Location = System::Drawing::Point(374, 13);
			this->datebox->Name = L"datebox";
			this->datebox->Size = System::Drawing::Size(106, 20);
			this->datebox->TabIndex = 2;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::LightPink;
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Location = System::Drawing::Point(16, 116);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(205, 122);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Payment type";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(78, 52);
			this->textBox1->Mask = L"000000000000000";
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(78, 84);
			this->textBox2->MaxLength = 6;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(72, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Account";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(140, 29);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(49, 17);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Cash";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &pay::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(11, 25);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(77, 17);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Credit Card";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &pay::radioButton3_CheckedChanged);
			// 
			// Summon
			// 
			this->Summon->Controls->Add(this->button1);
			this->Summon->Controls->Add(this->penalty);
			this->Summon->Controls->Add(this->label7);
			this->Summon->Controls->Add(this->reason);
			this->Summon->Controls->Add(this->label6);
			this->Summon->Controls->Add(this->dayleft);
			this->Summon->Controls->Add(this->enddate);
			this->Summon->Controls->Add(this->label5);
			this->Summon->Controls->Add(this->label4);
			this->Summon->Controls->Add(this->box1);
			this->Summon->Controls->Add(this->label3);
			this->Summon->Location = System::Drawing::Point(247, 86);
			this->Summon->Name = L"Summon";
			this->Summon->Size = System::Drawing::Size(275, 268);
			this->Summon->TabIndex = 5;
			this->Summon->TabStop = false;
			this->Summon->Text = L"Summon";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(167, 234);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Pay";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &pay::button1_Click);
			// 
			// penalty
			// 
			this->penalty->Enabled = false;
			this->penalty->Location = System::Drawing::Point(97, 192);
			this->penalty->Name = L"penalty";
			this->penalty->Size = System::Drawing::Size(100, 20);
			this->penalty->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 200);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Penalty  :  RM";
			// 
			// reason
			// 
			this->reason->Enabled = false;
			this->reason->Location = System::Drawing::Point(97, 154);
			this->reason->Name = L"reason";
			this->reason->Size = System::Drawing::Size(100, 20);
			this->reason->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Reason";
			// 
			// dayleft
			// 
			this->dayleft->Enabled = false;
			this->dayleft->Location = System::Drawing::Point(180, 102);
			this->dayleft->Name = L"dayleft";
			this->dayleft->Size = System::Drawing::Size(53, 20);
			this->dayleft->TabIndex = 5;
			// 
			// enddate
			// 
			this->enddate->Enabled = false;
			this->enddate->Location = System::Drawing::Point(6, 103);
			this->enddate->Name = L"enddate";
			this->enddate->Size = System::Drawing::Size(87, 20);
			this->enddate->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(164, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Day Remaining";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Summon deadline";
			// 
			// box1
			// 
			this->box1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->box1->FormattingEnabled = true;
			this->box1->Location = System::Drawing::Point(7, 37);
			this->box1->Name = L"box1";
			this->box1->Size = System::Drawing::Size(121, 21);
			this->box1->TabIndex = 1;
			this->box1->SelectedIndexChanged += gcnew System::EventHandler(this, &pay::box1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Please select which saman you want to pay";
			// 
			// roadtax
			// 
			this->roadtax->Controls->Add(this->radioButton8);
			this->roadtax->Controls->Add(this->radioButton7);
			this->roadtax->Controls->Add(this->radioButton6);
			this->roadtax->Controls->Add(this->radioButton5);
			this->roadtax->Controls->Add(this->deadline1);
			this->roadtax->Controls->Add(this->price);
			this->roadtax->Controls->Add(this->button2);
			this->roadtax->Controls->Add(this->label12);
			this->roadtax->Controls->Add(this->label11);
			this->roadtax->Controls->Add(this->label10);
			this->roadtax->Controls->Add(this->dayleft2);
			this->roadtax->Controls->Add(this->deadline);
			this->roadtax->Controls->Add(this->label9);
			this->roadtax->Controls->Add(this->label8);
			this->roadtax->Location = System::Drawing::Point(547, 86);
			this->roadtax->Name = L"roadtax";
			this->roadtax->Size = System::Drawing::Size(224, 299);
			this->roadtax->TabIndex = 6;
			this->roadtax->TabStop = false;
			this->roadtax->Text = L"Road Tax";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(18, 169);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(54, 17);
			this->radioButton8->TabIndex = 13;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"3 year";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &pay::radioButton8_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(18, 147);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(54, 17);
			this->radioButton7->TabIndex = 12;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"2 year";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &pay::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(18, 125);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(54, 17);
			this->radioButton6->TabIndex = 11;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"1 year";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &pay::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(18, 102);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(63, 17);
			this->radioButton5->TabIndex = 10;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"6 month";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &pay::radioButton5_CheckedChanged);
			// 
			// deadline1
			// 
			this->deadline1->Enabled = false;
			this->deadline1->Location = System::Drawing::Point(94, 199);
			this->deadline1->Name = L"deadline1";
			this->deadline1->Size = System::Drawing::Size(89, 20);
			this->deadline1->TabIndex = 9;
			// 
			// price
			// 
			this->price->Enabled = false;
			this->price->Location = System::Drawing::Point(84, 233);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(67, 20);
			this->price->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(128, 263);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Pay";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &pay::button2_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(15, 238);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 13);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Price :   RM";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(15, 200);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 13);
			this->label11->TabIndex = 5;
			this->label11->Text = L"New deadline";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 76);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(143, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Select to pay for the road tax";
			// 
			// dayleft2
			// 
			this->dayleft2->Enabled = false;
			this->dayleft2->Location = System::Drawing::Point(158, 42);
			this->dayleft2->Name = L"dayleft2";
			this->dayleft2->Size = System::Drawing::Size(45, 20);
			this->dayleft2->TabIndex = 3;
			// 
			// deadline
			// 
			this->deadline->Enabled = false;
			this->deadline->Location = System::Drawing::Point(6, 42);
			this->deadline->Name = L"deadline";
			this->deadline->Size = System::Drawing::Size(99, 20);
			this->deadline->TabIndex = 2;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(156, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Day Left";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 27);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Deadline";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(31, 50);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(207, 13);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Please select the payment type before pay";
			// 
			// pay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(799, 407);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->roadtax);
			this->Controls->Add(this->Summon);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->datebox);
			this->Controls->Add(this->plate);
			this->Controls->Add(this->linkLabel1);
			this->Name = L"pay";
			this->Text = L"pay";
			this->Load += gcnew System::EventHandler(this, &pay::pay_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->Summon->ResumeLayout(false);
			this->Summon->PerformLayout();
			this->roadtax->ResumeLayout(false);
			this->roadtax->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int year;
		double paid;
		double total;
		bool cash = true;
		DateTime date = DateTime(DateTime::Now);
		
		
		// back
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		if (MessageBox::Show("Are your sure you want to back?", "Back", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			this->Hide();
		}
	}


	private: System::Void box1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		String^ comboval = box1->Text;

		String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

		MySqlConnection^ conDatabase1 = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("select * from workshop.saman where busplate = '" + this->plate->Text + "' and dateSaman = '" + this->box1->Text + "';", conDatabase1);

		MySqlDataReader^ read1;

		try
		{
			conDatabase1->Open();
			read1 = cmdDatabase1->ExecuteReader();

			if (read1->Read())
			{

				String^ en = read1->GetDateTime("deadline").ToString("yyyy-MM-dd");
				enddate->Text = en;

				String^ re = read1->GetString("reason");
				reason->Text = re;

				String^ pe = read1->GetString("penalty");
				penalty->Text = pe;

			}

		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}
		read1->Close();

		// find day left
		MySqlConnection^ conDatabase3 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase3 = gcnew MySqlCommand("select datediff (deadline,now()) as diff from workshop.saman where dateSaman = '" + this->box1->Text + "';", conDatabase3);

		MySqlDataReader^ read3;

		try
		{
			conDatabase3->Open();
			read3 = cmdDatabase3->ExecuteReader();
			if (read3->Read())
			{
				String^ dif = read3->GetInt64("diff").ToString();
				dayleft->Text = dif;
			}

			read3->Close();
		}

		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);

		}
	}


			 //pay saman
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Are your confirmed to pay this saman?", "Saman", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

			// find price
			MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDatabase4 = gcnew MySqlCommand("update workshop.saman set sstatus = 'Paid' where dateSaman = '" + this->box1->Text + "' and busplate = '" + this->plate->Text + "';", conDatabase4);

			MySqlDataReader^ read4;


			try
			{
				conDatabase4->Open();
				read4 = cmdDatabase4->ExecuteReader();
				if (read4->Read())
				{

					
				}

				box1->Items->Remove(box1->Text);

				read4->Close();
			}

			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);

			}

			MySqlConnection^ conDatabase5 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDatabase5 = gcnew MySqlCommand("insert into workshop.income (saman,date,plate) values ('" + this->penalty->Text + "' , '"+ this->datebox->Text +"' , '" + this->plate->Text + "');", conDatabase5);

			MySqlDataReader^ read5;


			try
			{
				conDatabase5->Open();
				read5 = cmdDatabase5->ExecuteReader();
				if (read5->Read())
				{
				
				}

				read5->Close();
				
				if (cash)
					MessageBox::Show("Please go counter to pay your payment, Thank you");

				else
					MessageBox::Show("Your Payment is successful, Thank you");

				enddate->Text = "";
				dayleft->Text = "";
				reason->Text == "";
				penalty->Text = "";
			}

			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);

			}
		}
	};
	

			 //pay road tax
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Are your confirmed to pay?", "Road Tax", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

		// find price
		MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase4 = gcnew MySqlCommand("update workshop.roadtax set endDate = '" + this->deadline1->Text + "', startDate = '" + this->datebox->Text + "' where bplate = '" + this->plate->Text + "';", conDatabase4);

		MySqlDataReader^ read4;

		try
		{
			conDatabase4->Open();
			read4 = cmdDatabase4->ExecuteReader();
			if (read4->Read())
			{
				

			}

			read4->Close();
		}

		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);

		}

		MySqlConnection^ conDatabase5 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase5 = gcnew MySqlCommand("insert into workshop.income (roadtax,date,plate) values ('" + this->price->Text + "' , '" + this->datebox->Text + "' , '" + this->plate->Text + "');", conDatabase5);

		MySqlDataReader^ read5;

		try
		{
			conDatabase5->Open();
			read5 = cmdDatabase5->ExecuteReader();
			if (read5->Read())
			{

			}
			deadline->Text = deadline1->Text;
			deadline1->Text = "";
			price->Text = "";

			read5->Close();

			if (cash)
				MessageBox::Show("Please go counter to pay your payment, Thank you");

			else
				MessageBox::Show("Your Payment is successful, Thank you");
		}

		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);

		}
	}
}

		 //6 month road tax
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

	// find price
	MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase4 = gcnew MySqlCommand("select * from workshop.bus where bplate = '" + this->plate->Text + "';", conDatabase4);

	MySqlDataReader^ read4;

	try
	{
		conDatabase4->Open();
		read4 = cmdDatabase4->ExecuteReader();
		if (read4->Read())
		{
			String^ type = read4->GetString("btype");
			String^ cc = read4->GetString("capacity");

			if (type == "Public")
			{
				paid = 20;
			}

			else if (type == "Private")
			{

				paid = 40;
			}

			else
			{

				paid = 10;
			}

			if (cc == "less than or equal 45")
			{
				paid = 1.5 * paid;
			}

			total = paid * 1.5;

			price->Text = total.ToString();

			DateTime date3 = date.AddMonths(30);
			deadline1->Text = date3.ToString("yyyy-MM-dd");
		}
	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);

	}
}

		 //1 year road tax
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	year = 3;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

	// find price
	MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase4 = gcnew MySqlCommand("select * from workshop.bus where bplate = '" + this->plate->Text + "';", conDatabase4);

	MySqlDataReader^ read4;

	try
	{
		conDatabase4->Open();
		read4 = cmdDatabase4->ExecuteReader();
		if (read4->Read())
		{
			String^ type = read4->GetString("btype");
			String^ cc = read4->GetString("capacity");

			if (type == "Public")
			{
				paid = 20;
			}

			else if (type == "Private")
			{

				paid = 40;
			}

			else
			{

				paid = 10;
			}

			if (cc == "less than or equal 45")
			{
				paid = 1.5 * paid;
			}

			total = paid * year;

			price->Text = total.ToString();

			DateTime date2 = date.AddYears(year);
			deadline1->Text = date2.ToString("yyyy-MM-dd");
		}
	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);

	}
}

		 //2 year road tax
private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	year = 4;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

	// find price
	MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase4 = gcnew MySqlCommand("select * from workshop.bus where bplate = '" + this->plate->Text + "';", conDatabase4);

	MySqlDataReader^ read4;

	try
	{
		conDatabase4->Open();
		read4 = cmdDatabase4->ExecuteReader();
		if (read4->Read())
		{
			String^ type = read4->GetString("btype");
			String^ cc = read4->GetString("capacity");

			if (type == "Public")
			{
				paid = 20;
			}

			else if (type == "Private")
			{

				paid = 40;
			}

			else
			{

				paid = 10;
			}

			if (cc == "more than 45")
			{
				paid = 1.5 * paid;
			}

			total = paid * year;

			price->Text = total.ToString();

			DateTime date2 = date.AddYears(year);
			deadline1->Text = date2.ToString("yyyy-MM-dd");
		}
	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);

	}
}

		 //3 year road tax
private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	year = 5;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

	// find price
	MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase4 = gcnew MySqlCommand("select * from workshop.bus where bplate = '" + this->plate->Text + "';", conDatabase4);

	MySqlDataReader^ read4;

	try
	{
		conDatabase4->Open();
		read4 = cmdDatabase4->ExecuteReader();
		if (read4->Read())
		{
			String^ type = read4->GetString("btype");
			String^ cc = read4->GetString("capacity");

			if (type == "Public")
			{
				paid = 20;
			}

			else if (type == "Private")
			{

				paid = 40;
			}

			else
			{

				paid = 10;
			}

			if (cc == "less than or equal 45")
			{
				paid = 1.5 * paid;
			}
			

			total = paid * year;

			price->Text = total.ToString();

			DateTime date2 = date.AddYears(year);
			deadline1->Text = date2.ToString("yyyy-MM-dd");
		}
	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);

	}
}

		 //choose pay type is credit card
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Enabled = true;
	textBox2->Enabled = true;
	button1->Enabled = true;
	button2->Enabled = true;
}

		 //choose pay type is cash
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Enabled = false;
	textBox2->Enabled = false;
	button1->Enabled = true;
	button2->Enabled = true;
}

private: System::Void pay_Load(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

	MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDatabase4 = gcnew MySqlCommand("select * from workshop.saman where busplate = '" + this->plate->Text + "' and sstatus = 'Not Paid';", conDatabase4);

	MySqlDataReader^ read4;

	try
	{
		conDatabase4->Open();
		read4 = cmdDatabase4->ExecuteReader();
		bool no = true;


		while (read4->Read())
		{
			String^ da;
			da = read4->GetDateTime("dateSaman").ToString("yyyy-MM-dd");
			box1->Items->Add(da);
		}

		
		if (box1->SelectedIndex < -1)
		{
			Summon->Enabled = false;
			MessageBox::Show("This bus had no saman");
		}

		else
			Summon->Enabled = true;
		}

	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
	read4->Close();

	MySqlConnection^ conDatabase5 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase5 = gcnew MySqlCommand("select * from workshop.roadtax where bplate = '" + this->plate->Text + "';", conDatabase5);

	MySqlDataReader^ read5;


	try
	{
		conDatabase5->Open();
		read5 = cmdDatabase5->ExecuteReader();
		if (read5->Read())
		{
			String^ da = read5->GetDateTime("endDate").ToString("yyyy-MM-dd");
			deadline->Text = da;
		}

		read5->Close();
	}

	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);

	}

	MySqlConnection^ conDatabase6 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase6 = gcnew MySqlCommand("select datediff(endDate,now()) as diff from workshop.roadtax where bplate = '" + this->plate->Text + "';", conDatabase6);

	MySqlDataReader^ read6;


	try
	{
		conDatabase6->Open();
		read6 = cmdDatabase6->ExecuteReader();
		if (read6->Read())
		{
			String^ dif = read6->GetInt32("diff").ToString();
			dayleft2->Text = dif;
		}

		read6->Close();
	}

	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);

	}
}
};
}