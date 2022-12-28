
#pragma once
#include<cmath>
#include"Head.h"
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
	/// Сводка для MyForm1
	/// </summary>


	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnx2;
	private: System::Windows::Forms::Button^ btn1div;
	private: System::Windows::Forms::Button^ btnSqrt;

	private: System::Windows::Forms::Button^ btnPM;
	private: System::Windows::Forms::Button^ btnBackSpace;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::Label^ lblShowOp;
	private: System::Windows::Forms::Button^ btndiv;
	private: System::Windows::Forms::Button^ btnequal;
	private: System::Windows::Forms::Button^ btnpoint;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::TextBox^ textDisplay;
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
	private: System::Windows::Forms::TreeView^ treeViewSIN;
	private: System::Windows::Forms::Button^ btnsin;
	private: System::Windows::Forms::Button^ btncos;
	private: System::Windows::Forms::TreeView^ treeViewCOS;
	private: System::Windows::Forms::TreeView^ treeViewCOT;
	private: System::Windows::Forms::Button^ btncot;
	private: System::Windows::Forms::TreeView^ treeViewTAN;
	private: System::Windows::Forms::Button^ btntan;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;

	private: System::Windows::Forms::Button^ button14;




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
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"sinr"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"sind"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"sinh"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"asin"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"cosr"));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"cosd"));
			System::Windows::Forms::TreeNode^ treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"cosh"));
			System::Windows::Forms::TreeNode^ treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"acos"));
			System::Windows::Forms::TreeNode^ treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"cotr"));
			System::Windows::Forms::TreeNode^ treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"cotd"));
			System::Windows::Forms::TreeNode^ treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"coth"));
			System::Windows::Forms::TreeNode^ treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"acot"));
			System::Windows::Forms::TreeNode^ treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"tanr"));
			System::Windows::Forms::TreeNode^ treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"tand"));
			System::Windows::Forms::TreeNode^ treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"tanh"));
			System::Windows::Forms::TreeNode^ treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"atan"));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnx2 = (gcnew System::Windows::Forms::Button());
			this->btn1div = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->btnPM = (gcnew System::Windows::Forms::Button());
			this->btnBackSpace = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->btndiv = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->btnpoint = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->textDisplay = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->asdToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calculatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standartToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->engineerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programmerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grathicsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comingSoonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataCalculationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->etcToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->treeViewSIN = (gcnew System::Windows::Forms::TreeView());
			this->btnsin = (gcnew System::Windows::Forms::Button());
			this->btncos = (gcnew System::Windows::Forms::Button());
			this->treeViewCOS = (gcnew System::Windows::Forms::TreeView());
			this->treeViewCOT = (gcnew System::Windows::Forms::TreeView());
			this->btncot = (gcnew System::Windows::Forms::Button());
			this->treeViewTAN = (gcnew System::Windows::Forms::TreeView());
			this->btntan = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(51, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 25);
			this->label2->TabIndex = 60;
			this->label2->Text = L"Engineer";
			// 
			// btnx2
			// 
			this->btnx2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnx2->Location = System::Drawing::Point(174, 164);
			this->btnx2->Name = L"btnx2";
			this->btnx2->Size = System::Drawing::Size(75, 75);
			this->btnx2->TabIndex = 59;
			this->btnx2->Text = L"^2";
			this->btnx2->UseVisualStyleBackColor = true;
			this->btnx2->Click += gcnew System::EventHandler(this, &MyForm1::btnx2_Click);
			// 
			// btn1div
			// 
			this->btn1div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1div->Location = System::Drawing::Point(253, 164);
			this->btn1div->Name = L"btn1div";
			this->btn1div->Size = System::Drawing::Size(75, 75);
			this->btn1div->TabIndex = 58;
			this->btn1div->Text = L"1/x";
			this->btn1div->UseVisualStyleBackColor = true;
			this->btn1div->Click += gcnew System::EventHandler(this, &MyForm1::btn1div_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSqrt->Location = System::Drawing::Point(93, 164);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(75, 75);
			this->btnSqrt->TabIndex = 57;
			this->btnSqrt->Text = L"√ ";
			this->btnSqrt->UseVisualStyleBackColor = true;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &MyForm1::btnSqrt_Click);
			// 
			// btnPM
			// 
			this->btnPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPM->Location = System::Drawing::Point(254, 245);
			this->btnPM->Name = L"btnPM";
			this->btnPM->Size = System::Drawing::Size(75, 75);
			this->btnPM->TabIndex = 55;
			this->btnPM->Text = L"+/-";
			this->btnPM->UseVisualStyleBackColor = true;
			this->btnPM->Click += gcnew System::EventHandler(this, &MyForm1::btnPM_Click);
			// 
			// btnBackSpace
			// 
			this->btnBackSpace->Font = (gcnew System::Drawing::Font(L"Wingdings", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBackSpace->Location = System::Drawing::Point(12, 245);
			this->btnBackSpace->Name = L"btnBackSpace";
			this->btnBackSpace->Size = System::Drawing::Size(75, 75);
			this->btnBackSpace->TabIndex = 54;
			this->btnBackSpace->Text = L"";
			this->btnBackSpace->UseVisualStyleBackColor = true;
			this->btnBackSpace->Click += gcnew System::EventHandler(this, &MyForm1::btnBackSpace_Click);
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnC->Location = System::Drawing::Point(174, 245);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(75, 75);
			this->btnC->TabIndex = 53;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm1::btnC_Click_1);
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCE->Location = System::Drawing::Point(93, 245);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(75, 75);
			this->btnCE->TabIndex = 52;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm1::btnCE_Click);
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::SystemColors::Control;
			this->lblShowOp->Location = System::Drawing::Point(4, 98);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 13);
			this->lblShowOp->TabIndex = 51;
			// 
			// btndiv
			// 
			this->btndiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btndiv->Location = System::Drawing::Point(254, 569);
			this->btndiv->Name = L"btndiv";
			this->btndiv->Size = System::Drawing::Size(75, 75);
			this->btndiv->TabIndex = 50;
			this->btndiv->Text = L"/";
			this->btndiv->UseVisualStyleBackColor = true;
			this->btndiv->Click += gcnew System::EventHandler(this, &MyForm1::btndiv_Click);
			// 
			// btnequal
			// 
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnequal->Location = System::Drawing::Point(174, 568);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(75, 75);
			this->btnequal->TabIndex = 49;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = true;
			this->btnequal->Click += gcnew System::EventHandler(this, &MyForm1::btnequal_Click);
			// 
			// btnpoint
			// 
			this->btnpoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnpoint->Location = System::Drawing::Point(93, 569);
			this->btnpoint->Name = L"btnpoint";
			this->btnpoint->Size = System::Drawing::Size(75, 75);
			this->btnpoint->TabIndex = 48;
			this->btnpoint->Text = L",";
			this->btnpoint->UseVisualStyleBackColor = true;
			this->btnpoint->Click += gcnew System::EventHandler(this, &MyForm1::btnpoint_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn0->Location = System::Drawing::Point(12, 568);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(75, 75);
			this->btn0->TabIndex = 47;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm1::btn0_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(253, 488);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 75);
			this->button9->TabIndex = 46;
			this->button9->Text = L"*";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->Location = System::Drawing::Point(174, 488);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 75);
			this->btn1->TabIndex = 45;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->Location = System::Drawing::Point(93, 488);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(75, 75);
			this->btn2->TabIndex = 44;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->Location = System::Drawing::Point(12, 488);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(75, 75);
			this->btn3->TabIndex = 43;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(254, 407);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 75);
			this->button5->TabIndex = 42;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->Location = System::Drawing::Point(174, 407);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(75, 75);
			this->btn6->TabIndex = 41;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->Location = System::Drawing::Point(93, 407);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(75, 75);
			this->btn5->TabIndex = 40;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn4->Location = System::Drawing::Point(12, 407);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(75, 75);
			this->btn4->TabIndex = 39;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(254, 326);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 75);
			this->button3->TabIndex = 38;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn9->Location = System::Drawing::Point(174, 326);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(75, 75);
			this->btn9->TabIndex = 37;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn8->Location = System::Drawing::Point(93, 326);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(75, 75);
			this->btn8->TabIndex = 36;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->Location = System::Drawing::Point(12, 326);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(75, 75);
			this->btn7->TabIndex = 35;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// textDisplay
			// 
			this->textDisplay->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textDisplay->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textDisplay->Location = System::Drawing::Point(12, 121);
			this->textDisplay->Multiline = true;
			this->textDisplay->Name = L"textDisplay";
			this->textDisplay->Size = System::Drawing::Size(576, 27);
			this->textDisplay->TabIndex = 34;
			this->textDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->asdToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(620, 38);
			this->menuStrip1->TabIndex = 66;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::menuStrip1_MouseDown);
			this->menuStrip1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::menuStrip1_MouseMove);
			this->menuStrip1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::menuStrip1_MouseUp);
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
			this->standartToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::standartToolStripMenuItem_Click);
			// 
			// engineerToolStripMenuItem
			// 
			this->engineerToolStripMenuItem->Name = L"engineerToolStripMenuItem";
			this->engineerToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->engineerToolStripMenuItem->Text = L"Engineer";
			// 
			// programmerToolStripMenuItem
			// 
			this->programmerToolStripMenuItem->Name = L"programmerToolStripMenuItem";
			this->programmerToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->programmerToolStripMenuItem->Text = L"Programmer";
			this->programmerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::programmerToolStripMenuItem_Click);
			// 
			// grathicsToolStripMenuItem
			// 
			this->grathicsToolStripMenuItem->Name = L"grathicsToolStripMenuItem";
			this->grathicsToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->grathicsToolStripMenuItem->Text = L"Graphics";
			this->grathicsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::grathicsToolStripMenuItem_Click);
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
			// treeViewSIN
			// 
			this->treeViewSIN->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->treeViewSIN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeViewSIN->HideSelection = false;
			this->treeViewSIN->HotTracking = true;
			this->treeViewSIN->Location = System::Drawing::Point(431, 245);
			this->treeViewSIN->Name = L"treeViewSIN";
			treeNode1->Name = L"sinr";
			treeNode1->Text = L"sinr";
			treeNode2->Name = L"sind";
			treeNode2->Text = L"sind";
			treeNode3->Name = L"sinh";
			treeNode3->Text = L"sinh";
			treeNode4->Name = L"asin";
			treeNode4->Text = L"asin";
			this->treeViewSIN->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(4) {
				treeNode1, treeNode2, treeNode3,
					treeNode4
			});
			this->treeViewSIN->Scrollable = false;
			this->treeViewSIN->ShowLines = false;
			this->treeViewSIN->Size = System::Drawing::Size(75, 75);
			this->treeViewSIN->TabIndex = 67;
			this->treeViewSIN->Visible = false;
			this->treeViewSIN->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm1::treeViewSIN_AfterSelect);
			// 
			// btnsin
			// 
			this->btnsin->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnsin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnsin->Location = System::Drawing::Point(431, 245);
			this->btnsin->Name = L"btnsin";
			this->btnsin->Size = System::Drawing::Size(75, 75);
			this->btnsin->TabIndex = 68;
			this->btnsin->Text = L"sin";
			this->btnsin->UseVisualStyleBackColor = true;
			this->btnsin->Click += gcnew System::EventHandler(this, &MyForm1::btnsin_Click);
			// 
			// btncos
			// 
			this->btncos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btncos->Location = System::Drawing::Point(513, 245);
			this->btncos->Name = L"btncos";
			this->btncos->Size = System::Drawing::Size(75, 75);
			this->btncos->TabIndex = 69;
			this->btncos->Text = L"cos";
			this->btncos->UseVisualStyleBackColor = true;
			this->btncos->Click += gcnew System::EventHandler(this, &MyForm1::btncos_Click);
			// 
			// treeViewCOS
			// 
			this->treeViewCOS->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->treeViewCOS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeViewCOS->HideSelection = false;
			this->treeViewCOS->HotTracking = true;
			this->treeViewCOS->Location = System::Drawing::Point(512, 245);
			this->treeViewCOS->Name = L"treeViewCOS";
			treeNode5->Name = L"cosr";
			treeNode5->Text = L"cosr";
			treeNode6->Name = L"cosd";
			treeNode6->Text = L"cosd";
			treeNode7->Name = L"cosh";
			treeNode7->Text = L"cosh";
			treeNode8->Name = L"acos";
			treeNode8->Text = L"acos";
			this->treeViewCOS->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(4) {
				treeNode5, treeNode6, treeNode7,
					treeNode8
			});
			this->treeViewCOS->Scrollable = false;
			this->treeViewCOS->ShowLines = false;
			this->treeViewCOS->Size = System::Drawing::Size(75, 75);
			this->treeViewCOS->TabIndex = 70;
			this->treeViewCOS->Visible = false;
			this->treeViewCOS->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm1::treeViewCOS_AfterSelect);
			// 
			// treeViewCOT
			// 
			this->treeViewCOT->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->treeViewCOT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeViewCOT->HideSelection = false;
			this->treeViewCOT->HotTracking = true;
			this->treeViewCOT->Location = System::Drawing::Point(512, 326);
			this->treeViewCOT->Name = L"treeViewCOT";
			treeNode9->Name = L"cotr";
			treeNode9->Text = L"cotr";
			treeNode10->Name = L"cotd";
			treeNode10->Text = L"cotd";
			treeNode11->Name = L"coth";
			treeNode11->Text = L"coth";
			treeNode12->Name = L"acot";
			treeNode12->Text = L"acot";
			this->treeViewCOT->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(4) {
				treeNode9, treeNode10, treeNode11,
					treeNode12
			});
			this->treeViewCOT->Scrollable = false;
			this->treeViewCOT->ShowLines = false;
			this->treeViewCOT->Size = System::Drawing::Size(75, 75);
			this->treeViewCOT->TabIndex = 74;
			this->treeViewCOT->Visible = false;
			this->treeViewCOT->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm1::treeViewCOT_AfterSelect);
			// 
			// btncot
			// 
			this->btncot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btncot->Location = System::Drawing::Point(512, 326);
			this->btncot->Name = L"btncot";
			this->btncot->Size = System::Drawing::Size(75, 75);
			this->btncot->TabIndex = 73;
			this->btncot->Text = L"cot";
			this->btncot->UseVisualStyleBackColor = true;
			this->btncot->Click += gcnew System::EventHandler(this, &MyForm1::btncot_Click);
			// 
			// treeViewTAN
			// 
			this->treeViewTAN->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->treeViewTAN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeViewTAN->HideSelection = false;
			this->treeViewTAN->HotTracking = true;
			this->treeViewTAN->Location = System::Drawing::Point(431, 326);
			this->treeViewTAN->Name = L"treeViewTAN";
			treeNode13->Name = L"tanr";
			treeNode13->Text = L"tanr";
			treeNode14->Name = L"tand";
			treeNode14->Text = L"tand";
			treeNode15->Name = L"tanh";
			treeNode15->Text = L"tanh";
			treeNode16->Name = L"atan";
			treeNode16->Text = L"atan";
			this->treeViewTAN->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(4) {
				treeNode13, treeNode14, treeNode15,
					treeNode16
			});
			this->treeViewTAN->Scrollable = false;
			this->treeViewTAN->ShowLines = false;
			this->treeViewTAN->Size = System::Drawing::Size(75, 75);
			this->treeViewTAN->TabIndex = 71;
			this->treeViewTAN->Visible = false;
			this->treeViewTAN->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm1::treeViewTAN_AfterSelect);
			// 
			// btntan
			// 
			this->btntan->Cursor = System::Windows::Forms::Cursors::Default;
			this->btntan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btntan->Location = System::Drawing::Point(430, 326);
			this->btntan->Name = L"btntan";
			this->btntan->Size = System::Drawing::Size(75, 75);
			this->btntan->TabIndex = 72;
			this->btntan->Text = L"tan";
			this->btntan->UseVisualStyleBackColor = true;
			this->btntan->Click += gcnew System::EventHandler(this, &MyForm1::btntan_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(431, 164);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 75);
			this->button1->TabIndex = 75;
			this->button1->Text = L"(";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(512, 164);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 75);
			this->button2->TabIndex = 76;
			this->button2->Text = L")";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(512, 407);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 75);
			this->button4->TabIndex = 78;
			this->button4->Text = L"exp";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(431, 407);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 75);
			this->button6->TabIndex = 77;
			this->button6->Text = L"n!";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(512, 488);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 75);
			this->button7->TabIndex = 80;
			this->button7->Text = L"lg";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(431, 488);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 75);
			this->button8->TabIndex = 79;
			this->button8->Text = L"ln";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(512, 569);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 75);
			this->button10->TabIndex = 82;
			this->button10->Text = L"10^";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(431, 569);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 75);
			this->button11->TabIndex = 81;
			this->button11->Text = L"pi";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm1::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(532, 0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(88, 38);
			this->button12->TabIndex = 83;
			this->button12->Text = L"Exit";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm1::button12_Click_1);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(12, 164);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 75);
			this->button14->TabIndex = 85;
			this->button14->Text = L"mod";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm1::button14_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 700);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->treeViewCOT);
			this->Controls->Add(this->btncot);
			this->Controls->Add(this->treeViewTAN);
			this->Controls->Add(this->btntan);
			this->Controls->Add(this->treeViewCOS);
			this->Controls->Add(this->btncos);
			this->Controls->Add(this->treeViewSIN);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnx2);
			this->Controls->Add(this->btn1div);
			this->Controls->Add(this->btnSqrt);
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
			this->Controls->Add(this->btnsin);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(620, 700);
			this->MinimumSize = System::Drawing::Size(620, 700);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->Leave += gcnew System::EventHandler(this, &MyForm1::MyForm1_Closed);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseClick);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseUp);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void btnequal_Click(System::Object^ sender, System::EventArgs^ e) {
		lblShowOp->Text = textDisplay->Text;
		textDisplay->Text = textDisplay->Text->Replace(',', '.');
		std::string STR;
		Convert_String_to_string(textDisplay->Text, STR);
		textDisplay->Text = System::Convert::ToString(CALC(STR));
		textDisplay->Text = textDisplay->Text->Replace(',', '.');

	}
