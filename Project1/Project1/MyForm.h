#pragma once
#include <string>
#include <iostream>
#include <queue>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using std::cout;
	using std::endl;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TrackBar^ distanceTrackBar;


	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ distanceLabel;
	private: System::Windows::Forms::Label^ speedLabel;
	private: System::Windows::Forms::Label^ labal3;
	private: System::Windows::Forms::TrackBar^ speedTrackBar;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ submitBu;
	private: System::Windows::Forms::TrackBar^ heightTrackBar;

	private: System::Windows::Forms::Label^ tempLabel;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TrackBar^ tempTrackBar;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->distanceTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->distanceLabel = (gcnew System::Windows::Forms::Label());
			this->speedLabel = (gcnew System::Windows::Forms::Label());
			this->labal3 = (gcnew System::Windows::Forms::Label());
			this->speedTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->submitBu = (gcnew System::Windows::Forms::Button());
			this->heightTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->tempLabel = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tempTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->distanceTrackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedTrackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->heightTrackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tempTrackBar))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(726, 368);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// distanceTrackBar
			// 
			this->distanceTrackBar->Location = System::Drawing::Point(12, 442);
			this->distanceTrackBar->Maximum = 430;
			this->distanceTrackBar->Name = L"distanceTrackBar";
			this->distanceTrackBar->Size = System::Drawing::Size(234, 45);
			this->distanceTrackBar->SmallChange = 10;
			this->distanceTrackBar->TabIndex = 1;
			this->distanceTrackBar->TickFrequency = 10;
			this->distanceTrackBar->ValueChanged += gcnew System::EventHandler(this, &MyForm::distanceChanged);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 368);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(10);
			this->label1->Size = System::Drawing::Size(726, 54);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Прототип - СУ комплекса ударных КР ОТН с ТРД";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 490);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Дальность стрельбы комплекса:";
			// 
			// distanceLabel
			// 
			this->distanceLabel->AutoSize = true;
			this->distanceLabel->Location = System::Drawing::Point(199, 490);
			this->distanceLabel->Name = L"distanceLabel";
			this->distanceLabel->Size = System::Drawing::Size(42, 13);
			this->distanceLabel->TabIndex = 4;
			this->distanceLabel->Text = L"430 км";
			// 
			// speedLabel
			// 
			this->speedLabel->AutoSize = true;
			this->speedLabel->Location = System::Drawing::Point(199, 576);
			this->speedLabel->Name = L"speedLabel";
			this->speedLabel->Size = System::Drawing::Size(33, 13);
			this->speedLabel->TabIndex = 7;
			this->speedLabel->Text = L"40 уз";
			// 
			// labal3
			// 
			this->labal3->AutoSize = true;
			this->labal3->Location = System::Drawing::Point(19, 576);
			this->labal3->Name = L"labal3";
			this->labal3->Size = System::Drawing::Size(85, 13);
			this->labal3->TabIndex = 6;
			this->labal3->Text = L"Скорость цели:";
			// 
			// speedTrackBar
			// 
			this->speedTrackBar->LargeChange = 3;
			this->speedTrackBar->Location = System::Drawing::Point(19, 528);
			this->speedTrackBar->Maximum = 40;
			this->speedTrackBar->Name = L"speedTrackBar";
			this->speedTrackBar->Size = System::Drawing::Size(234, 45);
			this->speedTrackBar->TabIndex = 5;
			this->speedTrackBar->ValueChanged += gcnew System::EventHandler(this, &MyForm::speedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(199, 653);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"10 м";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 653);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Маршевая высота:";
			// 
			// submitBu
			// 
			this->submitBu->Location = System::Drawing::Point(465, 653);
			this->submitBu->Name = L"submitBu";
			this->submitBu->Size = System::Drawing::Size(249, 23);
			this->submitBu->TabIndex = 11;
			this->submitBu->Text = L"Показать контур контроля температуры";
			this->submitBu->UseVisualStyleBackColor = true;
			this->submitBu->Click += gcnew System::EventHandler(this, &MyForm::submitBu_Click);
			// 
			// heightTrackBar
			// 
			this->heightTrackBar->LargeChange = 1;
			this->heightTrackBar->Location = System::Drawing::Point(19, 605);
			this->heightTrackBar->Name = L"heightTrackBar";
			this->heightTrackBar->Size = System::Drawing::Size(234, 45);
			this->heightTrackBar->TabIndex = 12;
			this->heightTrackBar->ValueChanged += gcnew System::EventHandler(this, &MyForm::heightChanged);
			// 
			// tempLabel
			// 
			this->tempLabel->AutoSize = true;
			this->tempLabel->Location = System::Drawing::Point(652, 490);
			this->tempLabel->Name = L"tempLabel";
			this->tempLabel->Size = System::Drawing::Size(27, 13);
			this->tempLabel->TabIndex = 15;
			this->tempLabel->Text = L"0 °C";
			this->tempLabel->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(472, 490);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Начальная температура";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// tempTrackBar
			// 
			this->tempTrackBar->LargeChange = 1;
			this->tempTrackBar->Location = System::Drawing::Point(465, 442);
			this->tempTrackBar->Maximum = 30;
			this->tempTrackBar->Name = L"tempTrackBar";
			this->tempTrackBar->Size = System::Drawing::Size(234, 45);
			this->tempTrackBar->TabIndex = 13;
			this->tempTrackBar->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar2_Scroll);
			this->tempTrackBar->ValueChanged += gcnew System::EventHandler(this, &MyForm::tempChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(325, 560);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(295, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"T = Tн + Dстр/Dстр(max)*8 + Vц/Vц(max)*6 + hp/hp(max)*6";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(325, 528);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(192, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Формула вычисления температуры:";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 688);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tempLabel);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tempTrackBar);
			this->Controls->Add(this->heightTrackBar);
			this->Controls->Add(this->submitBu);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->speedLabel);
			this->Controls->Add(this->labal3);
			this->Controls->Add(this->speedTrackBar);
			this->Controls->Add(this->distanceLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->distanceTrackBar);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->distanceTrackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedTrackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->heightTrackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tempTrackBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private: System::Void submitBu_Click(System::Object^ sender, System::EventArgs^ e) {
			this->draw();
		}
		private: System::Void distanceChanged(System::Object^ sender, System::EventArgs^ e) {
			this->distanceLabel->Text = System::Convert::ToString(distanceTrackBar->Value)+" км";
		}
		private: System::Void speedChanged(System::Object^ sender, System::EventArgs^ e) {
			this->speedLabel->Text = System::Convert::ToString(speedTrackBar->Value) + " уз";
		}
		private: System::Void tempChanged(System::Object^ sender, System::EventArgs^ e) {
			this->tempLabel->Text = System::Convert::ToString(tempTrackBar->Value) + " °C";
		}
		private: System::Void heightChanged(System::Object^ sender, System::EventArgs^ e) {
			this->label3->Text = System::Convert::ToString(heightTrackBar->Value) + " м";
		}
			   
		int startX = 50;
		int startY = 10;
		int endX;
		int endY;

		int minTime = 0;
		int maxTime = 30;


		int minTemp = 0;
		int maxTemp = 30;

		int distanceMax = 430;
		int distKoef = 8;

		int speedMax = 40;
		int speedKoef = 6;

		int heightMax = 10;
		int heightKoef = 6;

		private: System::Void draw() {
			this->endX = this->pictureBox1->Size.Width - startX;
			this->endY = this->pictureBox1->Size.Height - startY * 2;
			Graphics^ g = pictureBox1->CreateGraphics();
			drawAxis(g);

			float temp = tempTrackBar->Value;
			float d = (float)distanceTrackBar->Value / distanceMax;
			float s = (float)speedTrackBar->Value / speedMax;
			float h = (float)heightTrackBar->Value / heightMax;
			temp += d*distKoef;
			temp += s * speedKoef;
			temp += h * heightKoef;
			
			
			if (temp > maxTime) {
				temp = maxTime;
			}

			int nagrev_temp = 5;
			int d_temp = 2;
			int dy = ((endY - startY) / maxTemp);
			int dx = ((endX - startX) / maxTime);
			array<Point>^ points = gcnew array<Point>(maxTime+1);
			Brush^ brush = gcnew SolidBrush(Color::Black);
			Pen^ blackPen = gcnew Pen(Color::Black, 1.0f);
			System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 7.0f, FontStyle::Regular);
			for (int i = 0; i <= maxTime; i++)
			{
				points[i] = Point(startX + dx * i, endY - dy * temp);

				if (temp < 3) {
					temp += 0.5;
				}
				else if (temp >= 3 && temp < 5) {
					temp += 0.2;
				}
				else if (temp >= 5 && temp < 15) {
					temp += 0.1;
				}
				else if (temp >= 15 && temp < 22) {
					temp -= 0.1;
				}
				else if (temp >= 22 && temp <=25)
				{
					temp -= 0.2;
				}
				else if (temp > 25 ) {
					temp -= 0.5;
				}
				else
				{
					temp -= 0.01;
				}

			}
			
			drawGraph(g,points);
		}

		array<Pen^>^ pens;
		int arrayHead = 0;
		private: System::Void drawGraph(Graphics^ g, array<Point>^ points) {
			g->DrawLines(pens[arrayHead++], points);

			if (arrayHead >= pens->Length) {
				arrayHead = 0;
			}
		}

		private: System::Void drawAxis(Graphics^ g) {
			Brush^ brush = gcnew SolidBrush(Color::Black);
			Pen^ blackPen = gcnew Pen(Color::Black, 1.0f);
			System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 7.0f, FontStyle::Regular);
			
			int axisLength = 6;
			int dy =  ((endY - startY) / maxTemp);

			g->DrawLine(blackPen, Point(startX, startY), Point(startX, endY));
			g->DrawString("т, °C", Font, brush,Point(5, startY));

			for (int i = maxTemp; i >= minTemp; i--) {
				g->DrawLine(blackPen,
					Point(startX - axisLength / 2, endY - dy * i),
					Point(startX + axisLength / 2, endY - dy * i));

				if (0 == i % 5) {
					g->DrawString(System::Convert::ToString(i), font, brush,
						Point(startX - axisLength - 10, endY - dy * i - axisLength));
				}
				
			}


			g->DrawLine(blackPen, Point(startX, endY), Point(endX, endY));
			g->DrawString("в, мин", Font, brush, Point(endX, endY));

			for (int i = minTime; i <= maxTime; i++) {
				g->DrawLine(blackPen, 
					Point(startX + ((endX - startX)/maxTime * i), endY - axisLength /2),
					Point(startX + ((endX - startX)/maxTime * i), endY + axisLength /2));

				if (0 == i % 5) {
					g->DrawString(System::Convert::ToString(i), font, brush,
						Point(startX + ((endX - startX) / maxTime * i) - 5, endY + axisLength));
				}
			}
		}
private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
