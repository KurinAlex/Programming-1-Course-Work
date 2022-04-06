#pragma once

#include "plot.h"

namespace Programming1CourseWork
{
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm()
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::DataVisualization::Charting::Chart^ chart;

		System::Windows::Forms::Button^ buttonPlot;

		System::Windows::Forms::TextBox^ textBoxSizeMin;
		System::Windows::Forms::TextBox^ textBoxMaxValue;
		System::Windows::Forms::TextBox^ textBoxMinValue;
		System::Windows::Forms::TextBox^ textBoxSizeMax;

		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label4;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent()
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->buttonPlot = (gcnew System::Windows::Forms::Button());
			this->textBoxSizeMin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSizeMax = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMinValue = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMaxValue = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea1->AxisX->Title = L"size";
			chartArea1->AxisY->Title = L"time (microseconds)";
			chartArea1->Name = L"chart_area";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"legend";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(0, 0);
			this->chart->Name = L"chart";
			this->chart->Size = System::Drawing::Size(780, 550);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart";
			// 
			// buttonPlot
			// 
			this->buttonPlot->Location = System::Drawing::Point(786, 124);
			this->buttonPlot->Name = L"buttonPlot";
			this->buttonPlot->Size = System::Drawing::Size(146, 56);
			this->buttonPlot->TabIndex = 5;
			this->buttonPlot->Text = L"Plot";
			this->buttonPlot->UseVisualStyleBackColor = true;
			this->buttonPlot->Click += gcnew System::EventHandler(this, &MyForm::buttonPlot_Click);
			// 
			// textBoxSizeMin
			// 
			this->textBoxSizeMin->Location = System::Drawing::Point(864, 12);
			this->textBoxSizeMin->Name = L"textBoxSizeMin";
			this->textBoxSizeMin->Size = System::Drawing::Size(68, 22);
			this->textBoxSizeMin->TabIndex = 1;
			this->textBoxSizeMin->Text = L"1";
			// 
			// textBoxSizeMax
			// 
			this->textBoxSizeMax->Location = System::Drawing::Point(864, 40);
			this->textBoxSizeMax->Name = L"textBoxSizeMax";
			this->textBoxSizeMax->Size = System::Drawing::Size(68, 22);
			this->textBoxSizeMax->TabIndex = 2;
			this->textBoxSizeMax->Text = L"10000";
			// 
			// textBoxMinValue
			// 
			this->textBoxMinValue->Location = System::Drawing::Point(864, 68);
			this->textBoxMinValue->Name = L"textBoxMinValue";
			this->textBoxMinValue->Size = System::Drawing::Size(68, 22);
			this->textBoxMinValue->TabIndex = 3;
			this->textBoxMinValue->Text = L"-1000";
			// 
			// textBoxMaxValue
			// 
			this->textBoxMaxValue->Location = System::Drawing::Point(864, 96);
			this->textBoxMaxValue->Name = L"textBoxMaxValue";
			this->textBoxMaxValue->Size = System::Drawing::Size(68, 22);
			this->textBoxMaxValue->TabIndex = 4;
			this->textBoxMaxValue->Text = L"1000";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(798, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"size_min";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(795, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"size_max";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(789, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"min_value";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(786, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"max_value";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 553);
			this->Controls->Add(this->textBoxSizeMax);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxMinValue);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxMaxValue);
			this->Controls->Add(this->textBoxSizeMin);
			this->Controls->Add(this->buttonPlot);
			this->Controls->Add(this->chart);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		System::String^ to_system(std::string s)
		{
			return gcnew System::String(s.c_str());
		}

		System::Void add_series(std::string name, series source)
		{
			auto series = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());

			series->ChartArea = L"chart_area";
			series->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series->Legend = L"legend";
			series->Name = to_system(name);
			for (point point : source)
			{
				series->Points->AddXY(point.x, point.y);
			}

			chart->Series->Add(series);
		}

		System::Void plot_data(series_collection series_collection)
		{
			for (auto series : series_collection)
			{
				add_series(series.first, series.second);
			}
		}

		System::Void clear_chart()
		{
			chart->Series->Clear();
		}

		System::Void buttonPlot_Click(System::Object^ sender, System::EventArgs^ e)
		{
			try
			{
				int size_min;
				int size_max;
				int min_value;
				int max_value;

				if (!System::Int32::TryParse(textBoxSizeMin->Text, size_min) ||
					!System::Int32::TryParse(textBoxSizeMax->Text, size_max) ||
					size_min <= 0 || size_max <= 0 || size_min > size_max ||
					!System::Int32::TryParse(textBoxMinValue->Text, min_value) ||
					!System::Int32::TryParse(textBoxMaxValue->Text, max_value) ||
					min_value > max_value)
				{
					throw std::exception("Wrong input");
				}

				clear_chart();
				plot_data(get_plot(size_min, size_max, min_value, max_value));
			}
			catch (std::exception ex)
			{
				System::Windows::Forms::MessageBox::Show(to_system(ex.what()), "Error");
			}
		}
	};
}