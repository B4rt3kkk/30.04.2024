#pragma once

namespace zad1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Ek
	/// </summary>
	public ref class Ek : public System::Windows::Forms::Form
	{
	public:
		Ek(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~Ek()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ textBox_wysokosc;

	private: System::Windows::Forms::Label^ textBox_masa;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ napiswynik;
	private: System::Windows::Forms::Button^ E;
	private: System::Windows::Forms::Button^ EPP;
	private: System::Windows::Forms::Button^ EKK;


	protected:











	protected:







	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs�ugi projektanta � nie nale�y modyfikowa�
		/// jej zawarto�ci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Ek::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_wysokosc = (gcnew System::Windows::Forms::Label());
			this->textBox_masa = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->napiswynik = (gcnew System::Windows::Forms::Label());
			this->E = (gcnew System::Windows::Forms::Button());
			this->EPP = (gcnew System::Windows::Forms::Button());
			this->EKK = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::AntiqueWhite;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox_wysokosc);
			this->panel1->Controls->Add(this->textBox_masa);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->napiswynik);
			this->panel1->Location = System::Drawing::Point(446, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(465, 385);
			this->panel1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(212, 214);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(119, 20);
			this->textBox2->TabIndex = 11;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(212, 142);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(119, 20);
			this->textBox1->TabIndex = 10;
			// 
			// textBox_wysokosc
			// 
			this->textBox_wysokosc->AutoSize = true;
			this->textBox_wysokosc->BackColor = System::Drawing::Color::Pink;
			this->textBox_wysokosc->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox_wysokosc->ForeColor = System::Drawing::Color::Black;
			this->textBox_wysokosc->Location = System::Drawing::Point(21, 202);
			this->textBox_wysokosc->Name = L"textBox_wysokosc";
			this->textBox_wysokosc->Size = System::Drawing::Size(131, 25);
			this->textBox_wysokosc->TabIndex = 9;
			this->textBox_wysokosc->Text = L"WYSOKO��:";
			this->textBox_wysokosc->Click += gcnew System::EventHandler(this, &Ek::textBox_wysokosc);
			// 
			// textBox_masa
			// 
			this->textBox_masa->AutoSize = true;
			this->textBox_masa->BackColor = System::Drawing::Color::Pink;
			this->textBox_masa->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox_masa->ForeColor = System::Drawing::Color::Black;
			this->textBox_masa->Location = System::Drawing::Point(45, 142);
			this->textBox_masa->Name = L"textBox_masa";
			this->textBox_masa->Size = System::Drawing::Size(77, 25);
			this->textBox_masa->TabIndex = 8;
			this->textBox_masa->Text = L"MASA:";
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
			this->label1->Location = System::Drawing::Point(3, 51);
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
			this->E->BackColor = System::Drawing::Color::Black;
			this->E->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->E->ForeColor = System::Drawing::Color::White;
			this->E->Location = System::Drawing::Point(177, 305);
			this->E->Name = L"E";
			this->E->Size = System::Drawing::Size(152, 66);
			this->E->TabIndex = 10;
			this->E->Text = L"E";
			this->E->UseVisualStyleBackColor = false;
			// 
			// EPP
			// 
			this->EPP->BackColor = System::Drawing::Color::White;
			this->EPP->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EPP->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->EPP->Location = System::Drawing::Point(177, 168);
			this->EPP->Name = L"EPP";
			this->EPP->Size = System::Drawing::Size(152, 66);
			this->EPP->TabIndex = 9;
			this->EPP->Text = L"EP";
			this->EPP->UseVisualStyleBackColor = false;
			// 
			// EKK
			// 
			this->EKK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->EKK->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EKK->ForeColor = System::Drawing::Color::Black;
			this->EKK->Location = System::Drawing::Point(177, 37);
			this->EKK->Name = L"EKK";
			this->EKK->Size = System::Drawing::Size(152, 66);
			this->EKK->TabIndex = 8;
			this->EKK->Text = L"EK";
			this->EKK->UseVisualStyleBackColor = false;
			// 
			// Ek
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(923, 379);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->E);
			this->Controls->Add(this->EPP);
			this->Controls->Add(this->EKK);
			this->Name = L"Ek";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"Ek";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void wynik_out_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_oblicz_Click(System::Object^ sender, System::EventArgs^ e) {
		double masa = Convert::ToDouble(textBox_masa->Text);
		double wysokosc = Convert::ToDouble(textBox_wysokosc->Text);
		double grawitacja = 9.81;
		double wynik_ep = masa * grawitacja * wysokosc;
		napiswynik->Text = Convert::ToString(wynik_ep);
	}
	};
}