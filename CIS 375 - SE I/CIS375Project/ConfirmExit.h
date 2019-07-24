#pragma once
namespace CIS375Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ConfirmExit
	/// </summary>
	public ref class ConfirmExit : public System::Windows::Forms::Form
	{
	public:
		ConfirmExit(void)
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
		~ConfirmExit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ConfirmExit::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(62, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Exit Window\?";
			this->label1->Click += gcnew System::EventHandler(this, &ConfirmExit::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(44, 44);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(219, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConfirmExit::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(288, 80);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 26);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ConfirmExit::button2_Click);
			// 
			// ConfirmExit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(363, 118);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"ConfirmExit";
			this->Text = L"Confirm Exit";
			this->Load += gcnew System::EventHandler(this, &ConfirmExit::ConfirmExit_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ConfirmExit_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {;
			 for (int i = Application::OpenForms->Count - 1; i >= 0; i--) {
				 if (Application::OpenForms[i]->Name == "clientInfo") {
					 Application::OpenForms[i]->Close();
				 }
				 else if (Application::OpenForms[i]->Name == "clientInfo") {
					 Application::OpenForms[i]->Close();
				 }
				 else if (Application::OpenForms[i]->Name == "waitingList") {
					 Application::OpenForms[i]->Close();
				 }
				 else if (Application::OpenForms[i]->Name == "jobApproval") {
					 Application::OpenForms[i]->Close();
				 }
				 else  if (Application::OpenForms[i]->Name == "Notification") {
					 Application::OpenForms[i]->Close();
				 }
				 else if (Application::OpenForms[i]->Name == "payment") {
					 Application::OpenForms[i]->Close();
				 }
				 else  if (Application::OpenForms[i]->Name == "TechnicianInfo") {
					 Application::OpenForms[i]->Close();
				 }
				 else  if (Application::OpenForms[i]->Name == "timeBlock") {
					 Application::OpenForms[i]->Close();
				 }
				 ConfirmExit::Close();
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	ConfirmExit::Close();
}
};
}
