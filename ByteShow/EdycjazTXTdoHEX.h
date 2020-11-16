#pragma once
#include "FilesMode.h"
#include "KonwersjHeksagonalna.h"
using namespace System;
//using namespace std; // Przestrzeñ nazw standardowej biblioteki jêzyka C++
using namespace System::IO;
ref class EdycjazTXTdoHEX
{
public:
	String^ fromFile, ^toFile;
	bool czyPlikJestOk=false;
	bool czyUtworzonyplikBIN=false;
	bool SprawdzeniePliku(bool *WSKczyZNrWierszy, array<unsigned char>^ *strumien, String^ *WSKErrory);
	bool CzyBajtJestOk(Char c);
	bool ZapisBinPliku_Hex(String^ toBinarFile, bool *WSKczyZNrWierszy, array<unsigned char>^ *strumien, bool czyPlikTXTjestOk);
	int FzHEXnaDEC(Char c1, Char c2);
	
	int b;
public:
	//enum FilesMode;
	bool porownywaniePlikowTXT(String^ File1, String^ File2, String^ *roznicePlikow);
	EdycjazTXTdoHEX();
	EdycjazTXTdoHEX(String^ fromFile, String^ toFile);
	EdycjazTXTdoHEX(String^ fromFile, String^ toFile, FilesMode mode);
	EdycjazTXTdoHEX(String^ fromFile, String^ toFile, FilesMode mode, String^ *wskNaErrory);
	~EdycjazTXTdoHEX();
	int a;
	String^ Errory;
	String^ *WskErrory;
	void SaveFile(void);

};

/*enum FilesMode
{
	CONWERTfromTXTtoBIN, COMPAREFILE
};*/