public: System::Void standartToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::OpenForms[L"MyForm"]->Show();
	Application::OpenForms[L"MyForm"]->Left=this->Left;
	Application::OpenForms[L"MyForm"]->Top=this->Top;
this->Close();
}

	private: System::Void programmerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ f21 = gcnew MyForm2();
		f21->Left = this->Left;
		f21->Top = this->Top;
		f21->Show();
		this->Close();
	}
	private: System::Void grathicsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ f22 = gcnew MyForm2();
		f22->Left = this->Left;
		f22->Top = this->Top;
		f22->Show();
		this->Close();
	}
    
private: System::Void btnsin_Click(System::Object^ sender, System::EventArgs^ e) {
	treeViewSIN->Visible = true;
}

private: System::Void MyForm1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	treeViewSIN->Visible = false;
	treeViewCOS->Visible = false;
	treeViewTAN->Visible = false;
	treeViewCOT->Visible = false;
}
private: System::Void treeViewSIN_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	auto id = treeViewSIN->SelectedNode->Text;
	textDisplay->Text += id+"(";
	treeViewSIN->Visible = false;
}
private: System::Void btncos_Click(System::Object^ sender, System::EventArgs^ e) {
	treeViewCOS->Visible = true;
}
private: System::Void treeViewCOS_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	auto id = treeViewCOS->SelectedNode->Text;
	textDisplay->Text += id + "(";
	treeViewCOS->Visible = false;
}
private: System::Void btncot_Click(System::Object^ sender, System::EventArgs^ e) {
	treeViewCOT->Visible = true;
}
private: System::Void btntan_Click(System::Object^ sender, System::EventArgs^ e) {
	treeViewTAN->Visible = true;
}
private: System::Void treeViewTAN_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	auto id = treeViewTAN->SelectedNode->Text;
	textDisplay->Text += id + "(";
	treeViewTAN->Visible = false;
}
private: System::Void treeViewCOT_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	auto id = treeViewCOT->SelectedNode->Text;
	textDisplay->Text += id + "(";
	treeViewCOT->Visible = false;
}
private: System::Void MyForm1_Closed(System::Object^ sender, System::EventArgs^ e) {
	Application::OpenForms[L"MyForm"]->Close();
	this->Close();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::OpenForms[L"MyForm"]->Close();
	this->Close();
}
private: System::Void button12_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Application::OpenForms[L"MyForm"]->Close();
	this->Close();
}

