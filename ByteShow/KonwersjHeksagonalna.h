#pragma once
using namespace System;
//using namespace std; // Przestrze� nazw standardowej biblioteki j�zyka C++
using namespace System::IO;
ref class KonwersjHeksagonalna
{
public:
	KonwersjHeksagonalna();
	array<unsigned char>^ czytanieDanych(String^ fromFile);
	bool pisanieDoPliku(String ^toFile, array<unsigned char>^ strumien);
	bool pisanieDoPliku(String ^toFile, array<unsigned char>^ strumien, bool czyNumerLini);
	String^ SprawdzZnak(int);
	String^ zDecNaHex(int);
};

