#include "MyForm2.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void Mmain(array<String^ > ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);
	ByteShow::MyForm2 form2;
	Application::Run(% form2);
}

void ByteShow::MyForm2::WypelnienieListy(String ^ Bledy)
{
	try
	{
		int count = 0;
		Char c;
		String^ jedenWiersz = nullptr;
		bool czyZapisano;
		//listBox1->Text = Bledy;
		while (Bledy->Length > count)
		{
			c = Bledy[count];
			if ((c == 10) || (c == 13))
			{
				if (!czyZapisano)
				{
					listBox1->Items->Add(jedenWiersz);
					jedenWiersz = nullptr;
					czyZapisano = true;
				}

			}
			else
			{
				czyZapisano = false;
				jedenWiersz = jedenWiersz + c;
			}

			count++;
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Nieoczekiwany b³¹d. 0x004");
	}
	
	//throw gcnew System::NotImplementedException();
}
