#pragma once
#include "KonwersjHeksagonalna.h"
#include "MyForm2.h"
#include "MyForm3.h"
namespace ByteShow {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::OpenFileDialog^  przegladarkaPlikow;

	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  btnZapiszJako;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  OpenFile;
	private: System::Windows::Forms::TextBox^  textBox2;




	protected:


	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		static String ^FromFile, ^ToFile;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ToolStripMenuItem^  zmieñRozszerzenieToolStripMenuItem;
	private: System::Windows::Forms::Label^  label4;
			 void EdycjaPliku(void);
	private: System::Windows::Forms::Button^  btn_wykonaj;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Button^  btn_Edycja;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  edycjaToolStripMenuItem;

			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->przegladarkaPlikow = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->btnZapiszJako = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->OpenFile = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_wykonaj = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->btn_Edycja = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->zmieñRozszerzenieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnZapiszJako
			// 
			this->btnZapiszJako->Location = System::Drawing::Point(12, 96);
			this->btnZapiszJako->Name = L"btnZapiszJako";
			this->btnZapiszJako->Size = System::Drawing::Size(75, 23);
			this->btnZapiszJako->TabIndex = 1;
			this->btnZapiszJako->Text = L"ZapiszJako";
			this->btnZapiszJako->UseVisualStyleBackColor = true;
			this->btnZapiszJako->Click += gcnew System::EventHandler(this, &MyForm::btnZapiszJako_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(236, 20);
			this->textBox1->TabIndex = 3;
			// 
			// OpenFile
			// 
			this->OpenFile->Location = System::Drawing::Point(12, 41);
			this->OpenFile->Name = L"OpenFile";
			this->OpenFile->Size = System::Drawing::Size(75, 23);
			this->OpenFile->TabIndex = 0;
			this->OpenFile->Text = L"Otworz Plik";
			this->OpenFile->UseVisualStyleBackColor = true;
			this->OpenFile->Click += gcnew System::EventHandler(this, &MyForm::OpenFile_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(236, 20);
			this->textBox2->TabIndex = 4;
			// 
			// btn_wykonaj
			// 
			this->btn_wykonaj->Location = System::Drawing::Point(12, 151);
			this->btn_wykonaj->Name = L"btn_wykonaj";
			this->btn_wykonaj->Size = System::Drawing::Size(75, 23);
			this->btn_wykonaj->TabIndex = 5;
			this->btn_wykonaj->Text = L"Wykonaj";
			this->btn_wykonaj->UseVisualStyleBackColor = true;
			this->btn_wykonaj->Click += gcnew System::EventHandler(this, &MyForm::btn_wykonaj_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(116, 151);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Czy otworzyæ plik w notatniku\?";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(119, 172);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(104, 17);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Tak, otwórz plik.";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(116, 192);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Czy dodaæ numery lini\?";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(119, 217);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(129, 17);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"Tak, dodaj numer linii.";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// btn_Edycja
			// 
			this->btn_Edycja->Location = System::Drawing::Point(12, 217);
			this->btn_Edycja->Name = L"btn_Edycja";
			this->btn_Edycja->Size = System::Drawing::Size(75, 23);
			this->btn_Edycja->TabIndex = 10;
			this->btn_Edycja->Text = L"Edycja";
			this->btn_Edycja->UseVisualStyleBackColor = true;
			this->btn_Edycja->Click += gcnew System::EventHandler(this, &MyForm::btn_Edycja_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->plikToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(296, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->edycjaToolStripMenuItem,
					this->zmieñRozszerzenieToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// edycjaToolStripMenuItem
			// 
			this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
			this->edycjaToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->edycjaToolStripMenuItem->Text = L"Edycja";
			this->edycjaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::edycjaToolStripMenuItem_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(93, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"zapis do pliku tekstowego - .txt";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(96, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"otwieranie plików binarnych";
			// 
			// zmieñRozszerzenieToolStripMenuItem
			// 
			this->zmieñRozszerzenieToolStripMenuItem->Name = L"zmieñRozszerzenieToolStripMenuItem";
			this->zmieñRozszerzenieToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->zmieñRozszerzenieToolStripMenuItem->Text = L"Zmieñ Rozszerzenie Pliku";
			this->zmieñRozszerzenieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zmieñRozszerzenieToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(296, 265);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_Edycja);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_wykonaj);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->OpenFile);
			this->Controls->Add(this->btnZapiszJako);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Micha³ Czerniak -Konwersja pliku na notacje Hexagonaln¹";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OpenFile_Click(System::Object^  sender, System::EventArgs^  e) {

		try
		{
			//przegladarkaPlikow->Filter = "Pliki pdf; Parasolid|*.pdf; *.x_b";
			przegladarkaPlikow->Filter = "Program na Robota|*.rpg| Plik PDF| *.pdf| Wszystkie pliki|*.*";
			przegladarkaPlikow->ShowDialog();
			String ^fromfile = przegladarkaPlikow->FileName;
			textBox1->Text = fromfile;
			FromFile = fromfile;
		}
		catch (Exception ^e)
		{
			MessageBox::Show("nie jest mo¿liwe otworzenie pliku :(");
		}
	}
	private: System::Void btnZapiszJako_Click(System::Object^  sender, System::EventArgs^  e) {

		try
		{
			saveFileDialog1->Filter = "Plik tekstowy|*.txt| Plik csv| *.csv| Wszystkie pliki|*.*";
			saveFileDialog1->ShowDialog();
			String ^toFile = saveFileDialog1->FileName;

			textBox2->Text = toFile;
			ToFile = toFile;
		}
		catch (Exception ^e)
		{
			MessageBox::Show("nie jest mo¿liwe utworzenie pliku :(");
		}
	}
	private: System::Void btn_wykonaj_Click(System::Object^  sender, System::EventArgs^  e) {

		try
		{
			KonwersjHeksagonalna objekt;
			array<unsigned char>^ adin = objekt.czytanieDanych(FromFile);
			if (checkBox2->Checked)
			{
				objekt.pisanieDoPliku(ToFile, adin, true);
			}
			else
			{
				objekt.pisanieDoPliku(ToFile, adin,false);
			}
			//objekt.pisanieDoPliku(ToFile, adin);
			if (checkBox1->Checked)
				Diagnostics::Process::Start(ToFile);
		}
		catch (Exception ^e)
		{

			MessageBox::Show("nie jest mo¿liwe zapisanie danych do tego pliku :(");
		}
		
	}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Edycja_Click(System::Object^  sender, System::EventArgs^  e) {
	//ByteShow::MyForm2 ^form2 = gcnew MyForm2(); ^FromFile, ^ToFile;
	EdycjaPliku();
	//Application::Run(% form2)
	
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void edycjaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	EdycjaPliku();
}
private: System::Void zmieñRozszerzenieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ByteShow::MyForm3^ form3 = gcnew MyForm3();
	form3->ShowDialog();
	form3->Close();
}
};
}

void ByteShow::MyForm::EdycjaPliku(void)
{
	try
	{
		
		if ((ToFile != nullptr) && (File::Exists(ToFile)))
		{
			ByteShow::MyForm2 ^form2 = gcnew MyForm2(ToFile, FromFile);

			form2->ShowDialog();
			form2->Close();
		}
		else
		{
			przegladarkaPlikow->Filter = "Plik tekstowy|*.txt| Plik csv| *.csv| Wszystkie pliki|*.*";
			przegladarkaPlikow->ShowDialog();
			String ^fromfile = przegladarkaPlikow->FileName;
			textBox2->Text = fromfile;
			ToFile = fromfile;
			if ((ToFile != nullptr) && (File::Exists(ToFile)))
			{
				ByteShow::MyForm2 ^form2 = gcnew MyForm2(ToFile, FromFile);

				form2->ShowDialog();
				form2->Close();
			}
			//MessageBox::Show("Nie wybrano pliku");
		}
	}
	catch (Exception ^e)
	{
		MessageBox::Show("Nieoczekiwany b³ad, nie mo¿na edytowaæ, lub plik nie istnieje");
	}

	
}
