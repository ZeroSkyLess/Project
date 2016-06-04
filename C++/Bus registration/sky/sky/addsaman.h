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
	/// Summary for addsaman
	/// </summary>
	public ref class addsaman : public System::Windows::Forms::Form
	{
	public:
		addsaman(void)
		{
			InitializeComponent();
			DateTime a = DateTime::Now;
			datebox->Text = a.ToString("yyyy-MM-dd");
			DateTime c = a.AddMonths(3);
			datebox1->Text = c.ToString("yyyy-MM-dd");
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addsaman()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  plate;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  datebox;

	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  penalty;

	private: System::Windows::Forms::TextBox^  reason;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  datebox1;
	private: System::Windows::Forms::Label^  label5;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->plate = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->penalty = (gcnew System::Windows::Forms::TextBox());
			this->reason = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->datebox = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->datebox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Please insert the bus plate";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(144, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Check";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addsaman::button1_Click);
			// 
			// plate
			// 
			this->plate->Location = System::Drawing::Point(31, 51);
			this->plate->Name = L"plate";
			this->plate->Size = System::Drawing::Size(100, 20);
			this->plate->TabIndex = 2;
			this->plate->TextChanged += gcnew System::EventHandler(this, &addsaman::plate_TextChanged);
			this->plate->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &addsaman::plate_KeyDown);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->penalty);
			this->groupBox1->Controls->Add(this->reason);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(25, 86);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(349, 201);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Summon";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(273, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &addsaman::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Penalty : RM";
			// 
			// penalty
			// 
			this->penalty->Enabled = false;
			this->penalty->Location = System::Drawing::Point(119, 149);
			this->penalty->Name = L"penalty";
			this->penalty->Size = System::Drawing::Size(100, 20);
			this->penalty->TabIndex = 2;
			// 
			// reason
			// 
			this->reason->Enabled = false;
			this->reason->Location = System::Drawing::Point(119, 34);
			this->reason->Multiline = true;
			this->reason->Name = L"reason";
			this->reason->Size = System::Drawing::Size(200, 68);
			this->reason->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Reason :";
			// 
			// datebox
			// 
			this->datebox->Enabled = false;
			this->datebox->Location = System::Drawing::Point(298, 13);
			this->datebox->Name = L"datebox";
			this->datebox->Size = System::Drawing::Size(92, 20);
			this->datebox->TabIndex = 4;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(13, 13);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(40, 13);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"< back";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &addsaman::linkLabel1_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(240, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"End Date";
			// 
			// datebox1
			// 
			this->datebox1->Enabled = false;
			this->datebox1->Location = System::Drawing::Point(298, 51);
			this->datebox1->Name = L"datebox1";
			this->datebox1->Size = System::Drawing::Size(92, 20);
			this->datebox1->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(257, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Date";
			// 
			// addsaman
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 303);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->datebox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->datebox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->plate);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"addsaman";
			this->Text = L"addsaman";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
					
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		this->Hide();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	if (plate->Text == "")
		MessageBox::Show("Please key in a bus plate");

	else
	{
		String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

		//Searching people by using bus plate
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select bplate from workshop.bus;", conDatabase);

		MySqlDataReader^ read;

		try
		{
			conDatabase->Open();
			read = cmdDatabase->ExecuteReader();


			bool no = true;

			while (read->Read())
			{
				String^ a = read->GetString("bplate");

				if (plate->Text == a)
				{
					MessageBox::Show("Bus found");
					reason->Enabled = true;
					penalty->Enabled = true;
					no = false;
					break;
				}

			}
			read->Close();

			if (no)
			{
				MessageBox::Show("Bus not found");
				reason->Enabled = false;
				penalty->Enabled = false;
			}

		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

		//Searching people by using bus plate
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("insert into workshop.saman (penalty,reason,dateSaman,deadline,sstatus,busplate) values ('" + this->penalty->Text + "','" + this->reason->Text + "','" + this->datebox->Text + "','" + this->datebox1->Text + "','Not Paid ','" + this->plate->Text + "');", conDatabase);

		MySqlDataReader^ read;

		if (penalty->Text != "" && reason->Text != "")
		{
			try
			{
				conDatabase->Open();
				read = cmdDatabase->ExecuteReader();
				MessageBox::Show("Saman add sucessfully");


				if (MessageBox::Show("Want continue to add saman?", "Add Saman", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
				}

				else
				{
					this->Hide();
				}

			}
			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		else if (penalty->Text == "")
			MessageBox::Show("penalty is empty, pleaser insert");

		else if (reason->Text == "")
			MessageBox::Show("reason is empty, pleaser insert");
}

private: System::Void plate_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	reason->Enabled = false;
	penalty->Enabled = false;
}
private: System::Void plate_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
	{
		if (plate->Text == "")
			MessageBox::Show("Please key in a bus plate");

		else
		{
			String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

			//Searching people by using bus plate
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select bplate from workshop.bus;", conDatabase);

			MySqlDataReader^ read;

			try
			{
				conDatabase->Open();
				read = cmdDatabase->ExecuteReader();


				bool no = true;

				while (read->Read())
				{
					String^ a = read->GetString("bplate");

					if (plate->Text == a)
					{
						MessageBox::Show("Bus found");
						reason->Enabled = true;
						penalty->Enabled = true;
						no = false;
						break;
					}

				}
				read->Close();

				if (no)
				{
					MessageBox::Show("Bus not found");
					reason->Enabled = false;
					penalty->Enabled = false;
				}

			}
			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
}
};
}
