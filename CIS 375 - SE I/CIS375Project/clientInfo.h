#pragma once
#include "apptDate.h"
#include "ConfirmExit.h"
#include "saveChanges.h"

namespace CIS375Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for clientInfo
	/// </summary>
	public ref class clientInfo : public System::Windows::Forms::Form
	{
	public:
		String ^companyNo, ^clientName;
		String ^companyNo2, ^clientName2;
		clientInfo(void)
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
		~clientInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Button^  button4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(clientInfo::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->textBox1->Location = System::Drawing::Point(102, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &clientInfo::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(235, 81);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(117, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &clientInfo::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(102, 133);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(127, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &clientInfo::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(102, 182);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(127, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(414, 83);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(187, 20);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(414, 131);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(86, 20);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(506, 130);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(36, 20);
			this->textBox7->TabIndex = 6;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &clientInfo::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(548, 132);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(52, 20);
			this->textBox8->TabIndex = 7;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &clientInfo::textBox8_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(98, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Appt. Date";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &clientInfo::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"5", L"4", L"3", L"2", L"1" });
			this->comboBox1->Location = System::Drawing::Point(316, 184);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(36, 21);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->Text = L"0";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &clientInfo::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(296, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 14);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Priority NO.";
			// 
			// textBox9
			// 
			this->textBox9->AcceptsReturn = true;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(413, 182);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(224, 220);
			this->textBox9->TabIndex = 11;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &clientInfo::textBox9_TextChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(113, 414);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 30);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &clientInfo::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(548, 414);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 30);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Discard";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &clientInfo::button3_Click);
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->textBox10->Location = System::Drawing::Point(102, 233);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(127, 20);
			this->textBox10->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(99, 335);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 15);
			this->label2->TabIndex = 15;
			this->label2->Click += gcnew System::EventHandler(this, &clientInfo::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(99, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 15);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Client First Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(232, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 15);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Client Last Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(99, 217);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(132, 15);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Client Company Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(99, 115);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 15);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Client Phone Number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(99, 166);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 15);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Client Email";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(411, 66);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 15);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Client/Company Address";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(411, 116);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 15);
			this->label9->TabIndex = 22;
			this->label9->Text = L"City";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(503, 115);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 15);
			this->label10->TabIndex = 23;
			this->label10->Text = L"State";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(545, 116);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 15);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Zip Code";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(411, 166);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(93, 15);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Job Description";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(102, 300);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(87, 20);
			this->textBox11->TabIndex = 26;
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(213, 300);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(59, 20);
			this->textBox12->TabIndex = 27;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(268, 116);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(84, 15);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Company NO.";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(257, 134);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(95, 20);
			this->textBox13->TabIndex = 29;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &clientInfo::textBox13_TextChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(246, 413);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(89, 30);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Search";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &clientInfo::button4_Click);
			// 
			// clientInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(754, 528);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"clientInfo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Client Info";
			this->Load += gcnew System::EventHandler(this, &clientInfo::clientInfo_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		apptDate^form = gcnew apptDate();
		form->Show();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		ConfirmExit^form1 = gcnew ConfirmExit();
		form1->Show();

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox9->Text == "" || textBox10->Text == "") {

			label2->Text = "* ERROR: MISSING INPUT";
		}
		else
		{
			label2->Text = "";
			saveChanges ^form2 = gcnew saveChanges();
			form2->Show();
		}
	}
	private: System::Void clientInfo_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox8->MaxLength = 5;
	}
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox7->MaxLength = 2;
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox3->MaxLength = 10;
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox1->MaxLength = 15;
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox2->MaxLength = 15;
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		companyNo = "m11111";
		clientName = "Marco";
		companyNo2 = "k22222";
		clientName2 = "King";
		if (textBox13->Text == companyNo || textBox1->Text == clientName) {
			textBox1->Text = "Marco";
			textBox2->Text = "MacMan";
			textBox3->Text = "734-999-9996";
			textBox4->Text = "macrcomc@umich.edu";
			textBox5->Text = "999 Example Street";
			textBox6->Text = " Dearborn";
			textBox7->Text = "MI";
			textBox8->Text = "48123";
			textBox9->Text = "leaking roof and need to be fix ASAP";
			textBox10->Text = "MacroCosnt LLC";
			textBox11->Text = "8/20/2018";
			textBox12->Text = "3:00 PM";
			textBox13->Text = ("m11111");
			comboBox1->SelectedItem = ("3");
		}
		else if (textBox13->Text == companyNo2 || textBox1->Text == clientName2) {
			textBox1->Text = "King";
			textBox2->Text = "Doman";
			textBox3->Text = "313-679-1247";
			textBox4->Text = "Kingdoman@umich.edu";
			textBox5->Text = "6225 Kelly Dr";
			textBox6->Text = " Novi";
			textBox7->Text = "MI";
			textBox8->Text = "48659";
			textBox9->Text = "Redecorate Dental DDS Office";
			textBox10->Text = "King's Dental DDS";
			textBox11->Text = "8/29/2018";
			textBox12->Text = "6:00 PM";
			textBox13->Text = ("k22222");
			comboBox1->SelectedItem = ("2");
		}
	
	/*		if (textBox1->Text ==" " || textBox13->Text == "") {
				textBox1->Text = " ";
				textBox2->Text = "";
				textBox3->Text = "";
				textBox4->Text = "";
				textBox5->Text = "";
				textBox6->Text = "";
				textBox7->Text = "";
				textBox8->Text = "";
				textBox9->Text = "";
				textBox10->Text = "";
				textBox11->Text = "";
				textBox12->Text = "";
				textBox13->Text = ("");
				comboBox1->SelectedItem = ("");
				MessageBox::Show("NOT FOUND");
			}*/
	}
};
}