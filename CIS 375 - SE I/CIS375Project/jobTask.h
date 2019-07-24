#pragma once

namespace CIS375Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for jobTask
	/// </summary>
	public ref class jobTask : public System::Windows::Forms::Form
	{
	public:
		jobTask(void)
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
		~jobTask()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::Button^  button5;
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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"5",
					L"3", L"Redecorate Osric Office", L"8/25/2018", L"Marco", L"2:00 PM", L"Ongoing"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"3",
					L"2", L"Decorate Atsail Executvie Office", L"8/28/2018", L"Martin", L"8:00 AM", L"Ongoing"
			}, -1));
			System::Windows::Forms::ColumnHeader^  columnHeader7;
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, columnHeader7
			});
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(2) { listViewItem1, listViewItem2 });
			this->listView1->Location = System::Drawing::Point(-4, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(684, 296);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Invoice NO.";
			this->columnHeader1->Width = 76;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"P.NO.";
			this->columnHeader2->Width = 51;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Job Overview";
			this->columnHeader3->Width = 241;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Date";
			this->columnHeader4->Width = 71;
			// 
			// columnHeader5
			// 
			this->columnHeader5->DisplayIndex = 5;
			this->columnHeader5->Text = L"Assigned Technician";
			this->columnHeader5->Width = 117;
			// 
			// columnHeader6
			// 
			this->columnHeader6->DisplayIndex = 4;
			this->columnHeader6->Text = L"Time";
			this->columnHeader6->Width = 66;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 312);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &jobTask::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(221, 313);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(548, 313);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(71, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &jobTask::button5_Click);
			// 
			// columnHeader7
			// 
			columnHeader7->Text = L"Status";
			columnHeader7->Width = 57;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(384, 313);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Pause";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// jobTask
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 347);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Name = L"jobTask";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Job List";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	jobTask::Hide();
}
};
}
