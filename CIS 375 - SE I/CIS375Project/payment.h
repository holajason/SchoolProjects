#pragma once
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
	/// Summary for payment
	/// </summary>
	public ref class payment : public System::Windows::Forms::Form
	{
	public:
		payment(void)
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
		~payment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
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
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
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
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(124, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(489, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Osric\'s Office Appliances and D¨¦cor";
			this->label1->Click += gcnew System::EventHandler(this, &payment::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(207, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CLIENT NAME AND MAILING ADDRESS";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"CLIENT FIRST NAME";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(442, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"CLIENT PRIORITY NO.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 192);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"CLIENT ADDRESS";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(34, 241);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"CITY";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(162, 241);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"STATE";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(227, 241);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"ZIP CODE";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(39, 290);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(95, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"PHONE NUMBER";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(442, 241);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"JOB DESCRIPTION";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(442, 137);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"INVOICE NO.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(442, 167);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 13);
			this->label12->TabIndex = 11;
			this->label12->Text = L"PAGE NO.";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(442, 193);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(80, 13);
			this->label13->TabIndex = 12;
			this->label13->Text = L"BILLING DATE";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(34, 438);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(93, 13);
			this->label14->TabIndex = 13;
			this->label14->Text = L"PRIOR BALANCE";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(37, 157);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 20);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &payment::textBox1_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(176, 141);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(109, 13);
			this->label15->TabIndex = 15;
			this->label15->Text = L"CLIENT LAST NAME";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(179, 157);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(106, 20);
			this->textBox2->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(37, 208);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(247, 20);
			this->textBox3->TabIndex = 17;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(37, 257);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(110, 20);
			this->textBox4->TabIndex = 18;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(165, 257);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(35, 20);
			this->textBox5->TabIndex = 19;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(230, 257);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(54, 20);
			this->textBox6->TabIndex = 20;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(37, 306);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 21;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(625, 137);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(86, 20);
			this->textBox8->TabIndex = 22;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(625, 163);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(86, 20);
			this->textBox9->TabIndex = 23;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(625, 189);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(86, 20);
			this->textBox10->TabIndex = 24;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(625, 215);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(86, 20);
			this->textBox11->TabIndex = 25;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(445, 257);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(266, 150);
			this->textBox12->TabIndex = 26;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(176, 438);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(110, 13);
			this->label16->TabIndex = 27;
			this->label16->Text = L"CURRENT CREDITS";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(329, 438);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(108, 13);
			this->label17->TabIndex = 28;
			this->label17->Text = L"CURRENT CHARGE";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(475, 438);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(85, 13);
			this->label18->TabIndex = 29;
			this->label18->Text = L"NEW BALANCE";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(623, 438);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(80, 13);
			this->label19->TabIndex = 30;
			this->label19->Text = L"AMOUNT DUE";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(34, 524);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(79, 13);
			this->label20->TabIndex = 31;
			this->label20->Text = L"CLIENT NAME";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(248, 524);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(36, 13);
			this->label21->TabIndex = 32;
			this->label21->Text = L"DATE";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(398, 524);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(33, 13);
			this->label22->TabIndex = 33;
			this->label22->Text = L"TIME";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(544, 524);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(62, 13);
			this->label23->TabIndex = 34;
			this->label23->Text = L"COMMENT";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(37, 454);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(85, 20);
			this->textBox13->TabIndex = 35;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(179, 454);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(85, 20);
			this->textBox14->TabIndex = 36;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(332, 454);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(85, 20);
			this->textBox15->TabIndex = 37;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(478, 454);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(85, 20);
			this->textBox16->TabIndex = 38;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(626, 454);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(85, 20);
			this->textBox17->TabIndex = 39;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(37, 540);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(133, 20);
			this->textBox18->TabIndex = 40;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(251, 540);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(86, 20);
			this->textBox19->TabIndex = 41;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(401, 540);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(84, 20);
			this->textBox20->TabIndex = 42;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(547, 540);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(174, 20);
			this->textBox21->TabIndex = 43;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(114, 583);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 44;
			this->button1->Text = L"FINISH";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &payment::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(569, 583);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 45;
			this->button2->Text = L"DISCARD";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &payment::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(342, 583);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 46;
			this->button3->Text = L"SAVE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &payment::button3_Click);
			// 
			// payment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(750, 617);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
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
			this->Controls->Add(this->label1);
			this->Name = L"payment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Payment";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		payment::Hide();

	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	saveChanges ^form1 = gcnew saveChanges();
	form1->Show();

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	ConfirmExit ^form = gcnew ConfirmExit();
	form->Show();
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if(textBox1->Text->Equals("Tony")) {
		textBox2->Text = "Smith";
		textBox3->Text = "999 Gealthy Dr";
		textBox4->Text = "Dearborn";
		textBox5->Text = "MI";
		textBox6->Text = " 48123";
		textBox7->Text = "734-999-1234";
		textBox8->Text = "8";
		textBox9->Text = "1";
		textBox10->Text = "8/17/2018";
		textBox11->Text = "2";
		textBox12->Text = "Telecommuncation Installation";
		textBox13->Text = "0.00";
		textBox14->Text = "0.00";
		textBox15->Text = "$400";
		textBox16->Text = "0.00";
		textBox17->Text = "$400";
		textBox18->Text = "Tony Smith";
		textBox19->Text = "8/17/2018";
		textBox20->Text = "3:45 PM";
		textBox21->Text = "Successful Payment- Thank You";
	}

	else if (textBox1->Text->Equals("Zack")) {
		textBox2->Text = "Jones";
		textBox3->Text = "999 GarryHill Street";
		textBox4->Text = "Westbloom Field";
		textBox5->Text = "MI";
		textBox6->Text = " 48555";
		textBox7->Text = "248-693-8534";
		textBox8->Text = "10";
		textBox9->Text = "1";
		textBox10->Text = "8/17/2018";
		textBox11->Text = "3";
		textBox12->Text = "Redecorate Office";
		textBox13->Text = "0.00";
		textBox14->Text = "500";
		textBox15->Text = "1200";
		textBox16->Text = "700";
		textBox17->Text = "700";
		textBox18->Text = "Zack Jones";
		textBox19->Text = "8/17/2018";
		textBox20->Text = "4:45 PM";
		textBox21->Text = "Successful Payment- Thank You";
	}
	else {
		if (textBox1->Text->Equals("")) {
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
			textBox13->Text = "0.00";
			textBox14->Text = "0.00";
			textBox15->Text = "0.00";
			textBox16->Text = "0.00";
			textBox17->Text = "0.00";
			textBox18->Text = "";
			textBox19->Text = "";
			textBox20->Text = "";
			textBox21->Text = "";
		}
	}
}
};
}
