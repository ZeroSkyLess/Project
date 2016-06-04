#pragma once

namespace sky {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for ChangeInfo
	/// </summary>
	public ref class ChangeInfo : public System::Windows::Forms::Form
	{
	public:
		ChangeInfo(String^a)
		{
			InitializeComponent();
			plate->Text = a;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChangeInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  plate;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MaskedTextBox^  ic;


	private: System::Windows::Forms::Label^  labelic;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::MaskedTextBox^  hp;

	private: System::Windows::Forms::TextBox^  address;



	private: System::Windows::Forms::TextBox^  name;
	private: System::Windows::Forms::TextBox^  id;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->ic = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelic = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->hp = (gcnew System::Windows::Forms::MaskedTextBox());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->plate = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->ic);
			this->groupBox1->Controls->Add(this->labelic);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->hp);
			this->groupBox1->Controls->Add(this->address);
			this->groupBox1->Controls->Add(this->name);
			this->groupBox1->Controls->Add(this->id);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(16, 54);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(305, 261);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Owner Information";
			// 
			// ic
			// 
			this->ic->Location = System::Drawing::Point(123, 101);
			this->ic->Mask = L"000000000000";
			this->ic->Name = L"ic";
			this->ic->Size = System::Drawing::Size(96, 20);
			this->ic->TabIndex = 14;
			// 
			// labelic
			// 
			this->labelic->AutoSize = true;
			this->labelic->Location = System::Drawing::Point(19, 101);
			this->labelic->Name = L"labelic";
			this->labelic->Size = System::Drawing::Size(17, 13);
			this->labelic->TabIndex = 13;
			this->labelic->Text = L"IC";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(106, 101);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(10, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L":";
			// 
			// hp
			// 
			this->hp->Location = System::Drawing::Point(123, 211);
			this->hp->Mask = L"0000000000";
			this->hp->Name = L"hp";
			this->hp->Size = System::Drawing::Size(75, 20);
			this->hp->TabIndex = 11;
			// 
			// address
			// 
			this->address->Location = System::Drawing::Point(123, 135);
			this->address->Multiline = true;
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(176, 63);
			this->address->TabIndex = 10;
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(123, 62);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(100, 20);
			this->name->TabIndex = 9;
			// 
			// id
			// 
			this->id->Enabled = false;
			this->id->Location = System::Drawing::Point(123, 30);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(100, 20);
			this->id->TabIndex = 8;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(106, 211);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(10, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L":";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(106, 135);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(10, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L":";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(106, 62);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(10, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L":";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(106, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L":";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"H/P number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ID";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(13, 13);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(40, 13);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"< back";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ChangeInfo::linkLabel1_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(178, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Bus plate: ";
			// 
			// plate
			// 
			this->plate->Enabled = false;
			this->plate->Location = System::Drawing::Point(241, 10);
			this->plate->Name = L"plate";
			this->plate->Size = System::Drawing::Size(80, 20);
			this->plate->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(274, 333);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChangeInfo::button1_Click);
			// 
			// ChangeInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(372, 368);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->plate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"ChangeInfo";
			this->Text = L"ChangeInfo";
			this->Load += gcnew System::EventHandler(this, &ChangeInfo::ChangeInfo_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		this->Hide();
	}

private: System::Void ChangeInfo_Load(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

	//Searching owner by using bus plate
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select * from workshop.owner where oid = (select oid from workshop.bus where bplate = '" + this->plate->Text + "');", conDatabase);

	MySqlDataReader^ read;


	try
	{
		conDatabase->Open();
		read = cmdDatabase->ExecuteReader();
		if (read->Read())
		{
			String^ oid = read->GetString("oid");
			id->Text = oid;

			String^ oname = read->GetString("oname");
			name->Text = oname;

			String^ oic = read->GetString("oic");
			ic->Text = oic;

			String^ ohp = read->GetString("ohp");
			hp->Text = ohp;

			String^ oaddress = read->GetString("oaddress");
			address->Text = oaddress;


			read->Close();
		}

	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	if (MessageBox::Show("Any changing information will not accept, are you sure want to proceed?", "Bus Registration System", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{

		if (name->Text == "")
		{
			MessageBox::Show("Please insert your name");
		}

		else if (ic->Text == "")
		{
			MessageBox::Show("Please insert your ic");
		}

		else if (address->Text == "")
		{
			MessageBox::Show("Please insert your address");
		}

		else if (hp->Text == "")
		{
			MessageBox::Show("Please insert your hp");
		}

		else
		{
			String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

			MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);

			MySqlCommand^ cmdDatabase2 = gcnew MySqlCommand("update workshop.owner set oname = '" + this->name->Text + "',oaddress = '" + this->address->Text + "',ohp = '" + this->hp->Text + "',oic  = '" + this->ic->Text + "' where oid = '" + this->id->Text + "'; ", conDatabase2);

			MySqlDataReader^ read2;
			
			MessageBox::Show("Update Successfully");

			this->Hide();

			try
			{

				conDatabase2->Open();
				read2 = cmdDatabase2->ExecuteReader();
				if (read2->Read())
				{
				}

			}

			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
			}

			read2->Close();
		}
	}

	else
	{
	}

}

};
}
