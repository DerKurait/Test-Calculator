#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
//#include"Header.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Example_3::MyForm form;
	Application::Run(% form);
}