private: System::Void btnSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += "sqrt(";
}
private: System::Void btnpoint_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textDisplay->Text!="")
	if (textDisplay->Text[textDisplay->Text->Length-1]>='0' && textDisplay->Text[textDisplay->Text->Length-1] <= '9')
	textDisplay->Text += ".";
}
private: System::Void btn1div_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += "1/";
}

private: System::Void btnPM_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textDisplay->Text!="")
	if (textDisplay->Text[0] == '-')
		{
			textDisplay->Text = textDisplay->Text->Remove(0, 1);
		}
		else if (textDisplay->Text != "")
		{
			textDisplay->Text = "-" + textDisplay->Text;
		}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += "e(";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += "fact(";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += "p";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += "ln(";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += "lg(";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += "mod(";
}
private: System::Void btnBackSpace_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textDisplay->Text->Length > 0)
	{
		textDisplay->Text = textDisplay->Text->Remove(textDisplay->Text->Length - 1, 1);
	}
}


private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text = "";
	lblShowOp->Text = "";
}

private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text = "";
}
private: System::Void btnC_Click_1(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text = "";
	lblShowOp->Text = "";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);
	textDisplay->Text += Numbers->Text;
}
private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += "0";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += "10^";
}
private: System::Void btnx2_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += "^2";
}
private: System::Void btndiv_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += "/";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += "(";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text += ")";
}


	   bool dragging = false;
	   Point diffPos;


private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	dragging = false;
}


private: System::Void MyForm1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = true;
	diffPos = Point(MousePosition.X - Location.X, MousePosition.Y - Location.Y);
}

private: System::Void MyForm1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = false;
}

private: System::Void MyForm1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
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
