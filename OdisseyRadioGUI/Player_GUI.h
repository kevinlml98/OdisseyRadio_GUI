#include "pch.h"

namespace OdisseyRadioGUI {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Player_GUI
	/// </summary>
	public ref class Player_GUI : public System::Windows::Forms::Form
	{
 
		
	


	public:
		Player_GUI(void)
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
		~Player_GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ containerLibrary;
	private: System::Windows::Forms::ListBox^ containerPage;
	

	private: System::Windows::Forms::Button^ btnplay;
	private: System::Windows::Forms::Button^ btnstop;
	private: System::Windows::Forms::Button^ btninfo;
	private: System::Windows::Forms::Button^ btnload;

	private: System::Windows::Forms::CheckBox^ btnpagination;
	
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	
	private: System::Windows::Forms::Label^ labelTrackInfo;
	private: System::Windows::Forms::Label^ labelLibrary;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;


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
			this->containerLibrary = (gcnew System::Windows::Forms::ListBox());
			this->containerPage = (gcnew System::Windows::Forms::ListBox());
			this->btnplay = (gcnew System::Windows::Forms::Button());
			this->btnload = (gcnew System::Windows::Forms::Button());
			this->labelTrackInfo = (gcnew System::Windows::Forms::Label());
			this->btnstop = (gcnew System::Windows::Forms::Button());
			this->btninfo = (gcnew System::Windows::Forms::Button());
			this->btnpagination = (gcnew System::Windows::Forms::CheckBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->labelLibrary = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// containerLibrary
			// 
			this->containerLibrary->FormattingEnabled = true;
			this->containerLibrary->ItemHeight = 16;
			this->containerLibrary->Location = System::Drawing::Point(12, 60);
			this->containerLibrary->Name = L"containerLibrary";
			this->containerLibrary->Size = System::Drawing::Size(177, 388);
			this->containerLibrary->TabIndex = 0;
			// 
			// containerPage
			// 
			this->containerPage->FormattingEnabled = true;
			this->containerPage->ItemHeight = 16;
			this->containerPage->Location = System::Drawing::Point(209, 12);
			this->containerPage->Name = L"containerPage";
			this->containerPage->Size = System::Drawing::Size(778, 324);
			this->containerPage->TabIndex = 1;
			// 
			// btnplay
			// 
			this->btnplay->Location = System::Drawing::Point(860, 355);
			this->btnplay->Name = L"btnplay";
			this->btnplay->Size = System::Drawing::Size(62, 38);
			this->btnplay->TabIndex = 2;
			this->btnplay->Text = L"Play";
			this->btnplay->UseVisualStyleBackColor = true;
			// 
			// btnload
			// 
			this->btnload->Location = System::Drawing::Point(36, 463);
			this->btnload->Name = L"btnload";
			this->btnload->Size = System::Drawing::Size(120, 44);
			this->btnload->TabIndex = 3;
			this->btnload->Text = L"Load Library";
			this->btnload->UseVisualStyleBackColor = true;
			this->btnload->Click += gcnew System::EventHandler(this, &Player_GUI::btnload_Click);
			// 
			// labelTrackInfo
			// 
			this->labelTrackInfo->AutoSize = true;
			this->labelTrackInfo->Location = System::Drawing::Point(209, 376);
			this->labelTrackInfo->Name = L"labelTrackInfo";
			this->labelTrackInfo->Size = System::Drawing::Size(95, 17);
			this->labelTrackInfo->TabIndex = 4;
			this->labelTrackInfo->Text = L"Ready to play";
			// 
			// btnstop
			// 
			this->btnstop->Location = System::Drawing::Point(928, 355);
			this->btnstop->Name = L"btnstop";
			this->btnstop->Size = System::Drawing::Size(59, 38);
			this->btnstop->TabIndex = 5;
			this->btnstop->Text = L"Stop";
			this->btnstop->UseVisualStyleBackColor = true;
			// 
			// btninfo
			// 
			this->btninfo->Location = System::Drawing::Point(860, 417);
			this->btninfo->Name = L"btninfo";
			this->btninfo->Size = System::Drawing::Size(127, 31);
			this->btninfo->TabIndex = 6;
			this->btninfo->Text = L"Infomation";
			this->btninfo->UseVisualStyleBackColor = true;
			// 
			// btnpagination
			// 
			this->btnpagination->AutoSize = true;
			this->btnpagination->Checked = true;
			this->btnpagination->CheckState = System::Windows::Forms::CheckState::Checked;
			this->btnpagination->Location = System::Drawing::Point(860, 465);
			this->btnpagination->Name = L"btnpagination";
			this->btnpagination->Size = System::Drawing::Size(97, 21);
			this->btnpagination->TabIndex = 8;
			this->btnpagination->Text = L"Pagination";
			this->btnpagination->UseVisualStyleBackColor = true;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(212, 424);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(617, 23);
			this->progressBar1->TabIndex = 9;
			// 
			// labelLibrary
			// 
			this->labelLibrary->AutoSize = true;
			this->labelLibrary->Location = System::Drawing::Point(13, 24);
			this->labelLibrary->Name = L"labelLibrary";
			this->labelLibrary->Size = System::Drawing::Size(52, 17);
			this->labelLibrary->TabIndex = 10;
			this->labelLibrary->Text = L"Library";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Player_GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1013, 519);
			this->Controls->Add(this->labelLibrary);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->btnpagination);
			this->Controls->Add(this->btninfo);
			this->Controls->Add(this->btnstop);
			this->Controls->Add(this->labelTrackInfo);
			this->Controls->Add(this->btnload);
			this->Controls->Add(this->btnplay);
			this->Controls->Add(this->containerPage);
			this->Controls->Add(this->containerLibrary);
			this->Name = L"Player_GUI";
			this->Text = L"Odissey Radio";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		private: CVCLibrary cvclibrary;


private: System::Void btnload_Click(System::Object^ sender, System::EventArgs^ e) {


	openFileDialog1->InitialDirectory = "C:\\Users\\kevin\\Desktop";
	openFileDialog1->Filter = "Archivos CVC (*.cvc)|*.cvc";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ ruta = openFileDialog1->FileName;

		String^ title = openFileDialog1->SafeFileName;
		
		
		cvclibrary.insertNode(ruta, title);

		containerLibrary->Items->Add(title);
		containerLibrary->EndUpdate();
	}

	

	

}
};
}
