#include "EdycjazTXTdoHEX.h"



bool EdycjazTXTdoHEX::SprawdzeniePliku(bool * WSKczyZNrWierszy, array<unsigned char>^* strumien, String ^* WSKErrory)
{
	array<unsigned char>^ strumien2;
	Char c;
	strumien2 = *strumien;
	bool ok = true;
	int count = 0, licznikSpacji = 0, BajWWierszu = 0, kolumna = 0, iloscBledow = 0, bajt = 0, wiersz = 0;
	while ((count < ((*strumien)->Length)) && (count < 8) && (ok == true))
	{
		//zn = (*strumien)[count];
		if (32 == (*strumien)[count])
		{
			licznikSpacji++;
		}
		count++;
	}
	if (licznikSpacji > 1)
	{
		*WSKczyZNrWierszy = false;
	}
	else
	{
		*WSKczyZNrWierszy = true;
	}

	count = 0;
	if (*WSKczyZNrWierszy)
	{
		//.........///// POCZATEK sprawdzania pliku z oznaczeniami lini /////.........
		count = 8;
		while ((count < ((*strumien)->Length)))
		{
			if ((32 != (*strumien)[count]) && (kolumna < 48))
			{
				//Char c = (*strumien)[count];
				c = (*strumien)[count];
				ok = CzyBajtJestOk(c);
				if (!ok)
				{
					*WSKErrory = *WSKErrory + "Wiersz: " + wiersz + "; kolumna: " + kolumna + "; bajt: " + bajt + "; bajt w lini: " + BajWWierszu + "\r\n";
					iloscBledow++;
				}
				c = (*strumien)[count + 1];
				ok = CzyBajtJestOk(c);
				if (!ok)
				{
					*WSKErrory = *WSKErrory + "Wiersz: " + wiersz + "; kolumna: " + kolumna + "; bajt: " + bajt + "; bajt w lini: " + BajWWierszu + "\r\n";
					iloscBledow++;
				}
				bajt++;
				count++;
				kolumna++;
				kolumna++;
				BajWWierszu++;
			}
			else
			{
				kolumna++;
			}


			if (10 == (*strumien)[count])
			{
				BajWWierszu = 0;
				kolumna = 0;
				wiersz++;
				count = count + 8;
			}
			count++;
		}



		//.........///// KONIEC sprawdzania pliku z oznaczeniami lini /////.........
	}
	else
	{
		while ((count < ((*strumien)->Length)))
		{
			if ((32 != (*strumien)[count]) && (kolumna < 48))
			{
				//Char c = (*strumien)[count];
				c = (*strumien)[count];
				ok = CzyBajtJestOk(c);
				if (!ok)
				{
					*WSKErrory = *WSKErrory + "Wiersz: " + wiersz + "; kolumna: " + kolumna + "; bajt: " + bajt + "; bajt w lini: " + BajWWierszu + "\r\n";
					iloscBledow++;
				}
				c = (*strumien)[count + 1];
				ok = CzyBajtJestOk(c);
				if (!ok)
				{
					*WSKErrory = *WSKErrory + "Wiersz: " + wiersz + "; kolumna: " + kolumna + "; bajt: " + bajt + "; bajt w lini: " + BajWWierszu + "\r\n";
					iloscBledow++;
				}
				bajt++;
				count++;
				kolumna++;
				kolumna++;
				BajWWierszu++;
			}
			else
			{
				kolumna++;
			}


			if (10 == (*strumien)[count])
			{
				BajWWierszu = 0;
				kolumna = 0;
				wiersz++;
			}
			count++;
		}
	}
	if (iloscBledow < 1)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool EdycjazTXTdoHEX::CzyBajtJestOk(Char c)
{
	bool ok = false;
	if (((47 < c) && (c < 58)) || ((64 < c) && (c < 71))) //48-57 lub 65-70 jest ok
	{
		ok = true;
	}
	else
	{
		ok = false;
	}
	return ok;
}

bool EdycjazTXTdoHEX::ZapisBinPliku_Hex(String ^ toBinarFile, bool * WSKczyZNrWierszy, array<unsigned char>^* strumien, bool czyPlikTXTjestOk)
{
	FileStream^ sb = gcnew FileStream(toBinarFile, FileMode::Create, FileAccess::ReadWrite);//plikBIN2.rpg

	String ^tylkoDaneHEX, ^tylkoBinarnie = nullptr;
	int kolumna = 0, count = 0, zHEXnaDEC = 0, i = 0, jakaDuzaTablica=0;
	Char c, c1, c2;
	array<unsigned char>^  dana;
	//Liczenie wielkosci tablicy POCZATEK
	if (czyPlikTXTjestOk)
	{  // POCZATEK..............
		if (*WSKczyZNrWierszy)
		{
			count = 8;
			int zm = (*strumien)->Length;
			while ((count < ((*strumien)->Length)))
			{
				if ((kolumna < 50))//48
				{
					//c = (*strumien)[count];
					//tylkoDaneHEX = tylkoDaneHEX + c;
					jakaDuzaTablica++;
				}

				kolumna++;
				count++;
				if (10 == (*strumien)[count])
				{
					kolumna = 0;
					count++;
					count = count + 8;
				}
			}

		}
		else
		{
			// ................POCZATEK....................
			count = 0;
			while ((count < ((*strumien)->Length)))
			{
				if ((kolumna < 50))//48
				{
					//c = (*strumien)[count];
					//tylkoDaneHEX = tylkoDaneHEX + c;
					jakaDuzaTablica++;
				}

				kolumna++;
				count++;
				if (10 == (*strumien)[count])
				{
					kolumna = 0;
					count++;
				}
			}
			// ................KONIEC....................

		}

		//Liczenie wielkosci tablicy POCZATEK

		array<unsigned char>^  dana = gcnew array< unsigned char>(jakaDuzaTablica);



		i = 0;
		if (czyPlikTXTjestOk)
		{  // POCZATEK..............
			if (*WSKczyZNrWierszy)
			{
				count = 8;
				i = 0;
				int zm = jakaDuzaTablica;
				while (count < ((*strumien)->Length))
				{
					if ((kolumna < 50))//48
					{
						c = (*strumien)[count];
						dana[i] = c;
						i++;
					}

					kolumna++;
					count++;
					if (10 == (*strumien)[count])
					{
						kolumna = 0;
						count++;
						count = count + 8;
					}
				}

			}
			else
			{
				// ................POCZATEK....................
				count = 0;
				i = 0;
				while (count < ((*strumien)->Length))
				{
					if ((kolumna < 50))//48
					{
						c = (*strumien)[count];
						dana[i] = c;
						i++;
					}

					kolumna++;
					count++;
					if (10 == (*strumien)[count])
					{
						kolumna = 0;
						count++;
					}
				}
				// ................KONIEC....................

			}

			//KONIEC .............
	//KONIEC .............

			//Tworzenie tablicy POCZATEK
			count = 0;
			i = 0;
			while ((count < jakaDuzaTablica))
			{
				c1 = dana[count];

				if (((47 < c1) && (c1 < 58)) || ((64 < c1) && (c1 < 71)))
				{
					c2 = dana[count + 1];
					zHEXnaDEC = FzHEXnaDEC(c1, c2);
					Char c = (Char)zHEXnaDEC;
					sb->WriteByte(c);
					count++;
				}
				count++;
			}
			sb->Close();
			//	sb->Write(*strumien,0, (*strumien)->Length);
			return true;
		}
		else
		{
			return false;
			sb->Close();
		}
		try
		{
			//sb->Seek(0, SeekOrigin::Begin);
		}
		catch (Exception ^e)
		{

		}
		//sb->Flush();
		sb->Close();
		delete sb;


	}
	/*
	FileStream^ sb = gcnew FileStream(toBinarFile, FileMode::Create, FileAccess::ReadWrite);//plikBIN2.rpg
	
	String ^tylkoDaneHEX, ^tylkoBinarnie = nullptr;
	int kolumna = 0, count = 0, zHEXnaDEC = 0, i = 0;
	Char c, c1, c2;
	array<unsigned char>^  dana;

	if (czyPlikTXTjestOk)
	{  // POCZATEK..............
		if (*WSKczyZNrWierszy)
		{
			count = 8;
			int zm = (*strumien)->Length;
			while ((count < ((*strumien)->Length)))
			{
				if ((kolumna < 50))//48
				{
					c = (*strumien)[count];
					tylkoDaneHEX = tylkoDaneHEX + c;
				}

				kolumna++;
				count++;
				if (10 == (*strumien)[count])
				{
					kolumna = 0;
					count++;
					count = count + 8;
				}
			}
			
		}
		else
		{
			// ................POCZATEK....................
			count = 0;
			while ((count < ((*strumien)->Length)))
			{
				if ((kolumna < 50))//48
				{
					c = (*strumien)[count];
					tylkoDaneHEX = tylkoDaneHEX + c;
				}

				kolumna++;
				count++;
				if (10 == (*strumien)[count])
				{
					kolumna = 0;
					count++;
				}
			}
			// ................KONIEC....................
			
		}
		//KONIEC .............

		//Tworzenie tablicy POCZATEK
		count = 0;
		i = 0;
		while ((count < ((tylkoDaneHEX)->Length)))
		{
			c1 = tylkoDaneHEX[count];
			
			if (((47 < c1) && (c1 < 58)) || ((64 < c1) && (c1 < 71)))
			{
				c2 = tylkoDaneHEX[count + 1];
				zHEXnaDEC = FzHEXnaDEC(c1, c2);
				Char c = (Char)zHEXnaDEC;
				sb->WriteByte(c);
				count++;
			}
			count++;
		}
		sb->Close();
	//	sb->Write(*strumien,0, (*strumien)->Length);
		return true;
	}
	else
	{
		return false;
		sb->Close();
	}
	try
	{
		//sb->Seek(0, SeekOrigin::Begin);
	}
	catch (Exception ^e)
	{

	}
	//sb->Flush();
	sb->Close();
	delete sb;
	//sb.Close();
	*/
}

int EdycjazTXTdoHEX::FzHEXnaDEC(Char c1, Char c2)
{
	int a, b, c;
	if (((47 < c1) && (c1 < 58)))
	{
		a = c1 - 48;

	}
	else
	{

		a = c1 - 65 + 10;
	}

	if (((47 < c2) && (c2 < 58)))
	{
		b = c2 - 48;
	}
	else
	{
		b = c2 - 65 + 10;
	}

	c = a * 16 + b;
	return c;
}

bool EdycjazTXTdoHEX::porownywaniePlikowTXT(String ^ File1, String ^ File2, String ^ * roznicePlikow)
{
	array<unsigned char>^ din1 = File::ReadAllBytes(File1);
	array<unsigned char>^ din2 = File::ReadAllBytes(File2);
	int count = 0, ileBledow = 0, wiersz = 0, kolumna = 0;
	Char c1, c2;
	bool ok;
	while ((count < din1->Length) || (count < din2->Length))
	{
		if ((count < din1->Length) && (count < din2->Length))
		{
			c1 = din1[count];
			c2 = din2[count];
			if (10 != c1)
			{
				if (c1 != c2)
				{
					*roznicePlikow = *roznicePlikow + "Blad w lini: " + wiersz + "  Kolumnie: " + kolumna + "\n\r";
					ileBledow++;
				}
				kolumna++;
			}
			else
			{
				kolumna = 0;
				wiersz++;
			}
		}
		else
		{
			*roznicePlikow = *roznicePlikow + "Brakuje ZNAKU w lini: " + wiersz + "  Kolumnie: " + kolumna + "\n\r";
			kolumna++;
			ileBledow++;
		}
		count++;
	}

	if (ileBledow > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

EdycjazTXTdoHEX::EdycjazTXTdoHEX()
{
}

EdycjazTXTdoHEX::EdycjazTXTdoHEX(String ^ fromFFile, String ^ toFFile)
	: fromFile(fromFFile), toFile(toFFile)
{
	int b = 0;
}

EdycjazTXTdoHEX::EdycjazTXTdoHEX(String ^ fromFFile, String ^ toFFile, FilesMode  mode)
	: fromFile(fromFFile), toFile(toFFile)
{
	
	
	//throw gcnew System::NotImplementedException();
	switch (mode)
	{
	case FromTXTtoBIN:
		SaveFile();
		break;
	case CompareFiles:
		break;
	default:
		break;
		
	}
	a = 0;
}

EdycjazTXTdoHEX::EdycjazTXTdoHEX(String ^ fromFFile, String ^ toFFile, FilesMode mode, String ^ * wskNaErrory)
	: fromFile(fromFFile), toFile(toFFile), WskErrory(wskNaErrory)
{
	/*KonwersjHeksagonalna kon;
	bool czyZNrWierszy, *WSKczyZNrWierszy, czyPlikJestOk;
	array<unsigned char>^  dana = kon.czytanieDanych(fromFile);
	array<unsigned char>^  *WSKdana;
	WSKdana = &dana;
	WSKczyZNrWierszy = &czyZNrWierszy;
	////String^ dffd;
	//String^ *wd;
	//wd = &dffd;
	czyPlikJestOk = SprawdzeniePliku(WSKczyZNrWierszy, WSKdana, WskErrory);
	bool czyUtworzonyplikBIN = ZapisBinPliku_Hex(toFile, WSKczyZNrWierszy, WSKdana, czyPlikJestOk);*/
	switch (mode)
	{
	case FromTXTtoBIN:
		SaveFile();
		break;
	case CompareFiles:
		break;
	default:
		break;

	}

}

EdycjazTXTdoHEX::~EdycjazTXTdoHEX()
{
	//throw gcnew System::NotImplementedException();
}

void EdycjazTXTdoHEX::SaveFile(void)
{
	
	/*Errory = nullptr;
	*/
	//WskErrory = &Errory;
	KonwersjHeksagonalna kon;
	bool czyZNrWierszy, *WSKczyZNrWierszy;
	array<unsigned char>^  dana = kon.czytanieDanych(fromFile);
	array<unsigned char>^  *WSKdana;
	WSKdana = &dana;
	WSKczyZNrWierszy = &czyZNrWierszy;
	////String^ dffd;
	//String^ *wd;
	//wd = &dffd;
	czyPlikJestOk = SprawdzeniePliku(WSKczyZNrWierszy, WSKdana, WskErrory);
	if(czyPlikJestOk)
		czyUtworzonyplikBIN = ZapisBinPliku_Hex(toFile, WSKczyZNrWierszy, WSKdana, czyPlikJestOk);
}

/*EdycjazTXTdoHEX::EdycjazTXTdoHEX(String ^ fromFile, String ^ toFile, FilesMode mode)
{
	//throw gcnew System::NotImplementedException();
}*/
