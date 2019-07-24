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
	/// Summary for waitingList
	/// </summary>
	public ref class waitingList : public System::Windows::Forms::Form
	{
	public:
		waitingList(void)
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
		~waitingList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;


	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::Button^  button4;

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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"18",
					L"4", L"Redecorate Mr.IGotMoney Executive Office", L"9:45 AM", L"8/12/2018", L"Pending", L"0.5"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"15",
					L"3", L"Mr. McMan have a Leaking Roof", L"2:25 PM", L"8/11/2018", L"Pending", L"1"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"23",
					L"2", L"Remodeling Mr.Peter Office", L"12:35 Pm", L"8/12/2018", L"Pending", L"1"
			}, -1));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1, this->columnHeader6,
					this->columnHeader2, this->columnHeader5, this->columnHeader7, this->columnHeader4, this->columnHeader3
			});
			this->listView1->FullRowSelect = true;
			this->listView1->HideSelection = false;
			this->listView1->HoverSelection = true;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(3) {
				listViewItem1, listViewItem2,
					listViewItem3
			});
			this->listView1->Location = System::Drawing::Point(1, 39);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(760, 249);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Job No.";
			this->columnHeader1->Width = 77;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"P. NO.";
			this->columnHeader6->Width = 62;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Job Overview";
			this->columnHeader2->Width = 310;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Time";
			this->columnHeader5->Width = 90;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Date";
			this->columnHeader7->Width = 76;
			// 
			// columnHeader4
			// 
			this->columnHeader4->DisplayIndex = 6;
			this->columnHeader4->Text = L"Status";
			this->columnHeader4->Width = 73;
			// 
			// columnHeader3
			// 
			this->columnHeader3->DisplayIndex = 5;
			this->columnHeader3->Text = L"Day-Block";
			this->columnHeader3->Width = 66;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &waitingList::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(428, 331);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &waitingList::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 21.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(288, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 36);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Waiting- List";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(622, 331);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Discard";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &waitingList::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(58, 317);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 37);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Increase Priority";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// waitingList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(756, 366);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Name = L"waitingList";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Waiting List";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void vScrollBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i = listView1->Items->Count - 1; i >= 0; i--) {
			if (listView1->Items[i]->Selected) {
				listView1->Items[i]->Remove();
			}
		}
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	ConfirmExit ^form = gcnew ConfirmExit();
	form->Show();
}
};
}
