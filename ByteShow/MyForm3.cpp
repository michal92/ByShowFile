#include "MyForm3.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void Mmain3(array<String^ > ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);
	ByteShow::MyForm3 form3;
	Application::Run(% form3);
}