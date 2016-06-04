#pragma once

#include "changepass.h"
#include "busstatus.h"
#include "pay.h"
#include "ChangeInfo.h"

namespace sky {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for modified
	/// </summary>
	public ref class modified : public System::Windows::Forms::Form
	{
	public:
		modified(String^ a)
		{
			InitializeComponent();
			plate1->Text = a;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~modified()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  plate1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	protected:

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
			this->plate1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// plate1
			// 
			this->plate1->Enabled = false;
			this->plate1->Location = System::Drawing::Point(12, 12);
			this->plate1->Name = L"plate1";
			this->plate1->Size = System::Drawing::Size(100, 20);
			this->plate1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(74, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Change Password";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &modified::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(74, 143);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Check bus status";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &modified::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(74, 185);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Payment";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &modified::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(74, 227);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(149, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Log out";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &modified::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(74, 99);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(149, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Change Information";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &modified::button5_Click);
			// 
			// modified
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->plate1);
			this->Name = L"modified";
			this->Text = L"modified";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Comfirm to log out?", "Log out", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			this->Hide();
		}
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ b = plate1->Text;
	this->Hide();
	changepass^ f2 = gcnew changepass(b);
	f2->ShowDialog();
	this->Show();
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ c = plate1->Text;
	this->Hide();
	busstatus^ f2 = gcnew busstatus(c);
	f2->ShowDialog();
	this->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ a = plate1->Text;
	this->Hide();
	pay^ ff = gcnew pay(a);
	ff->ShowDialog();
	this->Show();

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ a = plate1->Text;
	this->Hide();
	ChangeInfo^ ci = gcnew ChangeInfo(a);
	ci->ShowDialog();
	this->Show();
}
};
}
