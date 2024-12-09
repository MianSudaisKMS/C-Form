#pragma once

namespace myform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainform
	/// </summary>
	public ref class mainform : public System::Windows::Forms::Form
	{
	public:
		mainform(void)
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
		~mainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtname;
	private: System::Windows::Forms::TextBox^ txtemail;
	private: System::Windows::Forms::TextBox^ txtnumber;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnreset;
	private: System::Windows::Forms::Button^ btnsubmit;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainform::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtname = (gcnew System::Windows::Forms::TextBox());
			this->txtemail = (gcnew System::Windows::Forms::TextBox());
			this->txtnumber = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnreset = (gcnew System::Windows::Forms::Button());
			this->btnsubmit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Cornsilk;
			this->label1->Location = System::Drawing::Point(119, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Full Name :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Cornsilk;
			this->label2->Location = System::Drawing::Point(145, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Cornsilk;
			this->label3->Location = System::Drawing::Point(139, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Phone :";
			// 
			// txtname
			// 
			this->txtname->Location = System::Drawing::Point(205, 109);
			this->txtname->Name = L"txtname";
			this->txtname->Size = System::Drawing::Size(204, 20);
			this->txtname->TabIndex = 3;
			// 
			// txtemail
			// 
			this->txtemail->Location = System::Drawing::Point(205, 152);
			this->txtemail->Name = L"txtemail";
			this->txtemail->Size = System::Drawing::Size(204, 20);
			this->txtemail->TabIndex = 4;
			// 
			// txtnumber
			// 
			this->txtnumber->Location = System::Drawing::Point(205, 199);
			this->txtnumber->Name = L"txtnumber";
			this->txtnumber->Size = System::Drawing::Size(204, 20);
			this->txtnumber->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Cornsilk;
			this->label4->Location = System::Drawing::Point(135, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(265, 39);
			this->label4->TabIndex = 6;
			this->label4->Text = L"SIMPLE FROM";
			// 
			// btnreset
			// 
			this->btnreset->Location = System::Drawing::Point(334, 256);
			this->btnreset->Name = L"btnreset";
			this->btnreset->Size = System::Drawing::Size(75, 30);
			this->btnreset->TabIndex = 7;
			this->btnreset->Text = L"Reset";
			this->btnreset->UseVisualStyleBackColor = true;
			this->btnreset->Click += gcnew System::EventHandler(this, &mainform::btnreset_Click);
			// 
			// btnsubmit
			// 
			this->btnsubmit->Location = System::Drawing::Point(205, 256);
			this->btnsubmit->Name = L"btnsubmit";
			this->btnsubmit->Size = System::Drawing::Size(75, 30);
			this->btnsubmit->TabIndex = 8;
			this->btnsubmit->Text = L"Submit";
			this->btnsubmit->UseVisualStyleBackColor = true;
			this->btnsubmit->Click += gcnew System::EventHandler(this, &mainform::btnsubmit_Click);
			// 
			// mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(551, 355);
			this->Controls->Add(this->btnsubmit);
			this->Controls->Add(this->btnreset);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtnumber);
			this->Controls->Add(this->txtemail);
			this->Controls->Add(this->txtname);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"mainform";
			this->Text = L"mainform";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnreset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtname->Text = "";
		this->txtemail->Text = "";
		this->txtnumber->Text = "";
	}
private: System::Void btnsubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->txtname->Text->Trim() == "")
	{
		MessageBox::Show("Please Enter Name", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (this->txtemail->Text->Trim() == "")
	{
		MessageBox::Show("Please Enter Email ID", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (this->txtnumber->Text->Trim() == "")
	{
		MessageBox::Show("Please Enter Mobile Number", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		MessageBox::Show("Data Submitted Successflly", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
};
}
