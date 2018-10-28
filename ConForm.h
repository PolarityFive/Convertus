#pragma once
#include "ConFuncDecleration.h"
#include <iostream>
#include <stdlib.h>

namespace Convertus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ConForm
	/// </summary>
	public ref class ConForm : public System::Windows::Forms::Form
	{
	public:
		ConForm(void)
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
		~ConForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  Label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button5;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 39);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(341, 115);
			this->textBox1->TabIndex = 0;
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Location = System::Drawing::Point(9, 23);
			this->Label1->Name = L"Label1";
			this->Label1->Size = System::Drawing::Size(44, 13);
			this->Label1->TabIndex = 1;
			this->Label1->Text = L"Number";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(12, 196);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(341, 115);
			this->textBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 180);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Result";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(359, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Binary";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(360, 68);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Octal";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ConForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(359, 97);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Decimal";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ConForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(359, 126);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Hexadecimal";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ConForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(380, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Convert to";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(148, 378);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(178, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Clear";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ConForm::button5_Click);
			// 
			// ConForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(472, 413);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->Label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ConForm";
			this->Text = L"Convertus";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->Text == "Convertus from Binary")
	{
		textBox2->Text = textBox1->Text;
	}
	if (this->Text == "Convertus from Octal")
	{
		textBox2->Text = Convert::ToString(OctToBin(Convert::ToInt64(textBox1->Text)));
	}
	if (this->Text == "Convertus from Decimal")
	{
		textBox2->Text = Convert::ToString(DecToBin(Convert::ToInt64(textBox1->Text)));
	}
	if (this->Text == "Convertus from Hexadecimal")
	{
		__int64 result = System::Int64::Parse(textBox1->Text, System::Globalization::NumberStyles::HexNumber);
		result = DecToBin(result);
		textBox2->Text = Convert::ToString(result);
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->Text == "Convertus from Binary")
	{
		textBox2->Text = Convert::ToString(BinToOct(Convert::ToInt64(textBox1->Text)));
	}
	if (this->Text == "Convertus from Octal")
	{
		textBox2->Text = textBox1->Text;
	}
	if (this->Text == "Convertus from Decimal")
	{
		textBox2->Text = Convert::ToString(DecToOct(Convert::ToInt64(textBox1->Text)));
	}
	if (this->Text == "Convertus from Hexadecimal")
	{
		__int64 result = System::Int64::Parse(textBox1->Text, System::Globalization::NumberStyles::HexNumber);
		result = DecToOct(result);
		textBox2->Text = Convert::ToString(result);
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->Text == "Convertus from Binary")
	{
		textBox2->Text = Convert::ToString(BinToDec(Convert::ToInt64(textBox1->Text)));
	}
	if (this->Text == "Convertus from Octal")
	{
		textBox2->Text = Convert::ToString(OctToDec(Convert::ToInt64(textBox1->Text)));
	}
	if (this->Text == "Convertus from Decimal")
	{
		textBox2->Text = textBox1->Text;
	}
	if (this->Text == "Convertus from Hexadecimal")
	{
		textBox2->Text = Convert::ToString(System::Int64::Parse(textBox1->Text, System::Globalization::NumberStyles::HexNumber));
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->Text == "Convertus from Binary")
	{
		__int64 result;
		result = BinToDec(Convert::ToInt64(textBox1->Text));
		textBox2->Text = result.ToString("X");
	}
	if (this->Text == "Convertus from Octal")
	{
		__int64 result;
		result = OctToDec(Convert::ToInt64(textBox1->Text));
		textBox2->Text = result.ToString("X");
	}
	if (this->Text == "Convertus from Decimal")
	{
		__int64 result;
		result = Convert::ToInt64(textBox1->Text);
		textBox2->Text = result.ToString("X");
	}
	if (this->Text == "Convertus from Hexadecimal")
	{
		textBox2->Text = textBox1->Text;
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	textBox1->Text = " ";
	textBox2->Text = " ";
}
};
}
