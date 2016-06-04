#pragma once
#include "Admin1.h"

namespace sky {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for admin
	/// </summary>
	public ref class admin : public System::Windows::Forms::Form
	{
	public:
		admin(void)
		{
			InitializeComponent();
			password_txt->PasswordChar = '*';
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  name_txt;
	private: System::Windows::Forms::TextBox^  password_txt;


	private: System::Windows::Forms::Button^  button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(152, 87);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(100, 20);
			this->name_txt->TabIndex = 2;
			this->name_txt->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &admin::name_txt_KeyDown);
			// 
			// password_txt
			// 
			this->password_txt->Location = System::Drawing::Point(152, 136);
			this->password_txt->Name = L"password_txt";
			this->password_txt->Size = System::Drawing::Size(100, 20);
			this->password_txt->TabIndex = 3;
			this->password_txt->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &admin::password_txt_KeyDown);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(177, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &admin::button1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(25, 27);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(40, 13);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"< back";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &admin::linkLabel1_LinkClicked);
			// 
			// admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->password_txt);
			this->Controls->Add(this->name_txt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"admin";
			this->Text = L"admin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select * from workshop.admin where name = '" + this->name_txt->Text + "'and password = '" + this->password_txt->Text + "';", conDatabase);
		MySqlDataReader^ myReader;
		try{
			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			int count = 0;

			while (myReader->Read())
			{
				count = count + 1;
			}

			if (count == 1)
			{
				MessageBox::Show("User name and password is correct");
				this->Hide();
				Admin1^ f2 = gcnew Admin1();
				f2->ShowDialog();
			}

			else if (count > 1)
			{
				MessageBox::Show("Duplicate username and password ... Access denied");
			}

			else
			{
				MessageBox::Show("User name and password is incorrect -- Please try again");
			}
		}
		catch (Exception^ex){

			MessageBox::Show(ex->Message);
		}
	}


private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	this->Hide();
}
private: System::Void name_txt_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
	{
		if (name_txt->Text == "")
			MessageBox::Show("Please key in the name");

		else if (password_txt->Text == "")
			MessageBox::Show("Pleae key in the password");

		else
		{

			String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select * from workshop.admin where name = '" + this->name_txt->Text + "'and password = '" + this->password_txt->Text + "';", conDatabase);
			MySqlDataReader^ myReader;
			try{
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				int count = 0;

				while (myReader->Read())
				{
					count = count + 1;
				}

				if (count == 1)
				{
					MessageBox::Show("User name and password is correct");
					this->Hide();
					Admin1^ f2 = gcnew Admin1();
					f2->ShowDialog();
				}

				else if (count > 1)
				{
					MessageBox::Show("Duplicate username and password ... Access denied");
				}

				else
				{
					MessageBox::Show("User name and password is incorrect -- Please try again");
				}
			}
			catch (Exception^ex){

				MessageBox::Show(ex->Message);
			}
		}
	}
}
private: System::Void password_txt_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
	{
		if (name_txt->Text == "")
			MessageBox::Show("Please key in the name");

		else if (password_txt->Text == "")
			MessageBox::Show("Pleae key in the password");

		else
		{

			String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select * from workshop.admin where name = '" + this->name_txt->Text + "'and password = '" + this->password_txt->Text + "';", conDatabase);
			MySqlDataReader^ myReader;
			try{
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				int count = 0;

				while (myReader->Read())
				{
					count = count + 1;
				}

				if (count == 1)
				{
					MessageBox::Show("User name and password is correct");
					this->Hide();
					Admin1^ f2 = gcnew Admin1();
					f2->ShowDialog();
				}

				else if (count > 1)
				{
					MessageBox::Show("Duplicate username and password ... Access denied");
				}

				else
				{
					MessageBox::Show("User name and password is incorrect -- Please try again");
				}
			}
			catch (Exception^ex){

				MessageBox::Show(ex->Message);
			}
		}
	}
}
};
}