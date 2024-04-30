#pragma once

namespace zad1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ napiswynik;
	private: System::Windows::Forms::Button^ E;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ EK;
	private: System::Windows::Forms::Label^ label2;

	protected:







	protected:









	protected:








	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->napiswynik = (gcnew System::Windows::Forms::Label());
			this->E = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->EK = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::AntiqueWhite;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->napiswynik);
			this->panel1->Location = System::Drawing::Point(446, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(465, 385);
			this->panel1->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Pink;
			this->button1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(0, 297);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(467, 88);
			this->button1->TabIndex = 4;
			this->button1->Text = L"OBLICZ";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Thistle;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(0, 76);
			this->label1->Margin = System::Windows::Forms::Padding(15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(464, 34);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Aplikacja Kalkulator Energii";
			// 
			// napiswynik
			// 
			this->napiswynik->AutoSize = true;
			this->napiswynik->BackColor = System::Drawing::Color::Thistle;
			this->napiswynik->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->napiswynik->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->napiswynik->ForeColor = System::Drawing::Color::Black;
			this->napiswynik->Location = System::Drawing::Point(49, 12);
			this->napiswynik->Margin = System::Windows::Forms::Padding(15);
			this->napiswynik->Name = L"napiswynik";
			this->napiswynik->Size = System::Drawing::Size(384, 34);
			this->napiswynik->TabIndex = 4;
			this->napiswynik->Text = L"TUKEJ MOSZ WYNIK CHOPIE";
			// 
			// E
			// 
			this->E->BackColor = System::Drawing::Color::Olive;
			this->E->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->E->ForeColor = System::Drawing::Color::Black;
			this->E->Location = System::Drawing::Point(177, 306);
			this->E->Name = L"E";
			this->E->Size = System::Drawing::Size(152, 66);
			this->E->TabIndex = 10;
			this->E->Text = L"E";
			this->E->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gold;
			this->button2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(177, 189);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 66);
			this->button2->TabIndex = 9;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// EK
			// 
			this->EK->BackColor = System::Drawing::Color::Orange;
			this->EK->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EK->ForeColor = System::Drawing::Color::Black;
			this->EK->Location = System::Drawing::Point(177, 38);
			this->EK->Name = L"EK";
			this->EK->Size = System::Drawing::Size(152, 66);
			this->EK->TabIndex = 8;
			this->EK->Text = L"EK";
			this->EK->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(923, 379);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->E);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->EK);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
