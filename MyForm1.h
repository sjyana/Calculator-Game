#pragma once
#include "MyForm2.h"
//#include "MyForm .h" for gameover

namespace ProgProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ lbltries;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblmoves;
	private: System::Windows::Forms::Label^ lblgoal;
	private: System::Windows::Forms::Label^ lblnum;
	private: System::Windows::Forms::Button^ bttn1;
	private: System::Windows::Forms::Button^ bttn2;
	private: System::Windows::Forms::Label^ lblscore;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblscore = (gcnew System::Windows::Forms::Label());
			this->lbltries = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblmoves = (gcnew System::Windows::Forms::Label());
			this->lblgoal = (gcnew System::Windows::Forms::Label());
			this->lblnum = (gcnew System::Windows::Forms::Label());
			this->bttn1 = (gcnew System::Windows::Forms::Button());
			this->bttn2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->lblscore);
			this->panel1->Controls->Add(this->lbltries);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->lblmoves);
			this->panel1->Controls->Add(this->lblgoal);
			this->panel1->Controls->Add(this->lblnum);
			this->panel1->Controls->Add(this->bttn1);
			this->panel1->Controls->Add(this->bttn2);
			this->panel1->Location = System::Drawing::Point(5, 18);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(513, 588);
			this->panel1->TabIndex = 3;
			// 
			// lblscore
			// 
			this->lblscore->BackColor = System::Drawing::Color::Transparent;
			this->lblscore->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblscore->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblscore->Location = System::Drawing::Point(179, 531);
			this->lblscore->Name = L"lblscore";
			this->lblscore->Size = System::Drawing::Size(33, 31);
			this->lblscore->TabIndex = 7;
			this->lblscore->Text = L"0";
			this->lblscore->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblscore->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// lbltries
			// 
			this->lbltries->BackColor = System::Drawing::Color::Transparent;
			this->lbltries->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltries->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lbltries->Location = System::Drawing::Point(356, 529);
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
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// lblmoves
			// 
			this->lblmoves->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->lblmoves->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblmoves->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblmoves->Location = System::Drawing::Point(349, 64);
			this->lblmoves->Name = L"lblmoves";
			this->lblmoves->Size = System::Drawing::Size(33, 31);
			this->lblmoves->TabIndex = 4;
			this->lblmoves->Text = L"2";
			this->lblmoves->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblgoal
			// 
			this->lblgoal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->lblgoal->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblgoal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblgoal->Location = System::Drawing::Point(172, 63);
			this->lblgoal->Name = L"lblgoal";
			this->lblgoal->Size = System::Drawing::Size(51, 31);
			this->lblgoal->TabIndex = 3;
			this->lblgoal->Text = L"78";
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
			this->lblnum->Text = L"0";
			this->lblnum->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblnum->Click += gcnew System::EventHandler(this, &MyForm1::lblnum_Click);
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
			this->bttn1->Location = System::Drawing::Point(82, 347);
			this->bttn1->Name = L"bttn1";
			this->bttn1->Size = System::Drawing::Size(156, 100);
			this->bttn1->TabIndex = 1;
			this->bttn1->UseVisualStyleBackColor = false;
			this->bttn1->Click += gcnew System::EventHandler(this, &MyForm1::bttn1_Click);
			// 
			// bttn2
			// 
			this->bttn2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->bttn2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bttn2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->bttn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bttn2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bttn2.Image")));
			this->bttn2->Location = System::Drawing::Point(248, 338);
			this->bttn2->Name = L"bttn2";
			this->bttn2->Size = System::Drawing::Size(156, 100);
			this->bttn2->TabIndex = 0;
			this->bttn2->UseVisualStyleBackColor = false;
			this->bttn2->Click += gcnew System::EventHandler(this, &MyForm1::bttn2_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(513, 618);
			this->Controls->Add(this->panel1);
			this->MaximumSize = System::Drawing::Size(529, 657);
			this->MinimumSize = System::Drawing::Size(529, 657);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Level 1 Question 1";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bttn2_Click(System::Object^ sender, System::EventArgs^ e) {

		Console::Beep();

		int move = System::Convert::ToInt16(lblmoves->Text);  //turning the text in the label into integer
		int tries = System::Convert::ToInt16(lbltries->Text);

		if (tries > 1)
		{
			if (move > 0) {
				int result = System::Convert::ToInt16(lblnum->Text) + 101;
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
				int result = System::Convert::ToInt16(lblnum->Text) + 101;
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
				int result = System::Convert::ToInt16(lblnum->Text) - 23;
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
				int result = System::Convert::ToInt16(lblnum->Text) - 23;
				lblnum->Text = System::Convert::ToString(result);

				functionForMoves();
				passed();
			}
			else {
				//gameOver();

			}
			
		}
	}

		   void elseMessage()
		   {
			   MessageBox::Show("You run out of moves!", "Note", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

			   int numOfTries = System::Convert::ToInt16(lbltries->Text) - 1; //manipulating num of tries
			   lbltries->Text = System::Convert::ToString(numOfTries);

			   this->lblnum->Text = "0"; 
			   this->lblmoves->Text = "2";

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

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Console::Beep();

		this->lblnum->Text = "0";
		this->lblmoves->Text = "2";
	}
	private: System::Void lblnum_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

		   void passed()
		   {
			   int goalNum = System::Convert::ToInt16(lblnum->Text);

			   if (goalNum == 78)
			   {
				   MessageBox::Show("Your answer is correct!", "Level1 Question1 Passed", MessageBoxButtons::OK, MessageBoxIcon::Information);
				   int score = System::Convert::ToInt16(lblscore->Text) + 1;
				   lblscore->Text = System::Convert::ToString(score);

				   this->Hide();
				   MyForm2^ obj1 = gcnew MyForm2();
				   obj1->ShowDialog();

			   }
		  }
};
}
