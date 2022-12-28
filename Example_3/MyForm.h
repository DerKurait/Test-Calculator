#pragma once
//#include "Convertor.h"
#include"Head.h"
#include "MyForm1.h"
#include "MyForm3.h"
#include "MyForm2.h"


namespace Example_3 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textDisplay;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	protected:

	protected:


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btn9;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn4;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ btn1;

	private: System::Windows::Forms::Button^ btn2;

	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btndiv;



	private: System::Windows::Forms::Button^ btnequal;

	private: System::Windows::Forms::Button^ btnpoint;

	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Label^ lblShowOp;


	private: System::Windows::Forms::Button^ btnCE;

	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnPM;
	private: System::Windows::Forms::Button^ btnBackSpace;
	private: System::Windows::Forms::Button^ btnPercent;
	private: System::Windows::Forms::Button^ btnSqrt;
	private: System::Windows::Forms::Button^ btnx2;
	private: System::Windows::Forms::Button^ btn1div;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnClearHistory;
	private: System::Windows::Forms::TextBox^ textDisplayHistory;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ asdToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ calculatorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ standartToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ engineerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ programmerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ comingSoonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ grathicsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dataCalculationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ etcToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblShowUnarOp;
	private: System::Windows::Forms::Button^ button12;









	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btndiv = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->btnpoint = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnPM = (gcnew System::Windows::Forms::Button());
			this->btnBackSpace = (gcnew System::Windows::Forms::Button());
			this->btnPercent = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->btnx2 = (gcnew System::Windows::Forms::Button());
			this->btn1div = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnClearHistory = (gcnew System::Windows::Forms::Button());
			this->textDisplayHistory = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->asdToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calculatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standartToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->engineerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programmerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comingSoonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grathicsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataCalculationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->etcToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblShowUnarOp = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textDisplay
			// 
			this->textDisplay->BackColor = System::Drawing::SystemColors::Control;
			this->textDisplay->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textDisplay->Enabled = false;
			this->textDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textDisplay->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textDisplay->Location = System::Drawing::Point(12, 114);
			this->textDisplay->Multiline = true;
			this->textDisplay->Name = L"textDisplay";
			this->textDisplay->Size = System::Drawing::Size(316, 27);
			this->textDisplay->TabIndex = 0;
			this->textDisplay->Text = L"0";
			this->textDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textDisplay_TextChanged);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->Location = System::Drawing::Point(12, 327);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(75, 75);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn8->Location = System::Drawing::Point(93, 327);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(75, 75);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(254, 327);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 75);
			this->button3->TabIndex = 4;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn9->Location = System::Drawing::Point(174, 327);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(75, 75);
			this->btn9->TabIndex = 3;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(254, 408);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 75);
			this->button5->TabIndex = 8;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->Location = System::Drawing::Point(174, 408);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(75, 75);
			this->btn6->TabIndex = 7;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->Location = System::Drawing::Point(93, 408);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(75, 75);
			this->btn5->TabIndex = 6;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn4->Location = System::Drawing::Point(12, 408);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(75, 75);
			this->btn4->TabIndex = 5;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(253, 489);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 75);
			this->button9->TabIndex = 12;
			this->button9->Text = L"*";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->Location = System::Drawing::Point(174, 489);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 75);
			this->btn1->TabIndex = 11;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->Location = System::Drawing::Point(93, 489);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(75, 75);
			this->btn2->TabIndex = 10;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->Location = System::Drawing::Point(12, 489);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(75, 75);
			this->btn3->TabIndex = 9;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btndiv
			// 
			this->btndiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btndiv->Location = System::Drawing::Point(254, 570);
			this->btndiv->Name = L"btndiv";
			this->btndiv->Size = System::Drawing::Size(75, 75);
			this->btndiv->TabIndex = 16;
			this->btndiv->Text = L"/";
			this->btndiv->UseVisualStyleBackColor = true;
			this->btndiv->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// btnequal
			// 
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnequal->Location = System::Drawing::Point(174, 569);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(75, 75);
			this->btnequal->TabIndex = 15;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = true;
			this->btnequal->Click += gcnew System::EventHandler(this, &MyForm::btnequal_Click);
			// 
			// btnpoint
			// 
			this->btnpoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnpoint->Location = System::Drawing::Point(93, 570);
			this->btnpoint->Name = L"btnpoint";
			this->btnpoint->Size = System::Drawing::Size(75, 75);
			this->btnpoint->TabIndex = 14;
			this->btnpoint->Text = L",";
			this->btnpoint->UseVisualStyleBackColor = true;
			this->btnpoint->Click += gcnew System::EventHandler(this, &MyForm::btnpoint_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn0->Location = System::Drawing::Point(12, 569);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(75, 75);
			this->btn0->TabIndex = 13;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::SystemColors::Control;
			this->lblShowOp->Location = System::Drawing::Point(16, 98);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 13);
			this->lblShowOp->TabIndex = 17;
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCE->Location = System::Drawing::Point(93, 246);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(75, 75);
			this->btnCE->TabIndex = 18;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::btnCE_Click);
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnC->Location = System::Drawing::Point(174, 246);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(75, 75);
			this->btnC->TabIndex = 19;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// btnPM
			// 
			this->btnPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPM->Location = System::Drawing::Point(254, 246);
			this->btnPM->Name = L"btnPM";
			this->btnPM->Size = System::Drawing::Size(75, 75);
			this->btnPM->TabIndex = 21;
			this->btnPM->Text = L"+/-";
			this->btnPM->UseVisualStyleBackColor = true;
			this->btnPM->Click += gcnew System::EventHandler(this, &MyForm::btnPM_Click);
			// 
			// btnBackSpace
			// 
			this->btnBackSpace->Font = (gcnew System::Drawing::Font(L"Wingdings", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBackSpace->Location = System::Drawing::Point(12, 246);
			this->btnBackSpace->Name = L"btnBackSpace";
			this->btnBackSpace->Size = System::Drawing::Size(75, 75);
			this->btnBackSpace->TabIndex = 20;
			this->btnBackSpace->Text = L"";
			this->btnBackSpace->UseVisualStyleBackColor = true;
			this->btnBackSpace->Click += gcnew System::EventHandler(this, &MyForm::btnBackSpace_Click);
			// 
			// btnPercent
			// 
			this->btnPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPercent->Location = System::Drawing::Point(12, 165);
			this->btnPercent->Name = L"btnPercent";
			this->btnPercent->Size = System::Drawing::Size(75, 75);
			this->btnPercent->TabIndex = 22;
			this->btnPercent->Text = L"%";
			this->btnPercent->UseVisualStyleBackColor = true;
			this->btnPercent->Click += gcnew System::EventHandler(this, &MyForm::btnPercent_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSqrt->Location = System::Drawing::Point(93, 165);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(75, 75);
			this->btnSqrt->TabIndex = 23;
			this->btnSqrt->Text = L"√ ";
			this->btnSqrt->UseVisualStyleBackColor = true;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &MyForm::btnSqrt_Click);
			// 
			// btnx2
			// 
			this->btnx2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnx2->Location = System::Drawing::Point(174, 165);
			this->btnx2->Name = L"btnx2";
			this->btnx2->Size = System::Drawing::Size(75, 75);
			this->btnx2->TabIndex = 25;
			this->btnx2->Text = L"^2";
			this->btnx2->UseVisualStyleBackColor = true;
			this->btnx2->Click += gcnew System::EventHandler(this, &MyForm::btnx2_Click);
			// 
			// btn1div
			// 
			this->btn1div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1div->Location = System::Drawing::Point(253, 165);
			this->btn1div->Name = L"btn1div";
			this->btn1div->Size = System::Drawing::Size(75, 75);
			this->btn1div->TabIndex = 24;
			this->btn1div->Text = L"1/x";
			this->btn1div->UseVisualStyleBackColor = true;
			this->btn1div->Click += gcnew System::EventHandler(this, &MyForm::btn1div_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(51, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 25);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Standart";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(352, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 25);
			this->label3->TabIndex = 28;
			this->label3->Text = L"History";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(459, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 25);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Memory";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(352, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(240, 25);
			this->label5->TabIndex = 30;
			this->label5->Text = L"There\'s no history yet";
			// 
			// btnClearHistory
			// 
			this->btnClearHistory->FlatAppearance->BorderSize = 0;
			this->btnClearHistory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClearHistory->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnClearHistory->Location = System::Drawing::Point(544, 647);
			this->btnClearHistory->Name = L"btnClearHistory";
			this->btnClearHistory->Size = System::Drawing::Size(44, 41);
			this->btnClearHistory->TabIndex = 31;
			this->btnClearHistory->Text = L"";
			this->btnClearHistory->UseVisualStyleBackColor = true;
			this->btnClearHistory->Visible = false;
			this->btnClearHistory->Click += gcnew System::EventHandler(this, &MyForm::btnClearHistory_Click);
			// 
			// textDisplayHistory
			// 
			this->textDisplayHistory->Location = System::Drawing::Point(357, 165);
			this->textDisplayHistory->Multiline = true;
			this->textDisplayHistory->Name = L"textDisplayHistory";
			this->textDisplayHistory->Size = System::Drawing::Size(231, 476);
			this->textDisplayHistory->TabIndex = 32;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->asdToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(620, 38);
			this->menuStrip1->TabIndex = 33;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::menuStrip1_MouseDown);
			this->menuStrip1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::menuStrip1_MouseMove);
			this->menuStrip1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::menuStrip1_MouseUp);
			// 
			// asdToolStripMenuItem
			// 
			this->asdToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->calculatorToolStripMenuItem,
					this->toolStripMenuItem2, this->standartToolStripMenuItem, this->engineerToolStripMenuItem, this->programmerToolStripMenuItem,
					this->grathicsToolStripMenuItem, this->toolStripMenuItem3, this->comingSoonToolStripMenuItem, this->toolStripMenuItem4, this->dataCalculationToolStripMenuItem,
					this->etcToolStripMenuItem, this->toolStripMenuItem5, this->exitToolStripMenuItem
			});
			this->asdToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->asdToolStripMenuItem->Name = L"asdToolStripMenuItem";
			this->asdToolStripMenuItem->Size = System::Drawing::Size(40, 34);
			this->asdToolStripMenuItem->Text = L"≡";
			// 
			// calculatorToolStripMenuItem
			// 
			this->calculatorToolStripMenuItem->Name = L"calculatorToolStripMenuItem";
			this->calculatorToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->calculatorToolStripMenuItem->Text = L"Calculator";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(247, 34);
			this->toolStripMenuItem2->Text = L"---------------";
			// 
			// standartToolStripMenuItem
			// 
			this->standartToolStripMenuItem->Name = L"standartToolStripMenuItem";
			this->standartToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->standartToolStripMenuItem->Text = L"Standart";
			// 
			// engineerToolStripMenuItem
			// 
			this->engineerToolStripMenuItem->Name = L"engineerToolStripMenuItem";
			this->engineerToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->engineerToolStripMenuItem->Text = L"Engineer";
			this->engineerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::engineerToolStripMenuItem_Click);
			// 
			// programmerToolStripMenuItem
			// 
			this->programmerToolStripMenuItem->Name = L"programmerToolStripMenuItem";
			this->programmerToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->programmerToolStripMenuItem->Text = L"Programmer";
			this->programmerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::programmerToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(247, 34);
			this->toolStripMenuItem3->Text = L"---------------";
			// 
			// comingSoonToolStripMenuItem
			// 
			this->comingSoonToolStripMenuItem->Name = L"comingSoonToolStripMenuItem";
			this->comingSoonToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->comingSoonToolStripMenuItem->Text = L"Coming soon";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(247, 34);
			this->toolStripMenuItem4->Text = L"---------------";
			// 
			// grathicsToolStripMenuItem
			// 
			this->grathicsToolStripMenuItem->Name = L"grathicsToolStripMenuItem";
			this->grathicsToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->grathicsToolStripMenuItem->Text = L"Graphics";
			this->grathicsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::grathicsToolStripMenuItem_Click);
			// 
			// dataCalculationToolStripMenuItem
			// 
			this->dataCalculationToolStripMenuItem->Name = L"dataCalculationToolStripMenuItem";
			this->dataCalculationToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->dataCalculationToolStripMenuItem->Text = L"Data Calculation";
			// 
			// etcToolStripMenuItem
			// 
			this->etcToolStripMenuItem->Name = L"etcToolStripMenuItem";
			this->etcToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->etcToolStripMenuItem->Text = L"etc";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(247, 34);
			this->toolStripMenuItem5->Text = L"---------------";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(207, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 23);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Сделать красиво";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lblShowUnarOp
			// 
			this->lblShowUnarOp->AutoSize = true;
			this->lblShowUnarOp->Location = System::Drawing::Point(16, 98);
			this->lblShowUnarOp->Name = L"lblShowUnarOp";
			this->lblShowUnarOp->Size = System::Drawing::Size(0, 13);
			this->lblShowUnarOp->TabIndex = 35;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(533, 0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(88, 38);
			this->button12->TabIndex = 84;
			this->button12->Text = L"Exit";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 700);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->lblShowUnarOp);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textDisplayHistory);
			this->Controls->Add(this->btnClearHistory);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnx2);
			this->Controls->Add(this->btn1div);
			this->Controls->Add(this->btnSqrt);
			this->Controls->Add(this->btnPercent);
			this->Controls->Add(this->btnPM);
			this->Controls->Add(this->btnBackSpace);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->btndiv);
			this->Controls->Add(this->btnequal);
			this->Controls->Add(this->btnpoint);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->textDisplay);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(620, 700);
			this->MinimumSize = System::Drawing::Size(620, 700);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->TextChanged += gcnew System::EventHandler(this, &MyForm::MyForm_TextChanged);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double iFirstnum;
		double iSecondnum;
		double iResult;
		System::String^ iOperator;






	private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
		//button C
		textDisplay->Text = "0";
		lblShowOp->Text = "";
		lblShowUnarOp->Text = "";

	}
	private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
		//button CE
		textDisplay->Text = "0";
	}
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		//numbers click action
		Button^ Numbers = safe_cast<Button^>(sender);
		if (textDisplay->Text[0] >= '0' && textDisplay->Text[0] <= '9')
		if (textDisplay->Text == "0")
		{
			textDisplay->Text = Numbers->Text;
		}
		else
		{
			textDisplay->Text = textDisplay->Text + Numbers->Text;

		}
	}
	private: System::Void Arithmetic(System::Object^ sender, System::EventArgs^ e) {
		lblShowUnarOp->Text = "";
		if ((textDisplay->Text[0] >= '0' && textDisplay->Text[0] <= '9') || textDisplay->Text[0] == '-')
		if (lblShowOp->Text == "")
		{
			Button^ op = safe_cast<Button^>(sender);
			iFirstnum = Double::Parse(textDisplay->Text);
			textDisplay->Text = "";
			iOperator = op->Text;
			lblShowOp->Text = System::Convert::ToString(iFirstnum) + " " + iOperator;
		}
		else
		{
			Button^ op = safe_cast<Button^>(sender);
			iOperator = op->Text;
			lblShowOp->Text = lblShowOp->Text->Remove(lblShowOp->Text->Length - 1) + iOperator;
		}



	}
	private: System::Void btnequal_Click(System::Object^ sender, System::EventArgs^ e) {

		
		
		if ((textDisplay->Text[0] >= '0' && textDisplay->Text[0] <= '9') || textDisplay->Text[0] == '-')
		{
//----------------------------------------------------------------------------------------------------------------------
			if (!(iFirstnum == 0 && iSecondnum == 0))
			{
				label5->Visible = false;
				btnClearHistory->Visible = true;
				textDisplayHistory->Text += lblShowOp->Text + textDisplay->Text + " = " + "\r\n";
			}

//----------------------------------------------------------------------------------------------------------------------
iSecondnum = Double::Parse(textDisplay->Text);
		
		if (iOperator == "+")
		{
			iResult = iFirstnum + iSecondnum;
			textDisplay->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "-")
		{
			iResult = iFirstnum - iSecondnum;
			textDisplay->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "*")
		{
			
			iResult = iFirstnum * iSecondnum;
			  textDisplay->Text = System::Convert::ToString(round((iResult* 1000000000)) / 1000000000);
		}
		else if (iOperator == "/")
		{
			if (iSecondnum == 0)
			{
				textDisplay->Text = "dividing by zero is prohibited";
			}
			else
			{
				iResult = iFirstnum / iSecondnum;
				textDisplay->Text = System::Convert::ToString(iResult);
			}


		}
		if (iFirstnum != 0)
			textDisplayHistory->Text += textDisplay->Text+"\r\n";
        lblShowOp->Text = "";
		iFirstnum = iSecondnum = iResult = 0; iOperator = ""; 
}
		

	}
	private: System::Void btnBackSpace_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textDisplay->Text->Length > 0)
		{
			textDisplay->Text = textDisplay->Text->Remove(textDisplay->Text->Length - 1, 1);
		}

	}


	private: System::Void textDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textDisplay->Text == "")
		{
			textDisplay->Text = "0";
		}
	}
	private: System::Void btnpoint_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((textDisplay->Text[0] >= '0' && textDisplay->Text[0] <= '9') || textDisplay->Text[0] == '-')
		if (!textDisplay->Text->Contains(","))
		{
			textDisplay->Text = textDisplay->Text + ",";
		}
	}
	private: System::Void btnPM_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((textDisplay->Text[0] >= '0' && textDisplay->Text[0] <= '9') || textDisplay->Text[0] == '-')
		{
	if (textDisplay->Text->Contains("-"))
		{
			textDisplay->Text = textDisplay->Text->Remove(0, 1);
		}
		else if (textDisplay->Text != "0")
		{
			textDisplay->Text = "-" + textDisplay->Text;
		}
		}
	
	}

	private: System::Void btnPercent_Click(System::Object^ sender, System::EventArgs^ e) {
		//lblShowOp->Text = "% " + textDisplay->Text;
		if ((textDisplay->Text[0] >= '0' && textDisplay->Text[0] <= '9') || textDisplay->Text[0] == '-') {
	textDisplay->Text = System::Convert::ToString(Double::Parse(textDisplay->Text) / 100);
		}
	
	}
		   //Добавить флажок, если кто-то захочет одновременно использовать с возвежением в степень
	private: System::Void btnSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((textDisplay->Text[0] >= '0' && textDisplay->Text[0] <= '9') || textDisplay->Text[0] != '-') {
if (Double::Parse(textDisplay->Text) >= 0)
		{
			lblShowOp->Text = "";
			lblShowUnarOp->Text = "sqrt(" + textDisplay->Text+")";
			textDisplay->Text = System::Convert::ToString(sqrt(Double::Parse(textDisplay->Text)));
		}
		else textDisplay->Text = "error";
	}
			if (!(textDisplay->Text == "0"))
			{
				label5->Visible = false;
				btnClearHistory->Visible = true;
				textDisplayHistory->Text += lblShowUnarOp->Text + " = " + "\r\n" + textDisplay->Text + "\r\n";
			}
		}
		

	private: System::Void btnx2_Click(System::Object^ sender, System::EventArgs^ e) {
		lblShowOp->Text = "";
		lblShowUnarOp->Text =textDisplay->Text+"^2";



		if ((textDisplay->Text[0] >= '0' && textDisplay->Text[0] <= '9') || textDisplay->Text[0] == '-')//Везде проработать это исключение
		{
			textDisplay->Text = System::Convert::ToString(floor(Double::Parse(textDisplay->Text) * Double::Parse(textDisplay->Text) * 100000000) / 100000000);

			if (Double::Parse(textDisplay->Text) > 1E+250)
				textDisplay->Text = "overflow";
		}
			if (!(textDisplay->Text=="0"))
		{
			label5->Visible = false;
			btnClearHistory->Visible = true;
			textDisplayHistory->Text += lblShowUnarOp->Text  + " = " + "\r\n" + textDisplay->Text + "\r\n";
		}
	}
	private: System::Void btn1div_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((textDisplay->Text[0] >= '0' && textDisplay->Text[0] <= '9') || textDisplay->Text[0] == '-')
		{
		lblShowOp->Text = "";
		lblShowUnarOp->Text = "1/" + textDisplay->Text;
		if (textDisplay->Text != "0")
		{
			if (Double::Parse(textDisplay->Text) > 1 || Double::Parse(textDisplay->Text) < -1)//Исправить этот костыль
				textDisplay->Text = System::Convert::ToString((1 / Double::Parse(textDisplay->Text) )  );
			else
				textDisplay->Text = System::Convert::ToString(round(1 / Double::Parse(textDisplay->Text)* 100000000)/ 100000000);
		}
		//Сделать отсечение остатков приусловии!
		else
			textDisplay->Text = "dividing by zero is prohibited";
	}
			if (!(textDisplay->Text == "0"))
			{
				label5->Visible = false;
				btnClearHistory->Visible = true;
				textDisplayHistory->Text += lblShowUnarOp->Text + " = " + "\r\n" + textDisplay->Text + "\r\n";
			}
		}

	//private: System::Void engineerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//MyForm::Hide();
		//MyForm1^ f2 = gcnew MyForm1();
	//f2->Show();
	//}
	//private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//textDisplay->Text = System::Convert::ToString(fact(int::Parse(textDisplay->Text)));
	//}

