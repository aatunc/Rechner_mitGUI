#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		int firstnum;
		int secondnum;
		int result;
		char operation;
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	public:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button30;

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
			System::Windows::Forms::Label^ label1;
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			label1->AutoEllipsis = true;
			label1->AutoSize = true;
			label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			label1->Enabled = false;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->ForeColor = System::Drawing::SystemColors::Highlight;
			label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			label1->Location = System::Drawing::Point(53, 34);
			label1->MaximumSize = System::Drawing::Size(400, 37);
			label1->MinimumSize = System::Drawing::Size(400, 50);
			label1->Name = L"label1";
			label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			label1->Size = System::Drawing::Size(400, 50);
			label1->TabIndex = 22;
			label1->Text = L"0";
			label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			label1->Visible = false;
			label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(388, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 49);
			this->button1->TabIndex = 23;
			this->button1->Text = L"AC";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(306, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 49);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Sin";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(212, 149);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(76, 49);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Cos";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(121, 149);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(76, 49);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Fx";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(31, 149);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 49);
			this->button5->TabIndex = 27;
			this->button5->Text = L"F";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(32, 225);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(74, 35);
			this->button6->TabIndex = 32;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(122, 225);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(66, 35);
			this->button7->TabIndex = 31;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(213, 225);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(66, 35);
			this->button8->TabIndex = 30;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(356, 225);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(97, 35);
			this->button10->TabIndex = 28;
			this->button10->Text = L"/";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(31, 263);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 39);
			this->button11->TabIndex = 37;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(121, 263);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(67, 39);
			this->button12->TabIndex = 36;
			this->button12->Text = L"5";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(212, 263);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(67, 39);
			this->button13->TabIndex = 35;
			this->button13->Text = L"4";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(355, 263);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(98, 39);
			this->button15->TabIndex = 33;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(31, 305);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 41);
			this->button16->TabIndex = 42;
			this->button16->Text = L"9";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(121, 305);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(67, 41);
			this->button17->TabIndex = 41;
			this->button17->Text = L"8";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(212, 305);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(67, 41);
			this->button18->TabIndex = 40;
			this->button18->Text = L"7";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(355, 305);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(98, 41);
			this->button20->TabIndex = 38;
			this->button20->Text = L"-";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(31, 349);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 38);
			this->button21->TabIndex = 47;
			this->button21->Text = L",";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(121, 349);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(67, 38);
			this->button22->TabIndex = 46;
			this->button22->Text = L".";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(212, 349);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(67, 38);
			this->button23->TabIndex = 45;
			this->button23->Text = L"0";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(355, 353);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(99, 34);
			this->button25->TabIndex = 43;
			this->button25->Text = L"+";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(355, 397);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(99, 42);
			this->button30->TabIndex = 48;
			this->button30->Text = L"=";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 489);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0")
	{
		label1->Text = "1";
	}
	else
	{
		label1->Text = Convert::ToInt64(label1->Text) + "1";
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if(label1->Text == "0")
	{
		label1->Text = "2";
	}
	else
	{
		label1->Text = Convert::ToInt64(label1->Text) + "2";
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0")
	{
		label1->Text = "3";
	}
	else
	{
		label1->Text = Convert::ToInt64(label1->Text) + "3";
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0")
	{
		label1->Text = "4";
	}
	else
	{
		label1->Text = Convert::ToInt64(label1->Text) + "4";
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0")
	{
		label1->Text = "5";
	}
	else
	{
		label1->Text = Convert::ToInt64(label1->Text) + "5";
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0")
	{
		label1->Text = "6";
	}
	else
	{
		label1->Text = Convert::ToInt64(label1->Text) + "6";
	}
private: System::Void button18_Click(System::Object ^ sender, System::EventArgs ^ e) {
	if (label1->Text == "0")
	{
		label1->Text = "7";
	}
	else
	{
		label1->Text = Convert::ToInt64(label1->Text) + "7";
	}
}
private: System::Void button17_Click(System::Object ^ sender, System::EventArgs ^ e) {
	if (label1->Text == "0")
	{
		label1->Text = "8";
	}
	else
	{
		label1->Text = Convert::ToInt64(label1->Text) + "8";
	}
}
private: System::Void button16_Click(System::Object ^ sender, System::EventArgs ^ e) {
	if (label1->Text == "0")
	{
		label1->Text = "9";
	}
	else
	{
		label1->Text = Convert::ToInt64(label1->Text) + "9";
	}
}
private: System::Void button23_Click(System::Object ^ sender, System::EventArgs ^ e) {
	if (label1->Text == "0")
	{
		label1->Text = "0";
	}
	else
	{
		label1->Text = Convert::ToInt64(label1->Text) + "0";
	}
}
private: System::Void button22_Click(System::Object ^ sender, System::EventArgs ^ e) {
	if (label1->Text == "0")
	{
		label1->Text = ".";
	}
	else
	{
		label1->Text = Convert::ToInt64(label1->Text) + ".";
	}
}
private: System::Void button21_Click(System::Object ^ sender, System::EventArgs ^ e) {
	if (label1->Text == "0")
	{
		label1->Text = ",";
	}
	else
	{
		label1->Text = Convert::ToInt64(label1->Text) + ",";
	}
}
private: System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {
	label1->Text = "0";
	firstnum = 0;
	secondnum = 0;
	result = 0;
}
};
