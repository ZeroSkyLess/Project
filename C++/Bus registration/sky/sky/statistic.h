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
	/// Summary for statistic
	/// </summary>
	public ref class statistic : public System::Windows::Forms::Form
	{
	public:
		statistic(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~statistic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MaskedTextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::Label^  label8;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(260, 47);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Road Tax (RM)";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Summon (RM)";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(352, 325);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Name = L"Road tax and Summon for each month";
			this->chart1->Titles->Add(title1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(179, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Show ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &statistic::button1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(12, 15);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(40, 13);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"< back";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &statistic::linkLabel1_LinkClicked);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(155, 47);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(63, 20);
			this->textBox2->TabIndex = 4;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(2, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(252, 169);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Year range";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Please choose the range of year you want to show";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(13, 138);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(54, 17);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"2 year";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &statistic::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(16, 115);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(54, 17);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"1 year";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &statistic::radioButton1_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"from";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(133, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"to";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(71, 47);
			this->textBox1->Mask = L"0000";
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(56, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &statistic::textBox1_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Please insert the year you want";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(8, 243);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(246, 100);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Show type";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(10, 70);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(86, 17);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Total income";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &statistic::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(10, 47);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(137, 17);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Road Tax and Summon";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &statistic::radioButton3_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(182, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Please select what you want to show";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(260, 46);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Total Income (RM)";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(352, 326);
			this->chart2->TabIndex = 7;
			this->chart2->Text = L"chart2";
			title2->Name = L"Total income for each month";
			this->chart2->Titles->Add(title2);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(154, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Please insert the year you want";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(71, 47);
			this->maskedTextBox1->Mask = L"0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(56, 20);
			this->maskedTextBox1->TabIndex = 6;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Controls->Add(this->radioButton6);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->maskedTextBox1);
			this->groupBox3->Location = System::Drawing::Point(2, 46);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(252, 169);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Year range";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(31, 50);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"from";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(246, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Please choose the range of year you want to show";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(16, 138);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(54, 17);
			this->radioButton5->TabIndex = 8;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"2 year";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &statistic::radioButton2_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(16, 115);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(54, 17);
			this->radioButton6->TabIndex = 7;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"1 year";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &statistic::radioButton1_CheckedChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(133, 50);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"to";
			// 
			// statistic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 394);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"statistic";
			this->Text = L"statistic";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int year;  // the range of year
		bool income;  // show wheter is income or raoad tax and summon
		bool ch;

		//back 
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		this->Hide();
	}

			 //select the year range of 1
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "")
		{
			MessageBox::Show("Please insert the year you want to show the statistic");
		}

		else
		{
			ch = true;
			year = 1;

			int a;

			a = Int32::Parse(textBox1->Text);

			a = a + year;

			textBox2->Text = a.ToString();
		}
	}

			 //select the year range of 2
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "")
		{
			MessageBox::Show("Please insert the year you want to show the statistic");
		}

		else
		{
			ch = false;
			year = 2;

			int a;

			a = Int32::Parse(textBox1->Text);

			a = a + year;

			textBox2->Text = a.ToString();
		}
	}


			 // show button
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		if (textBox1->Text == "")
		{
			MessageBox::Show("Please key in the year you want to show the statistic for both income");
		}

		else{

			if (income)
			{
				
				String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

				// statistic of total income
				MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
				MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select sum(roadtax) + sum(saman) as total, month(date) as mon from workshop.income  where date < '" + this->textBox2->Text + "' and date > '" + this->textBox1->Text + "'  group by month(date);", conDatabase);

				MySqlDataReader^ read;


				try
				{
					conDatabase->Open();
					read = cmdDatabase->ExecuteReader();

					String^ a;

					while (read->Read())
					{
						a = read->GetString("mon");

						if (a == "1")
						{
							a = "January";
						}

						if (a == "2")
						{
							a = "February";
						}

						if (a == "3")
						{
							a = "March";
						}

						if (a == "4")
						{
							a = "April";
						}

						if (a == "5")
						{
							a = "May";
						}

						if (a == "6")
						{
							a = "June";
						}

						if (a == "7")
						{
							a = "July";
						}

						if (a == "8")
						{
							a = "August";
						}

						if (a == "9")
						{
							a = "September";
						}

						if (a == "10")
						{
							a = "October";
						}

						if (a == "11")
						{
							a = "November";
						}

						if (a == "12")
						{
							a = "December";
						}

						this->chart2->Series["Total Income (RM)"]->Points->AddXY(a, read->GetInt32("total"));
					}

					read->Close();
				}
				catch (Exception^ex)
				{
					MessageBox::Show(ex->Message);
				}

			}

			else
			{

				String^ constring = L"datasource=localhost;port=3306;username=root;password=1234";

				// statistic of road tax
				MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
				MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select sum(roadtax) as total, month(date) as mon from workshop.income where date < '"+this->textBox2->Text+"' and date > '"+this->textBox1->Text+"' group by month(date); ", conDatabase);

				MySqlDataReader^ read;


				try
				{
					conDatabase->Open();
					read = cmdDatabase->ExecuteReader();

					String^ a;

					while (read->Read())
					{
						a = read->GetString("mon");

						if (a == "1")
						{
							a = "January";
						}

						if (a == "2")
						{
							a = "February";
						}

						if (a == "3")
						{
							a = "March";
						}

						if (a == "4")
						{
							a = "April";
						}

						if (a == "5")
						{
							a = "May";
						}

						if (a == "6")
						{
							a = "June";
						}

						if (a == "7")
						{
							a = "July";
						}

						if (a == "8")
						{
							a = "August";
						}

						if (a == "9")
						{
							a = "September";
						}

						if (a == "10")
						{
							a = "October";
						}

						if (a == "11")
						{
							a = "November";
						}

						if (a == "12")
						{
							a = "December";
						}

						this->chart1->Series["Road Tax (RM)"]->Points->AddXY(a, read->GetInt32("total"));
					}

					read->Close();
				}
				catch (Exception^ex)
				{
					MessageBox::Show(ex->Message);
				}

				//statistic of summon
				MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
				MySqlCommand^ cmdDatabase2 = gcnew MySqlCommand("select sum(saman) as total,month(date) as mon from workshop.income where saman != 'null' and date > '" + this->textBox1->Text + "' and date < '" + this->textBox2->Text + "' group by month(date);", conDatabase2);

				MySqlDataReader^ read2;


				try
				{
					conDatabase2->Open();
					read2 = cmdDatabase2->ExecuteReader();

					String^ a;

					while (read2->Read())
					{
						a = read2->GetString("mon");

						if (a == "1")
						{
							a = "January";
						}

						if (a == "2")
						{
							a = "February";
						}

						if (a == "3")
						{
							a = "March";
						}

						if (a == "4")
						{
							a = "April";
						}

						if (a == "5")
						{
							a = "May";
						}

						if (a == "6")
						{
							a = "June";
						}

						if (a == "7")
						{
							a = "July";
						}

						if (a == "8")
						{
							a = "August";
						}

						if (a == "9")
						{
							a = "September";
						}

						if (a == "10")
						{
							a = "October";
						}

						if (a == "11")
						{
							a = "November";
						}

						if (a == "12")
						{
							a = "December";
						}

						this->chart1->Series["Summon (RM)"]->Points->AddXY(a, read2->GetInt32("total"));
					}

					read2->Close();
				}
				catch (Exception^ex)
				{
					MessageBox::Show(ex->Message);
				}
			}
		}
		
	}

	// show road tax and summon
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	income = false;
	chart1->Visible = true;
	chart2->Visible = false;

}

		 //show total income
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	income = true;
	chart1->Visible = false;
	chart2->Visible = true;
}
private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

	if (e->KeyCode == Keys::Enter)
	{
		if (textBox1->Text == "")
		{
			MessageBox::Show("Pease insert the year");
		}

		else
		{

			year = 1;
		
			int a;

			a = Int32::Parse(textBox1->Text);

			a = a + year;

			textBox2->Text = a.ToString();
		}
	}
}
};
}
