#include "KonwersjHeksagonalna.h"



KonwersjHeksagonalna::KonwersjHeksagonalna()
{
}

array<unsigned char>^ KonwersjHeksagonalna::czytanieDanych(String ^ fromFile)
{
	array<unsigned char>^ din = File::ReadAllBytes(fromFile);
	return din;
}

bool KonwersjHeksagonalna::pisanieDoPliku(String ^ toFile, array<unsigned char>^ strumien)
{
	String^ str = "", ^strA = "", ^strB = "";
	StreamWriter^ sw = gcnew StreamWriter(toFile);
	int count = 0, i = 0;
	while (count < (strumien->Length))
	{
		while (i < 16)
		{
			if (count < (strumien->Length))
			{
				strA = strA + " " + zDecNaHex(strumien[count]);
				strB = strB + SprawdzZnak(strumien[count]);
				count++;
			}
			else
			{
				strA = strA + "   ";
				strB = strB + "   ";
				count++;
			}
			i++;
		}

		str = strA + "  " + strB;
		//Console::WriteLine(str);
		sw->WriteLine(str);
		strA = nullptr;
		strB = nullptr;
		str = nullptr;
		i = 0;
		//count++;
	}
	count = 0;
	sw->Close();
	
	return true;
}

bool KonwersjHeksagonalna::pisanieDoPliku(String ^ toFile, array<unsigned char>^ strumien, bool czyNumerLini)
{
	if(czyNumerLini)
	{
		String^ str = "", ^strA = "", ^strB = "", ^strW = "";
		StreamWriter^ sw = gcnew StreamWriter(toFile);
		int count = 0, i = 0, j=0;
		while (count < (strumien->Length))
		{
			while (i < 16)
			{
				if (count < (strumien->Length))
				{
					strA = strA + " " + zDecNaHex(strumien[count]);
					strB = strB + SprawdzZnak(strumien[count]);
					count++;
				}
				else
				{
					strA = strA + "   ";
					strB = strB + "   ";
					count++;
				}
				i++;
			}
			strW = zDecNaHex(count);
			while (strW->Length<8)
			{
				strW = "0" + strW;
			}
			str =strW + "  " + strA + "  " + strB;
			//Console::WriteLine(str);
			sw->WriteLine(str);
			strA = nullptr;
			strB = nullptr;
			strW = nullptr;
			str = nullptr;
			i = 0;
			//count++;
		}
		count = 0;
		sw->Close();
	}
	else
	{
		KonwersjHeksagonalna::pisanieDoPliku( toFile, strumien);
	}
	return true;
}

String ^ KonwersjHeksagonalna::SprawdzZnak(int znak)
{
	if ((znak < 32) || (znak > 126))
		znak = 46;
	Char c = (Char)znak;
	String ^s = c.ToString();
	return c.ToString();
}

String ^ KonwersjHeksagonalna::zDecNaHex(int DecLiczba)
{
	String ^HexNumerStr, ^str;
	//array<int> ^HexNumInt = {0,0};
	int resztaZD = 1, dzielna = DecLiczba, wynik = 0, i = 0;
	if (0 == DecLiczba)
		HexNumerStr = 0 + "";
	//HexNumInt[1] = 7;
	while (0 != dzielna)
	{
		resztaZD = dzielna % 16;
		if (10 == resztaZD)
			str = "A";
		if (11 == resztaZD)
			str = "B";
		if (12 == resztaZD)
			str = "C";
		if (13 == resztaZD)
			str = "D";
		if (14 == resztaZD)
			str = "E";
		if (15 == resztaZD)
			str = "F";
		if (10 > resztaZD)
			str = resztaZD + "";
		HexNumerStr = str + HexNumerStr;
		wynik = dzielna / 16;
		dzielna = wynik;
		i++;
	}
	if (HexNumerStr->Length < 2)
		HexNumerStr = "0" + HexNumerStr;
	return HexNumerStr;
	
}



