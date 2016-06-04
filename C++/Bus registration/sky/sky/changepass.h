#pragma once
#include "checkInfo.h"

namespace sky {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for changepass
	/// </summary>
	public ref class changepass : public System::Windows::Forms::Form
	{
	public:
		changepass(String^ a)
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
		~changepass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  pass;
	private: System::Windows::Forms::TextBox^  pass1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  plate;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->pass1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->plate = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(215, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Change";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &changepass::button1_Click);
			// 
			// pass
			// 
			this->pass->Location = System::Drawing::Point(121, 36);
			this->pass->MaxLength = 10;
			this->pass->Name = L"pass";
			this->pass->PasswordChar = '*';
			this->pass->Size = System::Drawing::Size(100, 20);
			this->pass->TabIndex = 1;
			// 
			// pass1
			// 
			this->pass1->Location = System::Drawing::Point(121, 71);
			this->pass1->MaxLength = 10;
			this->pass1->Name = L"pass1";
			this->pass1->PasswordChar = '*';
			this->pass1->Size = System::Drawing::Size(100, 20);
			this->pass1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"New Password  :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Comfirmed Password  :";
			// 
			// plate
			// 
			this->plate->BackColor = System::Drawing::SystemColors::ControlLight;
			this->plate->Enabled = false;
			this->plate->Location = System::Drawing::Point(190, 10);
			this->plate->Name = L"plate";
			this->plate->Size = System::Drawing::Size(100, 20);
			this->plate->TabIndex = 5;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(13, 10);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(40, 13);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"< back";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &changepass::linkLabel1_LinkClicked);
			// 
			// changepass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(302, 140);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->plate);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pass1);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->button1);
			this->Name = L"changepass";
			this->Text = L"changepass";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (pass->Text == "")
		{
			MessageBox::Show("Please insert your new password!");
		}

		else if (pass1->Text == "")
		{
			MessageBox::Show("Please insert your new password!");
		}

		if (pass->Text == pass1->Text)
		{
			String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

			//Searching people by using bus plate
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("update workshop.owner set opassword = '"+ this->pass->Text +"' where oid = (select oid from workshop.bus where bplate = '"+ plate->Text +"');", conDatabase);

			MySqlDataReader^ read;

			try
			{
				conDatabase->Open();
				read = cmdDatabase->ExecuteReader();
				MessageBox::Show("Chnange Password sucessfully");
				this->Hide();

			}
			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		else
		{
			MessageBox::Show("Your password is incorrect, please enter again!");
			pass->Text == "";
			pass1->Text == "";
		}
	}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	this->Hide();
}
};
}