//-------------------------------------------------------------------------------------------------------
		   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string STR;
	Convert_String_to_string(textDisplay->Text, STR);
	textDisplay->Text = System::Convert::ToString(CALC(STR));
}
           
//-------------------------------------------------------------------------------------------------------
private: System::Void engineerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ f2 = gcnew MyForm1();
	f2->Left = this->Left;
	f2->Top = this->Top;
	f2->Show();
	this->Hide();
}

 private: System::Void programmerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	 MyForm2^ f5 = gcnew MyForm2();
	 f5->Left = this->Left;
	 f5->Top = this->Top;
	 f5->Show();
	 this->Hide();
	   }
private: System::Void grathicsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm3^ f6 = gcnew MyForm3();
	f6->Left = this->Left;
	f6->Top = this->Top;
	f6->Show();
	this->Hide();
}
private: System::Void btnClearHistory_Click(System::Object^ sender, System::EventArgs^ e) {
	btnClearHistory->Visible = false;
	label5->Visible = true;
	textDisplayHistory->Text = "";
}


private: System::Void MyForm_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Application::OpenForms[L"MyForm"]->Text == L"b")
	{
		MyForm3^ f9 = gcnew MyForm3();
		f9->Left = this->Left;
		f9->Top = this->Top;
		f9->Show();
		Application::OpenForms[L"MyForm"]->Text = L"MyForm";
		this->Hide();
	}
	if (Application::OpenForms[L"MyForm"]->Text == L"a")
	{
		MyForm1^ f2 = gcnew MyForm1();
		f2->Left = this->Left;
		f2->Top = this->Top;
		f2->Show();
		Application::OpenForms[L"MyForm"]->Text = L"MyForm";
		this->Hide();
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}


	   bool dragging = false;
	   Point diffPos;


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	dragging = false;
}

private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = true;
	diffPos = Point(MousePosition.X - Location.X, MousePosition.Y - Location.Y);
}

private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = false;
}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (dragging == true)
	{
		Point currentScreenPos = MousePosition;
		Location = Point(MousePosition.X - diffPos.X, MousePosition.Y - diffPos.Y);
	}
}
private: System::Void menuStrip1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = true;
	diffPos = Point(MousePosition.X - Location.X, MousePosition.Y - Location.Y);
}
private: System::Void menuStrip1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = false;
}
private: System::Void menuStrip1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (dragging == true)
	{
		Point currentScreenPos = MousePosition;
		Location = Point(MousePosition.X - diffPos.X, MousePosition.Y - diffPos.Y);
	}
}

};
}
