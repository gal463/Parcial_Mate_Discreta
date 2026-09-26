#pragma once

#include "Transformaciones.hpp"

namespace TransformacionesLineales {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Drawing;
    using namespace System::Drawing::Drawing2D;
    using namespace System::Globalization;
    using namespace System::Windows::Forms;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();

            transformaciones = gcnew Transformaciones();

            CalcularYRedibujar(false);
        }

    protected:
        ~MyForm()
        {
            if (components)
                delete components;
        }

    private:
        System::ComponentModel::Container^ components;
        System::Windows::Forms::Label^ lblTitulo;
        System::Windows::Forms::Panel^ pnlLienzo;
        System::Windows::Forms::GroupBox^ grpVector;
        System::Windows::Forms::Label^ lblX;
        System::Windows::Forms::Label^ lblY;
        System::Windows::Forms::TextBox^ txtX;
        System::Windows::Forms::TextBox^ txtY;
        System::Windows::Forms::Button^ btnGraficar;
        System::Windows::Forms::GroupBox^ grpMatriz;
        System::Windows::Forms::Label^ lblA11;
        System::Windows::Forms::Label^ lblA12;
        System::Windows::Forms::Label^ lblA21;
        System::Windows::Forms::Label^ lblA22;
        System::Windows::Forms::TextBox^ txtA11;
        System::Windows::Forms::TextBox^ txtA12;
        System::Windows::Forms::TextBox^ txtA21;
        System::Windows::Forms::TextBox^ txtA22;
        System::Windows::Forms::Button^ btnAplicarMatriz;
        System::Windows::Forms::GroupBox^ grpTransformaciones;
        System::Windows::Forms::ComboBox^ cboTransformacion;
        System::Windows::Forms::Button^ btnAplicarTransformacion;
        System::Windows::Forms::GroupBox^ grpInclinacion;
        System::Windows::Forms::Label^ lblGrados;
        System::Windows::Forms::TextBox^ txtGrados;
        System::Windows::Forms::Button^ btnAplicarGrado;
        System::Windows::Forms::GroupBox^ grpResultado;
        System::Windows::Forms::Label^ lblResultadoX;
        System::Windows::Forms::Label^ lblResultadoY;
        System::Windows::Forms::TextBox^ txtResultadoX;
        System::Windows::Forms::TextBox^ txtResultadoY;
        System::Windows::Forms::Button^ btnLimpiar;
        System::Windows::Forms::Button^ btnRegresar;
        System::Windows::Forms::Label^ lblLeyendaOriginal;
        System::Windows::Forms::Label^ lblLeyendaTransformado;
        Transformaciones^ transformaciones;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->lblTitulo = (gcnew System::Windows::Forms::Label());
            this->pnlLienzo = (gcnew System::Windows::Forms::Panel());
            this->grpVector = (gcnew System::Windows::Forms::GroupBox());
            this->lblX = (gcnew System::Windows::Forms::Label());
            this->lblY = (gcnew System::Windows::Forms::Label());
            this->txtX = (gcnew System::Windows::Forms::TextBox());
            this->txtY = (gcnew System::Windows::Forms::TextBox());
            this->btnGraficar = (gcnew System::Windows::Forms::Button());
            this->grpMatriz = (gcnew System::Windows::Forms::GroupBox());
            this->lblA11 = (gcnew System::Windows::Forms::Label());
            this->lblA12 = (gcnew System::Windows::Forms::Label());
            this->lblA21 = (gcnew System::Windows::Forms::Label());
            this->lblA22 = (gcnew System::Windows::Forms::Label());
            this->txtA11 = (gcnew System::Windows::Forms::TextBox());
            this->txtA12 = (gcnew System::Windows::Forms::TextBox());
            this->txtA21 = (gcnew System::Windows::Forms::TextBox());
            this->txtA22 = (gcnew System::Windows::Forms::TextBox());
            this->btnAplicarMatriz = (gcnew System::Windows::Forms::Button());
            this->grpTransformaciones = (gcnew System::Windows::Forms::GroupBox());
            this->cboTransformacion = (gcnew System::Windows::Forms::ComboBox());
            this->btnAplicarTransformacion = (gcnew System::Windows::Forms::Button());
            this->grpInclinacion = (gcnew System::Windows::Forms::GroupBox());
            this->lblGrados = (gcnew System::Windows::Forms::Label());
            this->txtGrados = (gcnew System::Windows::Forms::TextBox());
            this->btnAplicarGrado = (gcnew System::Windows::Forms::Button());
            this->grpResultado = (gcnew System::Windows::Forms::GroupBox());
            this->lblResultadoX = (gcnew System::Windows::Forms::Label());
            this->lblResultadoY = (gcnew System::Windows::Forms::Label());
            this->txtResultadoX = (gcnew System::Windows::Forms::TextBox());
            this->txtResultadoY = (gcnew System::Windows::Forms::TextBox());
            this->btnLimpiar = (gcnew System::Windows::Forms::Button());
            this->btnRegresar = (gcnew System::Windows::Forms::Button());
            this->lblLeyendaOriginal = (gcnew System::Windows::Forms::Label());
            this->lblLeyendaTransformado = (gcnew System::Windows::Forms::Label());
            this->grpVector->SuspendLayout();
            this->grpMatriz->SuspendLayout();
            this->grpTransformaciones->SuspendLayout();
            this->grpInclinacion->SuspendLayout();
            this->grpResultado->SuspendLayout();
            this->SuspendLayout();
            // 
            // lblTitulo
            // 
            this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Bold));
            this->lblTitulo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(104)));
            this->lblTitulo->Location = System::Drawing::Point(25, 20);
            this->lblTitulo->Name = L"lblTitulo";
            this->lblTitulo->Size = System::Drawing::Size(1155, 48);
            this->lblTitulo->TabIndex = 0;
            this->lblTitulo->Text = L"TRANSFORMACIONES LINEALES";
            this->lblTitulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pnlLienzo
            // 
            this->pnlLienzo->BackColor = System::Drawing::Color::White;
            this->pnlLienzo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pnlLienzo->Location = System::Drawing::Point(25, 85);
            this->pnlLienzo->Name = L"pnlLienzo";
            this->pnlLienzo->Size = System::Drawing::Size(770, 610);
            this->pnlLienzo->TabIndex = 1;
            this->pnlLienzo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pnlLienzo_Paint);
            // 
            // grpVector
            // 
            this->grpVector->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                static_cast<System::Int32>(static_cast<System::Byte>(247)));
            this->grpVector->Controls->Add(this->lblX);
            this->grpVector->Controls->Add(this->lblY);
            this->grpVector->Controls->Add(this->txtX);
            this->grpVector->Controls->Add(this->txtY);
            this->grpVector->Controls->Add(this->btnGraficar);
            this->grpVector->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
            this->grpVector->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(104)));
            this->grpVector->Location = System::Drawing::Point(820, 85);
            this->grpVector->Name = L"grpVector";
            this->grpVector->Size = System::Drawing::Size(360, 112);
            this->grpVector->TabIndex = 2;
            this->grpVector->TabStop = false;
            this->grpVector->Text = L"INGRESA EL VECTOR";
            // 
            // lblX
            // 
            this->lblX->AutoSize = true;
            this->lblX->Location = System::Drawing::Point(20, 34);
            this->lblX->Name = L"lblX";
            this->lblX->Size = System::Drawing::Size(25, 23);
            this->lblX->TabIndex = 0;
            this->lblX->Text = L"X:";
            // 
            // lblY
            // 
            this->lblY->AutoSize = true;
            this->lblY->Location = System::Drawing::Point(20, 72);
            this->lblY->Name = L"lblY";
            this->lblY->Size = System::Drawing::Size(24, 23);
            this->lblY->TabIndex = 1;
            this->lblY->Text = L"Y:";
            // 
            // txtX
            // 
            this->txtX->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->txtX->Location = System::Drawing::Point(55, 30);
            this->txtX->Name = L"txtX";
            this->txtX->Size = System::Drawing::Size(110, 30);
            this->txtX->TabIndex = 0;
            this->txtX->Text = L"2";
            this->txtX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->txtX->TextChanged += gcnew System::EventHandler(this, &MyForm::txtX_TextChanged);
            // 
            // txtY
            // 
            this->txtY->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->txtY->Location = System::Drawing::Point(55, 68);
            this->txtY->Name = L"txtY";
            this->txtY->Size = System::Drawing::Size(110, 30);
            this->txtY->TabIndex = 1;
            this->txtY->Text = L"3";
            this->txtY->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // btnGraficar
            // 
            this->btnGraficar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(104)));
            this->btnGraficar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnGraficar->ForeColor = System::Drawing::Color::White;
            this->btnGraficar->Location = System::Drawing::Point(190, 42);
            this->btnGraficar->Name = L"btnGraficar";
            this->btnGraficar->Size = System::Drawing::Size(145, 42);
            this->btnGraficar->TabIndex = 2;
            this->btnGraficar->Text = L"Graficar vector";
            this->btnGraficar->UseVisualStyleBackColor = false;
            this->btnGraficar->Click += gcnew System::EventHandler(this, &MyForm::btnGraficar_Click);
            // 
            // grpMatriz
            // 
            this->grpMatriz->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                static_cast<System::Int32>(static_cast<System::Byte>(247)));
            this->grpMatriz->Controls->Add(this->lblA11);
            this->grpMatriz->Controls->Add(this->lblA12);
            this->grpMatriz->Controls->Add(this->lblA21);
            this->grpMatriz->Controls->Add(this->lblA22);
            this->grpMatriz->Controls->Add(this->txtA11);
            this->grpMatriz->Controls->Add(this->txtA12);
            this->grpMatriz->Controls->Add(this->txtA21);
            this->grpMatriz->Controls->Add(this->txtA22);
            this->grpMatriz->Controls->Add(this->btnAplicarMatriz);
            this->grpMatriz->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
            this->grpMatriz->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(104)));
            this->grpMatriz->Location = System::Drawing::Point(820, 207);
            this->grpMatriz->Name = L"grpMatriz";
            this->grpMatriz->Size = System::Drawing::Size(360, 165);
            this->grpMatriz->TabIndex = 3;
            this->grpMatriz->TabStop = false;
            this->grpMatriz->Text = L"MATRIZ 2 × 2";
            // 
            // lblA11
            // 
            this->lblA11->AutoSize = true;
            this->lblA11->Location = System::Drawing::Point(20, 38);
            this->lblA11->Name = L"lblA11";
            this->lblA11->Size = System::Drawing::Size(33, 23);
            this->lblA11->TabIndex = 0;
            this->lblA11->Text = L"a11";
            // 
            // lblA12
            // 
            this->lblA12->AutoSize = true;
            this->lblA12->Location = System::Drawing::Point(174, 38);
            this->lblA12->Name = L"lblA12";
            this->lblA12->Size = System::Drawing::Size(35, 23);
            this->lblA12->TabIndex = 1;
            this->lblA12->Text = L"a12";
            // 
            // lblA21
            // 
            this->lblA21->AutoSize = true;
            this->lblA21->Location = System::Drawing::Point(20, 80);
            this->lblA21->Name = L"lblA21";
            this->lblA21->Size = System::Drawing::Size(35, 23);
            this->lblA21->TabIndex = 2;
            this->lblA21->Text = L"a21";
            // 
            // lblA22
            // 
            this->lblA22->AutoSize = true;
            this->lblA22->Location = System::Drawing::Point(174, 80);
            this->lblA22->Name = L"lblA22";
            this->lblA22->Size = System::Drawing::Size(37, 23);
            this->lblA22->TabIndex = 3;
            this->lblA22->Text = L"a22";
            // 
            // txtA11
            // 
            this->txtA11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->txtA11->Location = System::Drawing::Point(62, 34);
            this->txtA11->Name = L"txtA11";
            this->txtA11->Size = System::Drawing::Size(90, 30);
            this->txtA11->TabIndex = 0;
            this->txtA11->Text = L"2";
            this->txtA11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtA12
            // 
            this->txtA12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->txtA12->Location = System::Drawing::Point(216, 34);
            this->txtA12->Name = L"txtA12";
            this->txtA12->Size = System::Drawing::Size(90, 30);
            this->txtA12->TabIndex = 1;
            this->txtA12->Text = L"0";
            this->txtA12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtA21
            // 
            this->txtA21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->txtA21->Location = System::Drawing::Point(62, 76);
            this->txtA21->Name = L"txtA21";
            this->txtA21->Size = System::Drawing::Size(90, 30);
            this->txtA21->TabIndex = 2;
            this->txtA21->Text = L"0";
            this->txtA21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtA22
            // 
            this->txtA22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->txtA22->Location = System::Drawing::Point(216, 76);
            this->txtA22->Name = L"txtA22";
            this->txtA22->Size = System::Drawing::Size(90, 30);
            this->txtA22->TabIndex = 3;
            this->txtA22->Text = L"1";
            this->txtA22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // btnAplicarMatriz
            // 
            this->btnAplicarMatriz->Location = System::Drawing::Point(108, 116);
            this->btnAplicarMatriz->Name = L"btnAplicarMatriz";
            this->btnAplicarMatriz->Size = System::Drawing::Size(145, 36);
            this->btnAplicarMatriz->TabIndex = 4;
            this->btnAplicarMatriz->Text = L"Aplicar matriz";
            this->btnAplicarMatriz->UseVisualStyleBackColor = true;
            this->btnAplicarMatriz->Click += gcnew System::EventHandler(this, &MyForm::btnAplicarMatriz_Click);
            // 
            // grpTransformaciones
            // 
            this->grpTransformaciones->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
            this->grpTransformaciones->Controls->Add(this->cboTransformacion);
            this->grpTransformaciones->Controls->Add(this->btnAplicarTransformacion);
            this->grpTransformaciones->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
            this->grpTransformaciones->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(104)));
            this->grpTransformaciones->Location = System::Drawing::Point(820, 382);
            this->grpTransformaciones->Name = L"grpTransformaciones";
            this->grpTransformaciones->Size = System::Drawing::Size(360, 108);
            this->grpTransformaciones->TabIndex = 4;
            this->grpTransformaciones->TabStop = false;
            this->grpTransformaciones->Text = L"TRANSFORMACIONES";
            // 
            // cboTransformacion
            // 
            this->cboTransformacion->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->cboTransformacion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.5F));
            this->cboTransformacion->FormattingEnabled = true;
            this->cboTransformacion->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
                L"Identidad", L"Rotación 90°", L"Escala ×2",
                    L"Reflexión en X", L"Reflexión en Y", L"Cizallamiento en X", L"Proyección sobre X"
            });
            this->cboTransformacion->Location = System::Drawing::Point(20, 40);
            this->cboTransformacion->Name = L"cboTransformacion";
            this->cboTransformacion->Size = System::Drawing::Size(195, 29);
            this->cboTransformacion->TabIndex = 0;
            // 
            // btnAplicarTransformacion
            // 
            this->btnAplicarTransformacion->Location = System::Drawing::Point(230, 38);
            this->btnAplicarTransformacion->Name = L"btnAplicarTransformacion";
            this->btnAplicarTransformacion->Size = System::Drawing::Size(110, 36);
            this->btnAplicarTransformacion->TabIndex = 1;
            this->btnAplicarTransformacion->Text = L"Aplicar";
            this->btnAplicarTransformacion->UseVisualStyleBackColor = true;
            this->btnAplicarTransformacion->Click += gcnew System::EventHandler(this, &MyForm::btnAplicarTransformacion_Click);
            // 
            // grpInclinacion
            // 
            this->grpInclinacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
            this->grpInclinacion->Controls->Add(this->lblGrados);
            this->grpInclinacion->Controls->Add(this->txtGrados);
            this->grpInclinacion->Controls->Add(this->btnAplicarGrado);
            this->grpInclinacion->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
            this->grpInclinacion->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(104)));
            this->grpInclinacion->Location = System::Drawing::Point(820, 500);
            this->grpInclinacion->Name = L"grpInclinacion";
            this->grpInclinacion->Size = System::Drawing::Size(360, 100);
            this->grpInclinacion->TabIndex = 5;
            this->grpInclinacion->TabStop = false;
            this->grpInclinacion->Text = L"GRADO DE INCLINACIÓN";
            // 
            // lblGrados
            // 
            this->lblGrados->AutoSize = true;
            this->lblGrados->Location = System::Drawing::Point(20, 45);
            this->lblGrados->Name = L"lblGrados";
            this->lblGrados->Size = System::Drawing::Size(68, 23);
            this->lblGrados->TabIndex = 0;
            this->lblGrados->Text = L"Grados:";
            // 
            // txtGrados
            // 
            this->txtGrados->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->txtGrados->Location = System::Drawing::Point(92, 41);
            this->txtGrados->Name = L"txtGrados";
            this->txtGrados->Size = System::Drawing::Size(72, 30);
            this->txtGrados->TabIndex = 0;
            this->txtGrados->Text = L"45";
            this->txtGrados->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // btnAplicarGrado
            // 
            this->btnAplicarGrado->Location = System::Drawing::Point(180, 38);
            this->btnAplicarGrado->Name = L"btnAplicarGrado";
            this->btnAplicarGrado->Size = System::Drawing::Size(160, 38);
            this->btnAplicarGrado->TabIndex = 1;
            this->btnAplicarGrado->Text = L"Dibujar inclinación";
            this->btnAplicarGrado->UseVisualStyleBackColor = true;
            this->btnAplicarGrado->Click += gcnew System::EventHandler(this, &MyForm::btnAplicarGrado_Click);
            // 
            // grpResultado
            // 
            this->grpResultado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                static_cast<System::Int32>(static_cast<System::Byte>(247)));
            this->grpResultado->Controls->Add(this->lblResultadoX);
            this->grpResultado->Controls->Add(this->lblResultadoY);
            this->grpResultado->Controls->Add(this->txtResultadoX);
            this->grpResultado->Controls->Add(this->txtResultadoY);
            this->grpResultado->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
            this->grpResultado->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(104)));
            this->grpResultado->Location = System::Drawing::Point(820, 610);
            this->grpResultado->Name = L"grpResultado";
            this->grpResultado->Size = System::Drawing::Size(360, 82);
            this->grpResultado->TabIndex = 6;
            this->grpResultado->TabStop = false;
            this->grpResultado->Text = L"RESULTADO T(v)";
            // 
            // lblResultadoX
            // 
            this->lblResultadoX->AutoSize = true;
            this->lblResultadoX->Location = System::Drawing::Point(20, 39);
            this->lblResultadoX->Name = L"lblResultadoX";
            this->lblResultadoX->Size = System::Drawing::Size(29, 23);
            this->lblResultadoX->TabIndex = 0;
            this->lblResultadoX->Text = L"X\':";
            // 
            // lblResultadoY
            // 
            this->lblResultadoY->AutoSize = true;
            this->lblResultadoY->Location = System::Drawing::Point(177, 39);
            this->lblResultadoY->Name = L"lblResultadoY";
            this->lblResultadoY->Size = System::Drawing::Size(28, 23);
            this->lblResultadoY->TabIndex = 1;
            this->lblResultadoY->Text = L"Y\':";
            // 
            // txtResultadoX
            // 
            this->txtResultadoX->BackColor = System::Drawing::Color::White;
            this->txtResultadoX->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->txtResultadoX->Location = System::Drawing::Point(54, 35);
            this->txtResultadoX->Name = L"txtResultadoX";
            this->txtResultadoX->ReadOnly = true;
            this->txtResultadoX->Size = System::Drawing::Size(105, 30);
            this->txtResultadoX->TabIndex = 0;
            this->txtResultadoX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtResultadoY
            // 
            this->txtResultadoY->BackColor = System::Drawing::Color::White;
            this->txtResultadoY->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->txtResultadoY->Location = System::Drawing::Point(212, 35);
            this->txtResultadoY->Name = L"txtResultadoY";
            this->txtResultadoY->ReadOnly = true;
            this->txtResultadoY->Size = System::Drawing::Size(105, 30);
            this->txtResultadoY->TabIndex = 1;
            this->txtResultadoY->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // btnLimpiar
            // 
            this->btnLimpiar->Location = System::Drawing::Point(820, 709);
            this->btnLimpiar->Name = L"btnLimpiar";
            this->btnLimpiar->Size = System::Drawing::Size(110, 38);
            this->btnLimpiar->TabIndex = 7;
            this->btnLimpiar->Text = L"Limpiar";
            this->btnLimpiar->UseVisualStyleBackColor = true;
            this->btnLimpiar->Click += gcnew System::EventHandler(this, &MyForm::btnLimpiar_Click);
            // 
            // btnRegresar
            // 
            this->btnRegresar->Location = System::Drawing::Point(1070, 709);
            this->btnRegresar->Name = L"btnRegresar";
            this->btnRegresar->Size = System::Drawing::Size(110, 38);
            this->btnRegresar->TabIndex = 8;
            this->btnRegresar->Text = L"Regresar";
            this->btnRegresar->UseVisualStyleBackColor = true;
            this->btnRegresar->Click += gcnew System::EventHandler(this, &MyForm::btnRegresar_Click);
            // 
            // lblLeyendaOriginal
            // 
            this->lblLeyendaOriginal->AutoSize = true;
            this->lblLeyendaOriginal->BackColor = System::Drawing::Color::White;
            this->lblLeyendaOriginal->ForeColor = System::Drawing::Color::Blue;
            this->lblLeyendaOriginal->Location = System::Drawing::Point(42, 712);
            this->lblLeyendaOriginal->Name = L"lblLeyendaOriginal";
            this->lblLeyendaOriginal->Size = System::Drawing::Size(130, 20);
            this->lblLeyendaOriginal->TabIndex = 9;
            this->lblLeyendaOriginal->Text = L"● Vector original v";
            // 
            // lblLeyendaTransformado
            // 
            this->lblLeyendaTransformado->AutoSize = true;
            this->lblLeyendaTransformado->BackColor = System::Drawing::Color::White;
            this->lblLeyendaTransformado->ForeColor = System::Drawing::Color::Red;
            this->lblLeyendaTransformado->Location = System::Drawing::Point(220, 712);
            this->lblLeyendaTransformado->Name = L"lblLeyendaTransformado";
            this->lblLeyendaTransformado->Size = System::Drawing::Size(187, 20);
            this->lblLeyendaTransformado->TabIndex = 10;
            this->lblLeyendaTransformado->Text = L"● Vector transformado T(v)";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->ClientSize = System::Drawing::Size(1205, 765);
            this->Controls->Add(this->lblLeyendaTransformado);
            this->Controls->Add(this->lblLeyendaOriginal);
            this->Controls->Add(this->btnRegresar);
            this->Controls->Add(this->btnLimpiar);
            this->Controls->Add(this->grpResultado);
            this->Controls->Add(this->grpInclinacion);
            this->Controls->Add(this->grpTransformaciones);
            this->Controls->Add(this->grpMatriz);
            this->Controls->Add(this->grpVector);
            this->Controls->Add(this->pnlLienzo);
            this->Controls->Add(this->lblTitulo);
            this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximizeBox = false;
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Transformaciones Lineales";
            this->grpVector->ResumeLayout(false);
            this->grpVector->PerformLayout();
            this->grpMatriz->ResumeLayout(false);
            this->grpMatriz->PerformLayout();
            this->grpTransformaciones->ResumeLayout(false);
            this->grpInclinacion->ResumeLayout(false);
            this->grpInclinacion->PerformLayout();
            this->grpResultado->ResumeLayout(false);
            this->grpResultado->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        bool LeerNumero(System::Windows::Forms::TextBox^ caja, double% valor)
        {
            String^ texto = caja->Text->Trim()->Replace(L',', L'.');

            return Double::TryParse(texto, NumberStyles::Float, CultureInfo::InvariantCulture, valor);
        }

        String^ Formatear(double valor)
        {
            if (Math::Abs(valor) < 0.0000001)
                valor = 0.0;

            return valor.ToString(L"0.###", CultureInfo::InvariantCulture);
        }

        bool LeerVector(bool mostrarMensaje)
        {
            double x;
            double y;

            if (LeerNumero(txtX, x) && LeerNumero(txtY, y))
            {
                transformaciones->CambiarVector(x, y);
                return true;
            }

            if (mostrarMensaje)
            {
                MessageBox::Show(L"Ingrese valores numéricos válidos para X e Y.", L"Vector incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            }

            return false;
        }

        bool LeerMatriz(double% a11, double% a12, double% a21, double% a22, bool mostrarMensaje)
        {
            if (LeerNumero(txtA11, a11) && LeerNumero(txtA12, a12) && LeerNumero(txtA21, a21) && LeerNumero(txtA22, a22))
            {
                return true;
            }

            if (mostrarMensaje)
            {
                MessageBox::Show(L"Ingrese valores numéricos válidos en las cuatro posiciones de la matriz.", L"Matriz incorrecta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            }

            return false;
        }

        bool CalcularYRedibujar(bool mostrarMensaje)
        {
            double a11;
            double a12;
            double a21;
            double a22;

            if (!LeerVector(mostrarMensaje))
                return false;

            if (!LeerMatriz(a11, a12, a21, a22, mostrarMensaje))
            {
                return false;
            }

            transformaciones->AplicarMatriz(a11, a12, a21, a22);
            txtResultadoX->Text = Formatear(transformaciones->getRx());
            txtResultadoY->Text = Formatear(transformaciones->getRy());
            pnlLienzo->Invalidate();

            return true;
        }

        void ColocarMatriz(double a11, double a12, double a21, double a22)
        {
            txtA11->Text = Formatear(a11);
            txtA12->Text = Formatear(a12);
            txtA21->Text = Formatear(a21);
            txtA22->Text = Formatear(a22);
        }

        System::Drawing::PointF ConvertirPunto(double x, double y, float origenX, float origenY, float escala)
        {
            return PointF(origenX + (float)x * escala, origenY - (float)y * escala);
        }

        void DibujarFlecha(Graphics^ grafico, Color color, PointF inicio, PointF fin)
        {
            Pen^ lapiz = gcnew Pen(color, 3.0F);

            AdjustableArrowCap^ punta = gcnew AdjustableArrowCap(5.0F, 7.0F, true);

            lapiz->CustomEndCap = punta;

            grafico->DrawLine(lapiz, inicio, fin);

            delete punta;
            delete lapiz;
        }

        System::Void btnGraficar_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (LeerVector(true))
            {
                transformaciones->CopiarVector();
                txtResultadoX->Text = Formatear(transformaciones->getRx());
                txtResultadoY->Text = Formatear(transformaciones->getRy());
                pnlLienzo->Invalidate();
            }
        }

        System::Void btnAplicarMatriz_Click(System::Object^ sender, System::EventArgs^ e)
        {
            CalcularYRedibujar(true);
        }

        System::Void btnAplicarTransformacion_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (cboTransformacion->SelectedIndex < 0)
            {
                MessageBox::Show(L"Seleccione una transformación.", L"Transformación", MessageBoxButtons::OK, MessageBoxIcon::Information);

                return;
            }

            if (!LeerVector(true))
                return;

            switch (cboTransformacion->SelectedIndex)
            {
            case 0:
                transformaciones->Identidad();
                ColocarMatriz(1, 0, 0, 1);
                break;

            case 1:
                transformaciones->Rotacion90();
                ColocarMatriz(0, -1, 1, 0);
                break;

            case 2:
                transformaciones->Escala();
                ColocarMatriz(2, 0, 0, 2);
                break;

            case 3:
                transformaciones->ReflexionX();
                ColocarMatriz(1, 0, 0, -1);
                break;

            case 4:
                transformaciones->ReflexionY();
                ColocarMatriz(-1, 0, 0, 1);
                break;

            case 5:
                transformaciones->CizallamientoX();
                ColocarMatriz(1, 1, 0, 1);
                break;

            case 6:
                transformaciones->ProyeccionX();
                ColocarMatriz(1, 0, 0, 0);
                break;
            }

            txtResultadoX->Text = Formatear(transformaciones->getRx());
            txtResultadoY->Text = Formatear(transformaciones->getRy());
            pnlLienzo->Invalidate();
        }

        System::Void btnAplicarGrado_Click(System::Object^ sender, System::EventArgs^ e)
        {
            double grados;

            if (!LeerNumero(txtGrados, grados))
            {
                MessageBox::Show(L"Ingrese un grado de inclinación válido, por ejemplo 45 o -30.", L"Grado incorrecto",MessageBoxButtons::OK, MessageBoxIcon::Warning);

                return;
            }

            if (!LeerVector(true))
                return;

            transformaciones->Rotar(grados);

            double radianes = grados * Math::PI / 180.0;
            double coseno = Math::Cos(radianes);
            double seno =Math::Sin(radianes);

            ColocarMatriz(coseno, -seno, seno, coseno);

            txtResultadoX->Text = Formatear(transformaciones->getRx());
            txtResultadoY->Text = Formatear(transformaciones->getRy());
            pnlLienzo->Invalidate();
        }

        System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e)
        {
            txtX->Text = L"0";
            txtY->Text = L"0";

            ColocarMatriz(1, 0, 0, 1);

            txtGrados->Text = L"0";
            cboTransformacion->SelectedIndex = 0;
            transformaciones->Reiniciar();
            txtResultadoX->Text = Formatear(transformaciones->getRx());
            txtResultadoY->Text = Formatear(transformaciones->getRy());

            pnlLienzo->Invalidate();
        }

        System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->Close();
        }

        System::Void pnlLienzo_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
        {
            Graphics^ g = e->Graphics;

            g->SmoothingMode = SmoothingMode::AntiAlias;

            int ancho = pnlLienzo->ClientSize.Width;

            int alto = pnlLienzo->ClientSize.Height;

            if (ancho < 100 || alto < 100)
                return;

            float origenX = ancho / 2.0F;
            float origenY = alto / 2.0F;

            double mayor = Math::Max(Math::Max(Math::Abs(transformaciones->getVx()), Math::Abs(transformaciones->getVy())), Math::Max(Math::Abs(transformaciones->getRx()), Math::Abs(transformaciones->getRy())));

            double limite = Math::Max(10.0, Math::Ceiling(mayor) + 2.0);
            float escala = (float)(Math::Min(ancho - 90, alto - 90) / (2.0 * limite));

            Pen^ cuadricula = gcnew Pen(Color::FromArgb(225, 225, 225), 1.0F);

            cuadricula->DashStyle = DashStyle::Dot;

            int limiteEntero = (int)Math::Ceiling(limite);

            for (int i = -limiteEntero; i <= limiteEntero; ++i)
            {
                PointF puntoX = ConvertirPunto(i, 0, origenX, origenY, escala);

                PointF puntoY = ConvertirPunto(0, i, origenX, origenY, escala);

                g->DrawLine(cuadricula, puntoX.X, 25.0F, puntoX.X, (float)alto - 25.0F);
                g->DrawLine(cuadricula, 25.0F, puntoY.Y, (float)ancho - 25.0F, puntoY.Y);
            }

            Pen^ eje = gcnew Pen(Color::FromArgb(45, 45, 45), 1.8F);

            g->DrawLine(eje, 25.0F, origenY, (float)ancho - 25.0F, origenY);
            g->DrawLine(eje, origenX, 25.0F, origenX, (float)alto - 25.0F);

            System::Drawing::Font^ fuente = gcnew System::Drawing::Font(L"Segoe UI", 9.0F);

            g->DrawString(L"X", fuente, Brushes::Black, (float)ancho - 42.0F, origenY + 8.0F);
            g->DrawString(L"Y", fuente, Brushes::Black, origenX + 8.0F, 25.0F);

            PointF origen(origenX, origenY);
            PointF puntoVector = ConvertirPunto(transformaciones->getVx(), transformaciones->getVy(), origenX, origenY, escala);
            PointF puntoResultado = ConvertirPunto(transformaciones->getRx(), transformaciones->getRy(), origenX, origenY, escala);

            DibujarFlecha(g, Color::Blue, origen, puntoVector);
            DibujarFlecha(g, Color::Red, origen, puntoResultado);

            g->FillEllipse(Brushes::Blue, puntoVector.X - 4.0F, puntoVector.Y - 4.0F, 8.0F, 8.0F);
            g->FillEllipse(Brushes::Red, puntoResultado.X - 4.0F, puntoResultado.Y - 4.0F, 8.0F, 8.0F);
            g->DrawString( L"v = (" + Formatear(transformaciones->getVx()) + L", " + Formatear(transformaciones->getVy()) + L")", fuente, Brushes::Blue, puntoVector.X + 8.0F, puntoVector.Y - 25.0F);

            g->DrawString(L"T(v) = (" + Formatear(transformaciones->getRx()) + L", " + Formatear(transformaciones->getRy()) + L")", fuente, Brushes::Red, puntoResultado.X + 8.0F, puntoResultado.Y - 8.0F);

            delete fuente;
            delete eje;
            delete cuadricula;
        }

        System::Void txtX_TextChanged(System::Object^ sender, System::EventArgs^ e)
        {
        }
    };
}
