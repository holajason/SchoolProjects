#pragma once

namespace CIS375Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for report
	/// </summary>
	public ref class report : public System::Windows::Forms::Form
	{
	public:
		report(void)
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
		~report()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::BindingNavigator^  bindingNavigator1;
	protected:
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorAddNewItem;
	private: System::Windows::Forms::ToolStripLabel^  bindingNavigatorCountItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorDeleteItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMoveFirstItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMovePreviousItem;
	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator;
	private: System::Windows::Forms::ToolStripTextBox^  bindingNavigatorPositionItem;
	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator1;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMoveNextItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMoveLastItem;
	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator2;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  reportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  invoiceReportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  waitingListReportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  statisticsReportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  servicesRequestAssignmentReportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  outstandingJobReportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  priorityQueueReportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  averageQueueLengthToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  percentageEmptyQueueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  queueStatisticToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^  standardDeviationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  meanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  waitListReportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  averageWaitTimeReportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  jobDurationToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(report::typeid));
			this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
			this->bindingNavigatorAddNewItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorCountItem = (gcnew System::Windows::Forms::ToolStripLabel());
			this->bindingNavigatorDeleteItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveFirstItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMovePreviousItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorPositionItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->bindingNavigatorSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorMoveNextItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveLastItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->reportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->invoiceReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->waitingListReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statisticsReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->servicesRequestAssignmentReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->outstandingJobReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->priorityQueueReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->averageQueueLengthToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->percentageEmptyQueueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->queueStatisticToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->waitListReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->averageWaitTimeReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jobDurationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardDeviationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->meanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->BeginInit();
			this->bindingNavigator1->SuspendLayout();
			this->SuspendLayout();
			// 
			// bindingNavigator1
			// 
			this->bindingNavigator1->AddNewItem = this->bindingNavigatorAddNewItem;
			this->bindingNavigator1->CountItem = this->bindingNavigatorCountItem;
			this->bindingNavigator1->DeleteItem = this->bindingNavigatorDeleteItem;
			this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->bindingNavigatorMoveFirstItem,
					this->bindingNavigatorMovePreviousItem, this->bindingNavigatorSeparator, this->bindingNavigatorPositionItem, this->bindingNavigatorCountItem,
					this->bindingNavigatorSeparator1, this->bindingNavigatorMoveNextItem, this->bindingNavigatorMoveLastItem, this->bindingNavigatorSeparator2,
					this->bindingNavigatorAddNewItem, this->bindingNavigatorDeleteItem, this->toolStripDropDownButton1
			});
			this->bindingNavigator1->Location = System::Drawing::Point(0, 0);
			this->bindingNavigator1->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
			this->bindingNavigator1->MoveLastItem = this->bindingNavigatorMoveLastItem;
			this->bindingNavigator1->MoveNextItem = this->bindingNavigatorMoveNextItem;
			this->bindingNavigator1->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
			this->bindingNavigator1->Name = L"bindingNavigator1";
			this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
			this->bindingNavigator1->Size = System::Drawing::Size(719, 25);
			this->bindingNavigator1->TabIndex = 0;
			this->bindingNavigator1->Text = L"bindingNavigator1";
			// 
			// bindingNavigatorAddNewItem
			// 
			this->bindingNavigatorAddNewItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorAddNewItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorAddNewItem.Image")));
			this->bindingNavigatorAddNewItem->Name = L"bindingNavigatorAddNewItem";
			this->bindingNavigatorAddNewItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorAddNewItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorAddNewItem->Text = L"Add new";
			// 
			// bindingNavigatorCountItem
			// 
			this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
			this->bindingNavigatorCountItem->Size = System::Drawing::Size(35, 22);
			this->bindingNavigatorCountItem->Text = L"of {0}";
			this->bindingNavigatorCountItem->ToolTipText = L"Total number of items";
			// 
			// bindingNavigatorDeleteItem
			// 
			this->bindingNavigatorDeleteItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorDeleteItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorDeleteItem.Image")));
			this->bindingNavigatorDeleteItem->Name = L"bindingNavigatorDeleteItem";
			this->bindingNavigatorDeleteItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorDeleteItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorDeleteItem->Text = L"Delete";
			// 
			// bindingNavigatorMoveFirstItem
			// 
			this->bindingNavigatorMoveFirstItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveFirstItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveFirstItem.Image")));
			this->bindingNavigatorMoveFirstItem->Name = L"bindingNavigatorMoveFirstItem";
			this->bindingNavigatorMoveFirstItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveFirstItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveFirstItem->Text = L"Move first";
			// 
			// bindingNavigatorMovePreviousItem
			// 
			this->bindingNavigatorMovePreviousItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMovePreviousItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMovePreviousItem.Image")));
			this->bindingNavigatorMovePreviousItem->Name = L"bindingNavigatorMovePreviousItem";
			this->bindingNavigatorMovePreviousItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMovePreviousItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMovePreviousItem->Text = L"Move previous";
			// 
			// bindingNavigatorSeparator
			// 
			this->bindingNavigatorSeparator->Name = L"bindingNavigatorSeparator";
			this->bindingNavigatorSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// bindingNavigatorPositionItem
			// 
			this->bindingNavigatorPositionItem->AccessibleName = L"Position";
			this->bindingNavigatorPositionItem->AutoSize = false;
			this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
			this->bindingNavigatorPositionItem->Size = System::Drawing::Size(50, 23);
			this->bindingNavigatorPositionItem->Text = L"0";
			this->bindingNavigatorPositionItem->ToolTipText = L"Current position";
			// 
			// bindingNavigatorSeparator1
			// 
			this->bindingNavigatorSeparator1->Name = L"bindingNavigatorSeparator1";
			this->bindingNavigatorSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// bindingNavigatorMoveNextItem
			// 
			this->bindingNavigatorMoveNextItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveNextItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveNextItem.Image")));
			this->bindingNavigatorMoveNextItem->Name = L"bindingNavigatorMoveNextItem";
			this->bindingNavigatorMoveNextItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveNextItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveNextItem->Text = L"Move next";
			// 
			// bindingNavigatorMoveLastItem
			// 
			this->bindingNavigatorMoveLastItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveLastItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveLastItem.Image")));
			this->bindingNavigatorMoveLastItem->Name = L"bindingNavigatorMoveLastItem";
			this->bindingNavigatorMoveLastItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveLastItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveLastItem->Text = L"Move last";
			// 
			// bindingNavigatorSeparator2
			// 
			this->bindingNavigatorSeparator2->Name = L"bindingNavigatorSeparator2";
			this->bindingNavigatorSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reportToolStripMenuItem });
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(29, 22);
			this->toolStripDropDownButton1->Text = L"toolStripDropDownButton1";
			// 
			// reportToolStripMenuItem
			// 
			this->reportToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->invoiceReportToolStripMenuItem,
					this->waitingListReportToolStripMenuItem, this->statisticsReportToolStripMenuItem, this->servicesRequestAssignmentReportToolStripMenuItem,
					this->outstandingJobReportToolStripMenuItem, this->priorityQueueReportToolStripMenuItem, this->waitListReportToolStripMenuItem,
					this->standardDeviationToolStripMenuItem, this->meanToolStripMenuItem
			});
			this->reportToolStripMenuItem->Name = L"reportToolStripMenuItem";
			this->reportToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->reportToolStripMenuItem->Text = L"Report";
			// 
			// invoiceReportToolStripMenuItem
			// 
			this->invoiceReportToolStripMenuItem->Name = L"invoiceReportToolStripMenuItem";
			this->invoiceReportToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->invoiceReportToolStripMenuItem->Text = L"Invoice Report";
			// 
			// waitingListReportToolStripMenuItem
			// 
			this->waitingListReportToolStripMenuItem->Name = L"waitingListReportToolStripMenuItem";
			this->waitingListReportToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->waitingListReportToolStripMenuItem->Text = L"Waiting-List Report";
			this->waitingListReportToolStripMenuItem->Click += gcnew System::EventHandler(this, &report::waitingListReportToolStripMenuItem_Click);
			// 
			// statisticsReportToolStripMenuItem
			// 
			this->statisticsReportToolStripMenuItem->Name = L"statisticsReportToolStripMenuItem";
			this->statisticsReportToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->statisticsReportToolStripMenuItem->Text = L"Statistics Report";
			// 
			// servicesRequestAssignmentReportToolStripMenuItem
			// 
			this->servicesRequestAssignmentReportToolStripMenuItem->Name = L"servicesRequestAssignmentReportToolStripMenuItem";
			this->servicesRequestAssignmentReportToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->servicesRequestAssignmentReportToolStripMenuItem->Text = L"Services Request Assignment Report";
			// 
			// outstandingJobReportToolStripMenuItem
			// 
			this->outstandingJobReportToolStripMenuItem->Name = L"outstandingJobReportToolStripMenuItem";
			this->outstandingJobReportToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->outstandingJobReportToolStripMenuItem->Text = L"Outstanding Job Report";
			this->outstandingJobReportToolStripMenuItem->Click += gcnew System::EventHandler(this, &report::outstandingJobReportToolStripMenuItem_Click);
			// 
			// priorityQueueReportToolStripMenuItem
			// 
			this->priorityQueueReportToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->averageQueueLengthToolStripMenuItem,
					this->percentageEmptyQueueToolStripMenuItem, this->queueStatisticToolStripMenuItem
			});
			this->priorityQueueReportToolStripMenuItem->Name = L"priorityQueueReportToolStripMenuItem";
			this->priorityQueueReportToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->priorityQueueReportToolStripMenuItem->Text = L"Priority Queue Report";
			// 
			// averageQueueLengthToolStripMenuItem
			// 
			this->averageQueueLengthToolStripMenuItem->Name = L"averageQueueLengthToolStripMenuItem";
			this->averageQueueLengthToolStripMenuItem->Size = System::Drawing::Size(208, 22);
			this->averageQueueLengthToolStripMenuItem->Text = L"Average Queue Length";
			// 
			// percentageEmptyQueueToolStripMenuItem
			// 
			this->percentageEmptyQueueToolStripMenuItem->Name = L"percentageEmptyQueueToolStripMenuItem";
			this->percentageEmptyQueueToolStripMenuItem->Size = System::Drawing::Size(208, 22);
			this->percentageEmptyQueueToolStripMenuItem->Text = L"Percentage Empty Queue";
			// 
			// queueStatisticToolStripMenuItem
			// 
			this->queueStatisticToolStripMenuItem->Name = L"queueStatisticToolStripMenuItem";
			this->queueStatisticToolStripMenuItem->Size = System::Drawing::Size(208, 22);
			this->queueStatisticToolStripMenuItem->Text = L"Queue Statistic";
			// 
			// waitListReportToolStripMenuItem
			// 
			this->waitListReportToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->averageWaitTimeReportToolStripMenuItem,
					this->jobDurationToolStripMenuItem
			});
			this->waitListReportToolStripMenuItem->Name = L"waitListReportToolStripMenuItem";
			this->waitListReportToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->waitListReportToolStripMenuItem->Text = L"Wait-List Report";
			// 
			// averageWaitTimeReportToolStripMenuItem
			// 
			this->averageWaitTimeReportToolStripMenuItem->Name = L"averageWaitTimeReportToolStripMenuItem";
			this->averageWaitTimeReportToolStripMenuItem->Size = System::Drawing::Size(212, 22);
			this->averageWaitTimeReportToolStripMenuItem->Text = L"Average Wait Time Report";
			// 
			// jobDurationToolStripMenuItem
			// 
			this->jobDurationToolStripMenuItem->Name = L"jobDurationToolStripMenuItem";
			this->jobDurationToolStripMenuItem->Size = System::Drawing::Size(212, 22);
			this->jobDurationToolStripMenuItem->Text = L"Job Duration";
			// 
			// standardDeviationToolStripMenuItem
			// 
			this->standardDeviationToolStripMenuItem->Name = L"standardDeviationToolStripMenuItem";
			this->standardDeviationToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->standardDeviationToolStripMenuItem->Text = L"Standard Deviation";
			// 
			// meanToolStripMenuItem
			// 
			this->meanToolStripMenuItem->Name = L"meanToolStripMenuItem";
			this->meanToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->meanToolStripMenuItem->Text = L"Mean";
			// 
			// report
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(719, 493);
			this->Controls->Add(this->bindingNavigator1);
			this->Name = L"report";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Report";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->EndInit();
			this->bindingNavigator1->ResumeLayout(false);
			this->bindingNavigator1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void outstandingJobReportToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void waitingListReportToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
