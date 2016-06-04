#pragma once

#include "modified.h"

namespace sky {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for loginguest
	/// </summary>
	public ref class loginguest : public System::Windows::Forms::Form
	{
	public:
		loginguest(void)
		{
			InitializeComponent();
			password->PasswordChar = '*';
			String^ a = plate->Text;
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loginguest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  plate;
	private: System::Windows::Forms::TextBox^  password;


	private: System::Windows::Forms::Label^  label3;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->plate = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(13, 24);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(40, 13);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"< back";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &loginguest::linkLabel1_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bus Plate";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(179, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &loginguest::button1_Click);
			// 
			// plate
			// 
			this->plate->Location = System::Drawing::Point(129, 85);
			this->plate->Name = L"plate";
			this->plate->Size = System::Drawing::Size(100, 20);
			this->plate->TabIndex = 4;
			this->plate->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &loginguest::plate_KeyDown);
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(129, 132);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(100, 20);
			this->password->TabIndex = 5;
			this->password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &loginguest::password_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(205, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Please insert your bus plate and password";
			// 
			// loginguest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->password);
			this->Controls->Add(this->plate);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkLabel1);
			this->Name = L"loginguest";
			this->Text = L"loginguest";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		this->Hide();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select opassword from workshop.owner where oid = (select oid from workshop.bus where bplate = '" + this->plate->Text + "');", conDatabase);
	MySqlDataReader^ myReader;
	try{
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();
		String^ b = plate->Text;

		bool no = true;

		if (myReader->Read())
		{
			String^ a = myReader->GetString("opassword");
			if (password->Text == a)
			{
				MessageBox::Show("Bus plate and password is correct");
				no = false;
				this->Hide();
				modified^ f1 = gcnew modified(b);
				f1->ShowDialog();
			}
		}

		if (no)
		{
			MessageBox::Show("Bus plate and password is incorrect -- Please try again");
		}

	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}


}
private: System::Void password_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
	{
		if (plate->Text == "")
		{
			MessageBox::Show("Please Key in your bus plate!!");
		}

		else if (password->Text == "")
		{
			MessageBox::Show("Please Key in your password!!");
		}

		else
		{
			String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select opassword from workshop.owner where oid = (select oid from workshop.bus where bplate = '" + this->plate->Text + "');", conDatabase);
			MySqlDataReader^ myReader;
			try{
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				String^ b = plate->Text;

				bool no = true;

				if (myReader->Read())
				{
					String^ a = myReader->GetString("opassword");
					if (password->Text == a)
					{
						MessageBox::Show("Bus plate and password is correct");
						no = false;
						this->Hide();
						modified^ f1 = gcnew modified(b);
						f1->ShowDialog();
					}
				}

				if (no)
				{
					MessageBox::Show("Bus plate and password is incorrect -- Please try again");
				}
			}

			catch (Exception^ex){

				MessageBox::Show(ex->Message);
			}
		}

	}
}
private: System::Void plate_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
	{
		if (plate->Text == "")
		{
			MessageBox::Show("Please Key in your bus plate!!");
		}

		else if (password->Text == "")
		{
			MessageBox::Show("Please Key in your password!!");
		}

		else
		{
			String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select opassword from workshop.owner where oid = (select oid from workshop.bus where bplate = '" + this->plate->Text + "');", conDatabase);
			MySqlDataReader^ myReader;
			try{
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();
				String^ b = plate->Text;

				bool no = true;

				if (myReader->Read())
				{
					String^ a = myReader->GetString("opassword");
					if (password->Text == a)
					{
						MessageBox::Show("Bus plate and password is correct");
						no = false;
						this->Hide();
						modified^ f1 = gcnew modified(b);
						f1->ShowDialog();
					}
				}

				if (no)
				{
					MessageBox::Show("Bus plate and password is incorrect -- Please try again");
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
