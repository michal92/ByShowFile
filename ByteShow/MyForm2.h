#pragma once
#include "EdycjazTXTdoHEX.h"

namespace ByteShow {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		MyForm2(String ^fromFILE, String ^toFILE)
			: FromFile(fromFILE), ToFile(toFILE), Errory(nullptr)
		{
			InitializeComponent();
			//wskErrory = &Errory;
			//FromFile = fromFILE; ToFile = toFILE;
			//FromFile = toFILE; ToFile = fromFILE;
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>

		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
	//	void ZapisaniePliku(void);
		 String ^FromFile, ^ToFile, ^Errory;


			 String^ *wskErrory;
		 void WypelnienieListy(String^ Bledy);
	private: System::Windows::Forms::OpenFileDialog^  oknoOtwieraniaPliku1;
	private: System::Windows::Forms::SaveFileDialog^  oknoZapisu;
	private: System::Windows::Forms::Button^  btnTekstFile;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  btn_Save_As;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  btn_Save;
	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::Label^  label1;



			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->oknoOtwieraniaPliku1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->oknoZapisu = (gcnew System::Windows::Forms::SaveFileDialog());
			this->btnTekstFile = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_Save_As = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_Save = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// oknoOtwieraniaPliku1
			// 
			this->oknoOtwieraniaPliku1->FileName = L"openFileDialog1";
			this->oknoOtwieraniaPliku1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm2::oknoOtwieraniaPliku1_FileOk);
			// 
			// btnTekstFile
			// 
			this->btnTekstFile->Location = System::Drawing::Point(3, 21);
			this->btnTekstFile->Name = L"btnTekstFile";
			this->btnTekstFile->Size = System::Drawing::Size(124, 23);
			this->btnTekstFile->TabIndex = 0;
			this->btnTekstFile->Text = L"Otworz Plik Tekstowy";
			this->btnTekstFile->UseVisualStyleBackColor = true;
			this->btnTekstFile->Click += gcnew System::EventHandler(this, &MyForm2::btnTekstFile_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(269, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// btn_Save_As
			// 
			this->btn_Save_As->Location = System::Drawing::Point(3, 78);
			this->btn_Save_As->Name = L"btn_Save_As";
			this->btn_Save_As->Size = System::Drawing::Size(111, 23);
			this->btn_Save_As->TabIndex = 0;
			this->btn_Save_As->Text = L"Zapisz Plik Jako";
			this->btn_Save_As->UseVisualStyleBackColor = true;
			this->btn_Save_As->Click += gcnew System::EventHandler(this, &MyForm2::btn_Save_As_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(3, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(269, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// btn_Save
			// 
			this->btn_Save->Location = System::Drawing::Point(148, 78);
			this->btn_Save->Name = L"btn_Save";
			this->btn_Save->Size = System::Drawing::Size(75, 23);
			this->btn_Save->TabIndex = 2;
			this->btn_Save->Text = L"Zapisz";
			this->btn_Save->UseVisualStyleBackColor = true;
			this->btn_Save->Click += gcnew System::EventHandler(this, &MyForm2::btn_Save_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(3, 145);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(269, 147);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(106, 343);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"label1";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(291, 365);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->btn_Save);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->btn_Save_As);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnTekstFile);
			this->Name = L"MyForm2";
			this->Text = L"Zapis z Tekstu do Bin";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = FromFile;
		textBox2->Text = ToFile;
	}
	private: System::Void oknoOtwieraniaPliku1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btnTekstFile_Click(System::Object^  sender, System::EventArgs^  e) {
	oknoOtwieraniaPliku1->Filter= "Plik tekstowy|*.txt| Plik csv| *.csv| Wszystkie pliki|*.*";
	try
	{
		oknoOtwieraniaPliku1->Filter = "Plik tekstowy|*.txt| Plik csv| *.csv| Wszystkie pliki|*.*";
		oknoOtwieraniaPliku1->ShowDialog();
		if (oknoOtwieraniaPliku1)
		{
			if (File::Exists(oknoOtwieraniaPliku1->FileName))
			{
				FromFile = oknoOtwieraniaPliku1->FileName;
				textBox1->Text = FromFile; ///

			}
		}

	}
	catch (Exception ^e)
	{
		MessageBox::Show("Nieoczekiwany b³¹d. 0x001");
	}

}
private: System::Void btn_Save_As_Click(System::Object^  sender, System::EventArgs^  e) 
{
	try
	{
		oknoZapisu->Filter = "Program na Robota|*.rpg| Plik PDF| *.pdf| Wszystkie pliki|*.*";
		oknoZapisu->ShowDialog();
		ToFile = oknoZapisu->FileName;
		if (File::Exists(ToFile)) 
		{
			ZapisaniePliku();
		}
		else
		{
			//File ^nowy()
			FileStream^ sb = gcnew FileStream(ToFile, FileMode::Create, FileAccess::ReadWrite);
			sb->Close();
			ZapisaniePliku();
		}

	}
	catch (Exception ^e)
	{
		MessageBox::Show("Nieoczekiwany b³¹d. 0x002");
	}

}
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void process1_Exited(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{

}
void ByteShow::MyForm2::ZapisaniePliku(void)
{
	try
	{
		if (FromFile == nullptr)
		{
			MessageBox::Show("Nie podano nazwy pliku");
			oknoOtwieraniaPliku1->Filter = "Plik tekstowy|*.txt| Plik csv| *.csv| Wszystkie pliki|*.*";
			oknoOtwieraniaPliku1->ShowDialog();
			FromFile = oknoOtwieraniaPliku1->FileName;
		}
		if (ToFile == nullptr)
		{
			MessageBox::Show("Nie podano nazwy pliku do OTWARCIA");
			oknoZapisu->Filter = "Program na Robota|*.rpg| Plik PDF| *.pdf| Wszystkie pliki|*.*";
			oknoZapisu->ShowDialog();
			ToFile = oknoZapisu->FileName;
		}
		if ((ToFile != nullptr) && (FromFile != nullptr) && (File::Exists(ToFile)) && (File::Exists(FromFile)))
		{
			//EdycjazTXTdoHEX newPlikBinarny(FromFile,ToFile);
			String^ bledy=nullptr;
			String^ *wskbledy;
			wskbledy = &bledy;
			//EdycjazTXTdoHEX newPlikBinarny(FromFile, ToFile, FilesMode::FromTXTtoBIN);
			EdycjazTXTdoHEX newPlikBinarny(FromFile, ToFile, FilesMode::FromTXTtoBIN, wskbledy);
			if (newPlikBinarny.czyUtworzonyplikBIN)
			{
				label1->Text = "Plik zosta³ zapisany  :)";
				listBox1->Items->Clear();
				//WypelnienieListy(bledy);
			}
			else
			{
				label1->Text = "Plik nie zosta³ zapisany :(";
				listBox1->Items->Clear();
				WypelnienieListy(bledy);
			}
			//delete newPlikBinarny();
			newPlikBinarny.~EdycjazTXTdoHEX();
		}
		else
		{
			MessageBox::Show("Znów nie podano nazwy pliku, zapis jest niemo¿³iwy");
		}
	}
	catch (Exception ^e)
	{
		MessageBox::Show("Nieoczekiwany b³¹d. 0x003" + e->Message);
	}
	

}
private: System::Void btn_Save_Click(System::Object^  sender, System::EventArgs^  e) {
	ZapisaniePliku();
}
	

};
}
