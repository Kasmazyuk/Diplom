#pragma once
#include <iostream>
#include <cmath>
#include <sstream>  
#include "OsnZadacha.h"
#include "OsnOb.h"
#include "OsnUluch.h"
#include "TestovayaUluch.h"
using namespace System::IO;


namespace Laba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic; 
	using namespace System::Drawing::Drawing2D;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::DataGridView^  dataGridView2;


	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label9;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;


















	protected: 

	private:
		/// <summary>
		/// Òðåáóåòñÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Îáÿçàòåëüíûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà - íå èçìåíÿéòå
		/// ñîäåðæèìîå äàííîãî ìåòîäà ïðè ïîìîùè ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->Location = System::Drawing::Point(216, 649);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(333, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(445, 619);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->Visible = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(243, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Тестовая задача, обычная аппроксимация";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 44);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(259, 17);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Тестовая задача, улучшенная аппроксимация";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(12, 67);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(245, 17);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Основная задача, обычная аппроксимация";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(12, 90);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(261, 17);
			this->radioButton4->TabIndex = 6;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Основная задача, улучшенная аппроксимация";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(115, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"n - число разбиений";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 127);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"10";
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button3->Location = System::Drawing::Point(32, 649);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(166, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Постановка задачи";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(330, 658);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"max |U(x) - V(x)| = 0";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(333, 21);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(445, 619);
			this->dataGridView2->TabIndex = 13;
			this->dataGridView2->Visible = false;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(18, 400);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(91, 20);
			this->textBox4->TabIndex = 16;
			this->textBox4->Text = L"10";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(18, 443);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(91, 20);
			this->textBox5->TabIndex = 17;
			this->textBox5->Text = L"-10";
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(18, 508);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(91, 20);
			this->textBox6->TabIndex = 18;
			this->textBox6->Text = L"250";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(115, 403);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Слева";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(115, 446);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Справа";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(115, 511);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"На левом конце";
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(18, 547);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(91, 20);
			this->textBox7->TabIndex = 25;
			this->textBox7->Text = L"-250";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(115, 550);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(95, 13);
			this->label9->TabIndex = 26;
			this->label9->Text = L"На правом конце";
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart1->BackColor = System::Drawing::Color::Gray;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(813, 21);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(432, 99);
			this->chart1->TabIndex = 29;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// chart2
			// 
			this->chart2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart2->BackColor = System::Drawing::Color::DimGray;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(813, 534);
			this->chart2->Name = L"chart2";
			this->chart2->Size = System::Drawing::Size(432, 106);
			this->chart2->TabIndex = 30;
			this->chart2->Text = L"chart2";
			this->chart2->Click += gcnew System::EventHandler(this, &MyForm::chart2_Click);
			// 
			// textBox8
			// 
			this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(18, 342);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(91, 20);
			this->textBox8->TabIndex = 31;
			this->textBox8->Text = L"0.5";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(115, 345);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(169, 13);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Точка начала неравномерности";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(18, 168);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(156, 17);
			this->checkBox1->TabIndex = 34;
			this->checkBox1->Text = L"Таблица тестовой задачи";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(18, 191);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(158, 17);
			this->checkBox2->TabIndex = 35;
			this->checkBox2->Text = L"Таблица основной задачи";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(19, 285);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(127, 17);
			this->checkBox3->TabIndex = 36;
			this->checkBox3->Text = L"Равномерная сетка";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(19, 308);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(140, 17);
			this->checkBox4->TabIndex = 37;
			this->checkBox4->Text = L"Неравномерная сетка";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 365);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 26);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Коэффициенты передачи тепла от стержня \r\nв окружающую среду слева и справа";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 478);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(277, 13);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Температура окружающей среды на концах стержня";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button2->Location = System::Drawing::Point(32, 617);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 23);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Очистить графики";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(1257, 684);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Стационарное уравнение теплопроводности. Третья краевая задача.";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				int n, nboom;
				double mu1, mu2;
				double bet1, bet2;
				double Boom;
				
				
				n = Convert::ToInt32(textBox1->Text);
				mu1 = Convert::ToDouble(textBox4->Text);
				mu2 = Convert::ToDouble(textBox5->Text);
				bet1 = Convert::ToDouble(textBox6->Text);
				bet2 = Convert::ToDouble(textBox7->Text);
				Boom = Convert::ToDouble(textBox8->Text);
				nboom = n / 2;
				TestZadacha TestovayaOb(bet1, bet2, mu1, mu2);
				TestZadachaUluch TestovayaUl(bet1, bet2, mu1, mu2);
				OsnZadachaOb ObZadacha(bet1, bet2, mu1, mu2);
				OsnZadachaUl UlZadacha(bet1, bet2, mu1, mu2);
				TestZadacha TestovayaOb1(bet1, bet2, mu1, mu2);
				TestZadachaUluch TestovayaUl1(bet1, bet2, mu1, mu2);
				OsnZadachaOb ObZadacha1(bet1, bet2, mu1, mu2);
				OsnZadachaUl UlZadacha1(bet1, bet2, mu1, mu2);
				if (checkBox3->Checked == true)
				{
					if (radioButton1->Checked == true)
					{
						dataGridView1->Columns->Clear();
						TestovayaOb.TestClick(n);
						TestovayaOb.TestVivodvfail(n);
						dataGridView1->Columns->Add("x", "x");
						dataGridView1->Columns->Add("U(x)", "U(x)");
						dataGridView1->Columns->Add("V(x)", "V(x)");
						dataGridView1->Columns->Add("U(x) - V(x)", "U(x) - V(x)");
						label2->Text = "max |U(x) - V(x)| = " + TestovayaOb.MAX.ToString() + "		i=0,n";
					for (int i = 0; i < n+1; i++)
						{
							dataGridView1->Rows->Add(TestovayaOb.x[i], TestovayaOb.y[i], TestovayaOb.Tochn[i], TestovayaOb.Tochn[i] - TestovayaOb.y[i]);   
						}
					//График
					chart1->Series->Clear();
					Series^ series1 = gcnew Series(L"Тестовая \n задача,\n обычная \n аппроксимация");
					// синяя линия
					series1->Color = Color::Blue;
					series1->IsVisibleInLegend = true;
					series1->IsXValueIndexed = true;
					// линия, а не столбики
					series1->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart1->Series->Add(series1);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						series1->Points->AddXY(TestovayaOb.x[i], TestovayaOb.y[i]);
					}
					//График погрешности
					chart2->Series->Clear();
					Series^ series2 = gcnew Series(L"Погрешность");
					// синяя линия
					series2->Color = Color::Red;
					series2->IsVisibleInLegend = true;
					series2->IsXValueIndexed = true;
					// линия, а не столбики
					series2->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart2->Series->Add(series2);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						series2->Points->AddXY(TestovayaOb.x[i], TestovayaOb.Tochn[i] - TestovayaOb.y[i]);
					}


				

					}
					else if (radioButton2->Checked == true)
					{
						dataGridView1->Columns->Clear();
						TestovayaUl.TestClick(n);
						TestovayaUl.TestVivodvfail(n);
						dataGridView1->Columns->Add("x", "x");
						dataGridView1->Columns->Add("U(x)", "U(x)");
						dataGridView1->Columns->Add("V(x)", "V(x)");
						dataGridView1->Columns->Add("U(x) - V(x)", "U(x) - V(x)");
						label2->Text = "max |U(x) - V(x)| = " + TestovayaUl.MAX.ToString() + "		i=0,n";
					for (int i = 0; i < n+1; i++)
						{
							dataGridView1->Rows->Add(TestovayaUl.x[i], TestovayaUl.y[i], TestovayaUl.Tochn[i], TestovayaUl.Tochn[i] - TestovayaUl.y[i]);   
						}

					chart1->Series->Clear();
					Series^ series1 = gcnew Series(L"Тестовая \nзадача, \nулучшенная \nаппроксимация");
					// синяя линия
					series1->Color = Color::Blue;
					series1->IsVisibleInLegend = true;
					series1->IsXValueIndexed = true;
					// линия, а не столбики
					series1->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart1->Series->Add(series1);
					// добавляем значения
					for (int i = 0; i < n+1; i++) {
						series1->Points->AddXY(TestovayaUl.x[i], TestovayaUl.y[i]);
					}

					//График погрешности
					chart2->Series->Clear();
					Series^ series2 = gcnew Series(L"Погрешность");
					// синяя линия
					series2->Color = Color::Red;
					series2->IsVisibleInLegend = true;
					series2->IsXValueIndexed = true;
					// линия, а не столбики
					series2->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart2->Series->Add(series2);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						series2->Points->AddXY(TestovayaUl.x[i], TestovayaUl.Tochn[i] - TestovayaUl.y[i]);
					}

					}
					else if (radioButton3->Checked == true) 
					{
						dataGridView2->Columns->Clear();
						ObZadacha.TestClick(n);
						ObZadacha.TestVivodvfail(n);
						dataGridView2->Columns->Add("x", "x");
						dataGridView2->Columns->Add("U(x)", "U(x)");
						dataGridView2->Columns->Add("V(x)", "V(x)");
						dataGridView2->Columns->Add("U(x) - V(x)", "U(x) - V(x)");
						label2->Text = "max |U(x) - V(x)| = " + ObZadacha.MAX.ToString() + "		i=0,n";
					for (int i = 0; i < n+1; i++)
						{
							dataGridView2->Rows->Add(ObZadacha.x[i], ObZadacha.y[i], ObZadacha.Tochn[2*i], ObZadacha.Tochn[2*i] - ObZadacha.y[i]);   
						}

					chart1->Series->Clear();
					Series^ series1 = gcnew Series(L"Основная \nзадача, \nобычная \nаппроксимация");
					// синяя линия
					series1->Color = Color::Blue;
					series1->IsVisibleInLegend = true;
					series1->IsXValueIndexed = true;
					// линия, а не столбики
					series1->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart1->Series->Add(series1);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						series1->Points->AddXY(ObZadacha.x[i], ObZadacha.y[i]);
					}

					//График погрешности
					chart2->Series->Clear();
					Series^ series2 = gcnew Series(L"Погрешность");
					// синяя линия
					series2->Color = Color::Red;
					series2->IsVisibleInLegend = true;
					series2->IsXValueIndexed = true;
					// линия, а не столбики
					series2->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart2->Series->Add(series2);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						series2->Points->AddXY(ObZadacha.x[i], ObZadacha.Tochn[2*i] - ObZadacha.y[i]);
					}

					}
					else if (radioButton4->Checked == true)
					{
						dataGridView2->Columns->Clear();
						UlZadacha.TestClick(n);
						UlZadacha.TestVivodvfail(n);
						dataGridView2->Columns->Add("x", "x");
						dataGridView2->Columns->Add("U(x)", "U(x)");
						dataGridView2->Columns->Add("V(x)", "V(x)");
						dataGridView2->Columns->Add("U(x) - V(x)", "U(x) - V(x)");
						label2->Text = "max |U(x) - V(x)| = " + UlZadacha.MAX.ToString() + "		i=0,n";
					for (int i = 0; i < n+1; i++)
						{
							dataGridView2->Rows->Add(UlZadacha.x[i], UlZadacha.y[i], UlZadacha.Tochn[2*i], UlZadacha.Tochn[2*i] - UlZadacha.y[i]);   
						}

					chart1->Series->Clear();
					Series^ series1 = gcnew Series(L"Основная \nзадача,\n улучшенная\n аппроксимация");
					// синяя линия
					series1->Color = Color::Blue;
					series1->IsVisibleInLegend = true;
					series1->IsXValueIndexed = true;
					// линия, а не столбики
					series1->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart1->Series->Add(series1);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						series1->Points->AddXY(UlZadacha.x[i], UlZadacha.y[i]);
					}

					//График погрешности
					chart2->Series->Clear();
					Series^ series2 = gcnew Series(L"Погрешность");
					// синяя линия
					series2->Color = Color::Red;
					series2->IsVisibleInLegend = true;
					series2->IsXValueIndexed = true;
					// линия, а не столбики
					series2->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart2->Series->Add(series2);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						series2->Points->AddXY(UlZadacha.x[i], UlZadacha.Tochn[2*i] - UlZadacha.y[i]);
					}

					}

				}
				else if (checkBox4->Checked == true)
				{
					if (radioButton1->Checked == true)
					{
						dataGridView1->Columns->Clear();
						TestovayaOb.TestClick(n);
						TestovayaOb1.TestClick(nboom);

						TestovayaOb.TestVivodvfail(n);
						dataGridView1->Columns->Add("x", "x");
						dataGridView1->Columns->Add("U(x)", "U(x)");
						dataGridView1->Columns->Add("V(x)", "V(x)");
						dataGridView1->Columns->Add("U(x) - V(x)", "U(x) - V(x)");
						label2->Text = "max |U(x) - V(x)| = " + TestovayaOb.MAX.ToString() + "		i=0,n";
						
					for (int i = 0; i < n+1; i++)
						{
							if (TestovayaOb.x[i] <= Boom)
							dataGridView1->Rows->Add(TestovayaOb.x[i], TestovayaOb.y[i], TestovayaOb.Tochn[i], TestovayaOb.Tochn[i] - TestovayaOb.y[i]);   
						}
					for (int i = 0; i < nboom+1; i++)
						{
							if (TestovayaOb1.x[i] > Boom)
							dataGridView1->Rows->Add(TestovayaOb1.x[i], TestovayaOb1.y[i], TestovayaOb1.Tochn[i], TestovayaOb1.Tochn[i] - TestovayaOb1.y[i]);   
						}
					//График
					chart1->Series->Clear();
					Series^ series1 = gcnew Series(L"Тестовая\n задача,\n обычная \nаппроксимация");
					// синяя линия
					series1->Color = Color::Blue;
					series1->IsVisibleInLegend = true;
					series1->IsXValueIndexed = true;
					// линия, а не столбики
					series1->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart1->Series->Add(series1);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						if (TestovayaOb.x[i] <= Boom)
						series1->Points->AddXY(TestovayaOb.x[i], TestovayaOb.y[i]);
					}
					for (int i = 0; i < nboom+1; i++)
					{
						if (TestovayaOb1.x[i] > Boom)
							series1->Points->AddXY(TestovayaOb1.x[i], TestovayaOb1.y[i]);
					}
					//График погрешности
					chart2->Series->Clear();
					Series^ series2 = gcnew Series(L"Погрешность");
					// синяя линия
					series2->Color = Color::Red;
					series2->IsVisibleInLegend = true;
					series2->IsXValueIndexed = true;
					// линия, а не столбики
					series2->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart2->Series->Add(series2);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						if (TestovayaOb.x[i] <= Boom)
						series2->Points->AddXY(TestovayaOb.x[i], TestovayaOb.Tochn[i] - TestovayaOb.y[i]);
					}
					for (int i = 0; i < nboom+1; i++)
					{
						if (TestovayaOb1.x[i] > Boom)
							series2->Points->AddXY(TestovayaOb1.x[i], TestovayaOb1.Tochn[i] - TestovayaOb1.y[i]);
					}


				

					}
					else if (radioButton2->Checked == true)
					{
						dataGridView1->Columns->Clear();
						TestovayaUl.TestClick(n);
						TestovayaUl1.TestClick(nboom);
						TestovayaUl.TestVivodvfail(n);
						dataGridView1->Columns->Add("x", "x");
						dataGridView1->Columns->Add("U(x)", "U(x)");
						dataGridView1->Columns->Add("V(x)", "V(x)");
						dataGridView1->Columns->Add("U(x) - V(x)", "U(x) - V(x)");
						label2->Text = "max |U(x) - V(x)| = " + TestovayaUl.MAX.ToString() + "		i=0,n";
					for (int i = 0; i < n+1; i++)
						{
							if (TestovayaUl.x[i] <= Boom)
							dataGridView1->Rows->Add(TestovayaUl.x[i], TestovayaUl.y[i], TestovayaUl.Tochn[i], TestovayaUl.Tochn[i] - TestovayaUl.y[i]);   
						}
					for (int i = 0; i < nboom+1; i++)
					{
						if (TestovayaUl1.x[i] > Boom)
							dataGridView1->Rows->Add(TestovayaUl1.x[i], TestovayaUl1.y[i], TestovayaUl1.Tochn[i], TestovayaUl1.Tochn[i] - TestovayaUl1.y[i]);   
					}

					chart1->Series->Clear();
					Series^ series1 = gcnew Series(L"Тестовая \nзадача, \n улучшенная \n аппроксимация");
					// синяя линия
					series1->Color = Color::Blue;
					series1->IsVisibleInLegend = true;
					series1->IsXValueIndexed = true;
					// линия, а не столбики
					series1->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart1->Series->Add(series1);
					// добавляем значения
					for (int i = 0; i < n+1; i++) {
						if (TestovayaUl.x[i] <= Boom)
						series1->Points->AddXY(TestovayaUl.x[i], TestovayaUl.y[i]);
					}
					for (int i = 0; i < nboom+1; i++)
					{
						if (TestovayaUl1.x[i] > Boom)
							series1->Points->AddXY(TestovayaUl1.x[i], TestovayaUl1.y[i]);
					}
					//График погрешности
					chart2->Series->Clear();
					Series^ series2 = gcnew Series(L"Погрешность");
					// синяя линия
					series2->Color = Color::Red;
					series2->IsVisibleInLegend = true;
					series2->IsXValueIndexed = true;
					// линия, а не столбики
					series2->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart2->Series->Add(series2);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						if (TestovayaUl.x[i] <= Boom)
						series2->Points->AddXY(TestovayaUl.x[i], TestovayaUl.Tochn[i] - TestovayaUl.y[i]);
					}
					for (int i = 0; i < nboom+1; i++)
					{
						if (TestovayaUl1.x[i] > Boom)
							series2->Points->AddXY(TestovayaUl1.x[i], TestovayaUl1.Tochn[i] - TestovayaUl1.y[i]);
						}
					}
					else if (radioButton3->Checked == true) 
					{
						dataGridView2->Columns->Clear();
						ObZadacha.TestClick(n);
						ObZadacha1.TestClick(nboom);
						ObZadacha.TestVivodvfail(n);
						dataGridView2->Columns->Add("x", "x");
						dataGridView2->Columns->Add("U(x)", "U(x)");
						dataGridView2->Columns->Add("V(x)", "V(x)");
						dataGridView2->Columns->Add("U(x) - V(x)", "U(x) - V(x)");
						label2->Text = "max |U(x) - V(x)| = " + ObZadacha.MAX.ToString() + "		i=0,n";
					for (int i = 0; i < n+1; i++)
						{
							if (ObZadacha.x[i] <= Boom)
							dataGridView2->Rows->Add(ObZadacha.x[i], ObZadacha.y[i], ObZadacha.Tochn[2*i], ObZadacha.Tochn[2*i] - ObZadacha.y[i]);   
						}
					for (int i = 0; i < nboom+1; i++)
						{
							if (ObZadacha1.x[i] > Boom)
								dataGridView2->Rows->Add(ObZadacha1.x[i], ObZadacha1.y[i], ObZadacha1.Tochn[2*i], ObZadacha1.Tochn[2*i] - ObZadacha1.y[i]); 
						}


					chart1->Series->Clear();
					Series^ series1 = gcnew Series(L"Основная \nзадача,\n обычная \n аппроксимация");
					// синяя линия
					series1->Color = Color::Blue;
					series1->IsVisibleInLegend = true;
					series1->IsXValueIndexed = true;
					// линия, а не столбики
					series1->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart1->Series->Add(series1);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						if (ObZadacha.x[i] <= Boom)
						series1->Points->AddXY(ObZadacha.x[i], ObZadacha.y[i]);
					}
					for (int i = 0; i < nboom+1; i++)
						{
							if (ObZadacha1.x[i] > Boom)
								series1->Points->AddXY(ObZadacha1.x[i], ObZadacha1.y[i]);
					}

					//График погрешности
					chart2->Series->Clear();
					Series^ series2 = gcnew Series(L"Погрешность");
					// синяя линия
					series2->Color = Color::Red;
					series2->IsVisibleInLegend = true;
					series2->IsXValueIndexed = true;
					// линия, а не столбики
					series2->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart2->Series->Add(series2);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						if (ObZadacha.x[i] <= Boom)
						series2->Points->AddXY(ObZadacha.x[i], ObZadacha.Tochn[2*i] - ObZadacha.y[i]);
					}
					for (int i = 0; i < nboom+1; i++)
						{
							if (ObZadacha1.x[i] > Boom)
							series2->Points->AddXY(ObZadacha1.x[i], ObZadacha1.Tochn[2*i] - ObZadacha1.y[i]);
					}

					}
					else if (radioButton4->Checked == true)
					{
						dataGridView2->Columns->Clear();
						UlZadacha.TestClick(n);
						UlZadacha1.TestClick(nboom);
						UlZadacha.TestVivodvfail(n);
						dataGridView2->Columns->Add("x", "x");
						dataGridView2->Columns->Add("U(x)", "U(x)");
						dataGridView2->Columns->Add("V(x)", "V(x)");
						dataGridView2->Columns->Add("U(x) - V(x)", "U(x) - V(x)");
						label2->Text = "max |U(x) - V(x)| = " + UlZadacha.MAX.ToString() + "		i=0,n";
					for (int i = 0; i < n+1; i++)
						{
							if (UlZadacha.x[i] <= Boom)
							dataGridView2->Rows->Add(UlZadacha.x[i], UlZadacha.y[i], UlZadacha.Tochn[2*i], UlZadacha.Tochn[2*i] - UlZadacha.y[i]);   
						}
					for (int i = 0; i < nboom+1; i++)
						{
							if (UlZadacha1.x[i] > Boom)
							dataGridView2->Rows->Add(UlZadacha1.x[i], UlZadacha1.y[i], UlZadacha1.Tochn[2*i], UlZadacha1.Tochn[2*i] - UlZadacha1.y[i]);   
						}

					chart1->Series->Clear();
					Series^ series1 = gcnew Series(L"Основная \nзадача,\n улучшенная \n аппроксимация");
					// синяя линия
					series1->Color = Color::Blue;
					series1->IsVisibleInLegend = true;
					series1->IsXValueIndexed = true;
					// линия, а не столбики
					series1->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart1->Series->Add(series1);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						if (UlZadacha.x[i] <= Boom)
						series1->Points->AddXY(UlZadacha.x[i], UlZadacha.y[i]);
					}
					for (int i = 0; i < nboom+1; i++)
						{
							if (UlZadacha1.x[i] > Boom)
								series1->Points->AddXY(UlZadacha1.x[i], UlZadacha1.y[i]);
					}
					//График погрешности
					chart2->Series->Clear();
					Series^ series2 = gcnew Series(L"Погрешность");
					// синяя линия
					series2->Color = Color::Red;
					series2->IsVisibleInLegend = true;
					series2->IsXValueIndexed = true;
					// линия, а не столбики
					series2->ChartType = SeriesChartType::Line;
					// добавляем линию к контролу
					chart2->Series->Add(series2);
					// добавляем значения

					for (int i = 0; i < n+1; i++) {
						if (UlZadacha.x[i] <= Boom)
						series2->Points->AddXY(UlZadacha.x[i], UlZadacha.Tochn[2*i] - UlZadacha.y[i]);
					}
					for (int i = 0; i < nboom+1; i++)
						{
							if (UlZadacha1.x[i] > Boom)
								series2->Points->AddXY(UlZadacha1.x[i], UlZadacha1.Tochn[2*i] - UlZadacha1.y[i]);
					}
					}
				}
			}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			Form ^ form2 = gcnew Form();
			Label^ label10 = gcnew Label();
			label10->Width = 300; //øèðèíà
			label10->Height = 300; //âûñîòà
			label10->Text = "Test task: \n\n U''(x) - 3U(x) = -12			x = [0;1]  \n -U'(0) + 10U(0) = 250 \n -U'(1) - 10U(1) = -250 \n\n\n Main task: \n\n (k(x)U'(x))' - q(x)U(x) = -f(x)			x = [0;1] \n k(x) = x(1-x) + 1\n q(x) = (x-1/2)^2 \n f(x) = 10(x^2)*(1-x)^2 \n -U'(0) + 10U(0) = 250 \n -U'(1) - 10U(1) = -250";
			form2->Text = L"Formulation of the tasks";
			form2->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			form2->StartPosition = FormStartPosition::CenterScreen;
			form2->Controls->Add(label10);
			form2->ShowDialog();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void lineShape3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			

		 }
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void chart2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox1->Checked == true)
			 {
			 checkBox2->Checked = false;
			 dataGridView1->Visible = true;
			 dataGridView2->Visible = false;
			 }
			 else
			 {
			 dataGridView1->Visible = false;
			 }
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox2->Checked == true)
			 {
			 checkBox1->Checked = false;
			 dataGridView2->Visible = true;
			 dataGridView1->Visible = false;
			 }
			 else
			 {
			 dataGridView2->Visible = false;
			 }
		 }
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox3->Checked == true)
			 {
				 checkBox4->Checked = false;
			 textBox8->Enabled = false;
			 }
			 else
			 {
			 textBox8->Enabled = false;
			 }
		 }
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox4->Checked == true)
			 {
				 checkBox3->Checked = false;
			 textBox8->Enabled = true;
			 }
			 else
			 {
			 textBox8->Enabled = false;
			 }
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 chart1->Series->Clear();
			 chart2->Series->Clear();
		 }
};
}
