#pragma once
#include "MyForm11.h"

namespace ProgProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm10
	/// </summary>
	public ref class MyForm10 : public System::Windows::Forms::Form
	{
	public:
		MyForm10(void)
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
		~MyForm10()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lblscore;
	private: System::Windows::Forms::Label^ lbltries;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblmoves;
	private: System::Windows::Forms::Label^ lblgoal;
	private: System::Windows::Forms::Label^ lblnum;
	private: System::Windows::Forms::Button^ bttn1;
	private: System::Windows::Forms::Button^ plus2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm10::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblscore = (gcnew System::Windows::Forms::Label());
			this->lbltries = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblmoves = (gcnew System::Windows::Forms::Label());
			this->lblgoal = (gcnew System::Windows::Forms::Label());
			this->lblnum = (gcnew System::Windows::Forms::Label());
			this->bttn1 = (gcnew System::Windows::Forms::Button());
			this->plus2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->lblscore);
			this->panel1->Controls->Add(this->lbltries);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->lblmoves);
			this->panel1->Controls->Add(this->lblgoal);
			this->panel1->Controls->Add(this->lblnum);
			this->panel1->Controls->Add(this->bttn1);
			this->panel1->Controls->Add(this->plus2);
			this->panel1->Location = System::Drawing::Point(7, 15);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(513, 588);
			this->panel1->TabIndex = 10;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(248, 399);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 100);
			this->button3->TabIndex = 9;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm10::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(96, 396);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 100);
			this->button2->TabIndex = 8;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm10::button2_Click);
			// 
			// lblscore
			// 
			this->lblscore->BackColor = System::Drawing::Color::Transparent;
			this->lblscore->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblscore->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblscore->Location = System::Drawing::Point(173, 534);
			this->lblscore->Name = L"lblscore";
			this->lblscore->Size = System::Drawing::Size(48, 31);
			this->lblscore->TabIndex = 7;
			this->lblscore->Text = L"11";
			this->lblscore->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lbltries
			// 
			this->lbltries->BackColor = System::Drawing::Color::Transparent;
			this->lbltries->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltries->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lbltries->Location = System::Drawing::Point(356, 532);
			this->lbltries->Name = L"lbltries";
			this->lbltries->Size = System::Drawing::Size(33, 31);
			this->lbltries->TabIndex = 6;
			this->lbltries->Text = L"3";
			this->lbltries->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(248, 242);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 53);
			this->button1->TabIndex = 5;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm10::button1_Click_1);
			// 
			// lblmoves
			// 
			this->lblmoves->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->lblmoves->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblmoves->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblmoves->Location = System::Drawing::Point(349, 60);
			this->lblmoves->Name = L"lblmoves";
			this->lblmoves->Size = System::Drawing::Size(33, 31);
			this->lblmoves->TabIndex = 5;
			this->lblmoves->Text = L"3";
			this->lblmoves->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblgoal
			// 
			this->lblgoal->BackColor = System::Drawing::Color::Transparent;
			this->lblgoal->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblgoal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblgoal->Location = System::Drawing::Point(161, 59);
			this->lblgoal->Name = L"lblgoal";
			this->lblgoal->Size = System::Drawing::Size(64, 31);
			this->lblgoal->TabIndex = 3;
			this->lblgoal->Text = L"3";
			this->lblgoal->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblnum
			// 
			this->lblnum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->lblnum->Font = (gcnew System::Drawing::Font(L"Arial", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblnum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblnum->Location = System::Drawing::Point(247, 147);
			this->lblnum->Name = L"lblnum";
			this->lblnum->Size = System::Drawing::Size(147, 56);
			this->lblnum->TabIndex = 2;
			this->lblnum->Text = L"30";
			this->lblnum->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// bttn1
			// 
			this->bttn1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->bttn1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttn1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->bttn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bttn1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bttn1.Image")));
			this->bttn1->Location = System::Drawing::Point(251, 302);
			this->bttn1->Name = L"bttn1";
			this->bttn1->Size = System::Drawing::Size(154, 105);
			this->bttn1->TabIndex = 1;
			this->bttn1->UseVisualStyleBackColor = false;
			this->bttn1->Click += gcnew System::EventHandler(this, &MyForm10::bttn1_Click);
			// 
			// plus2
			// 
			this->plus2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->plus2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->plus2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->plus2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"plus2.Image")));
			this->plus2->Location = System::Drawing::Point(97, 304);
			this->plus2->Name = L"plus2";
			this->plus2->Size = System::Drawing::Size(147, 100);
			this->plus2->TabIndex = 0;
			this->plus2->UseVisualStyleBackColor = false;
			this->plus2->Click += gcnew System::EventHandler(this, &MyForm10::plus2_Click);
			// 
			// MyForm10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(513, 618);
			this->Controls->Add(this->panel1);
			this->MaximumSize = System::Drawing::Size(529, 657);
			this->MinimumSize = System::Drawing::Size(529, 657);
			this->Name = L"MyForm10";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Level 2 Question 4 ";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		void elseMessage()
		{
			MessageBox::Show("You run out of moves!", "Note", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

			int numOfTries = System::Convert::ToInt16(lbltries->Text) - 1;
			lbltries->Text = System::Convert::ToString(numOfTries);

			this->lblnum->Text = "30";
			this->lblmoves->Text = "3";

		}

		void functionForMoves()
		{
			int numOfMoves = System::Convert::ToInt16(lblmoves->Text) - 1;
			lblmoves->Text = System::Convert::ToString(numOfMoves);
		}

		//void gameOver()
	   // {
		 //   this->Hide();
		 //   MyForm ^ obj1 = gcnew MyForm (); 
		 //   obj1->ShowDialog();
		//}

		void passed()
		{
			int goalNum = System::Convert::ToInt16(lblnum->Text);

			if (goalNum == 3) 
			{
				MessageBox::Show("Your answer is correct!", "Level 2 Question 4 Passed", MessageBoxButtons::OK, MessageBoxIcon::Information); //change depende sa level & question
				int score = System::Convert::ToInt16(lblscore->Text) + 1;
				lblscore->Text = System::Convert::ToString(score);

				this->Hide();
				MyForm11^ obj1 = gcnew MyForm11();
				obj1->ShowDialog();

			}
		}

	private: System::Void plus2_Click(System::Object^ sender, System::EventArgs^ e) {
		Console::Beep();

		int move = System::Convert::ToInt16(lblmoves->Text);
		int tries = System::Convert::ToInt16(lbltries->Text);

		if (tries > 1)
		{
			if (move > 0) {
				int result = System::Convert::ToInt16(lblnum->Text) / 2;
				lblnum->Text = System::Convert::ToString(result);

				functionForMoves();
				passed();
			}
			else {
				elseMessage();

			}
		}

		else
		{
			if (move > 0) {
				int result = System::Convert::ToInt16(lblnum->Text) / 2;
				lblnum->Text = System::Convert::ToString(result);

				functionForMoves();
				passed();
			}
			else {
				//gameOver();

			}
		}
	}

	private: System::Void bttn1_Click(System::Object^ sender, System::EventArgs^ e) {
		Console::Beep();

		int move = System::Convert::ToInt16(lblmoves->Text);
		int tries = System::Convert::ToInt16(lbltries->Text);

		if (tries > 1)
		{
			if (move > 0) {
				int result = System::Convert::ToInt16(lblnum->Text) % 9;
				lblnum->Text = System::Convert::ToString(result);

				functionForMoves();
				passed();
			}
			else {
				elseMessage();

			}
		}

		else
		{
			if (move > 0) {
				int result = System::Convert::ToInt16(lblnum->Text) % 9;
				lblnum->Text = System::Convert::ToString(result);

				functionForMoves();
				passed();
			}
			else {
				//gameOver();

			}
		}
	}
	
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Console::Beep();

		int move = System::Convert::ToInt16(lblmoves->Text);
		int tries = System::Convert::ToInt16(lbltries->Text);

		if (tries > 1)
		{
			if (move > 0) {
				int result = System::Convert::ToInt16(lblnum->Text) - 3;
				lblnum->Text = System::Convert::ToString(result);

				functionForMoves();
				passed();
			}
			else {
				elseMessage();

			}
		}

		else
		{
			if (move > 0) {
				int result = System::Convert::ToInt16(lblnum->Text) - 3;
				lblnum->Text = System::Convert::ToString(result);

				functionForMoves();
				passed();
			}
			else {
				//gameOver();

			}
		}
	}
	
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Console::Beep();

		int move = System::Convert::ToInt16(lblmoves->Text);
		int tries = System::Convert::ToInt16(lbltries->Text);

		if (tries > 1)
		{
			if (move > 0) {
				int result = System::Convert::ToInt16(lblnum->Text) / 3;
				lblnum->Text = System::Convert::ToString(result);

				functionForMoves();
				passed();
			}
			else {
				elseMessage();

			}
		}

		else
		{
			if (move > 0) {
				int result = System::Convert::ToInt16(lblnum->Text) / 3;
				lblnum->Text = System::Convert::ToString(result);

				functionForMoves();
				passed();
			}
			else {
				//gameOver();

			}
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Console::Beep();

		this->lblnum->Text = "30";
		this->lblmoves->Text = "3";
	}
};
}
