#pragma once
#include "ConfirmExit.h"

namespace CIS375Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for jobApproval
	/// </summary>
	public ref class jobApproval : public System::Windows::Forms::Form
	{
	public:
		jobApproval(void)
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
		~jobApproval()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(jobApproval::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Invoice 18 - Priority 4", L"Invoice 15 - Priority 3",
					L"Invoice 23 - Priority 2", L""
			});
			this->comboBox1->Location = System::Drawing::Point(43, 61);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(159, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"--Select--";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &jobApproval::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(33, 154);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 39);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Approve Request";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &jobApproval::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(137, 154);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Decline Request";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &jobApproval::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(388, 231);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 21);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &jobApproval::button3_Click);
			// 
			// jobApproval
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(440, 264);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"jobApproval";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Manage Approval";
			this->ResumeLayout(false);

		}

#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	comboBox1->Items->Remove(comboBox1->SelectedItem);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	comboBox1->Items->Remove(comboBox1->SelectedItem);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	ConfirmExit ^form = gcnew ConfirmExit();
	form->Show();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
