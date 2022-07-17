#pragma once
#include<math.h>
int m, n, kol, kol2, p;
int A[50][50];
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(929, 723);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод данных матрицы";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(7, 163);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 92;
			this->dataGridView1->RowTemplate->Height = 37;
			this->dataGridView1->Size = System::Drawing::Size(916, 554);
			this->dataGridView1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(381, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(180, 29);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Матрица[n, m]:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(662, 88);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 35);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(138, 91);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 35);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(545, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"M-строк:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"N-строк:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(304, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(311, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Задайте размер матрицы";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Location = System::Drawing::Point(13, 743);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(929, 155);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Найти";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(723, 99);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 35);
			this->textBox4->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(723, 35);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 35);
			this->textBox3->TabIndex = 4;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(6, 101);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(463, 33);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Среднее значение этих элементов:";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(7, 35);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(636, 33);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Найти количество элементов матрицы больше 20:";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 927);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(239, 82);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Создать матрицу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(257, 927);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(399, 82);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Перенести данные из матрицы в массив и решит задание ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(662, 927);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(274, 82);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(953, 1021);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->MaximumSize = System::Drawing::Size(981, 1100);
			this->MinimumSize = System::Drawing::Size(981, 1100);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((textBox1->Text != "") && (textBox2->Text != "")) {
			m = Convert::ToInt32(textBox1->Text);
			n = Convert::ToInt32(textBox2->Text);
			dataGridView1->Columns->Clear();
			dataGridView1->RowCount = m;
			dataGridView1->ColumnCount = n;
			Random rnd;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					dataGridView1->Rows[i]->Cells[j]->Value = rnd.Next(-50, 50);
				}
			}
		}
		else
		{
			MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	kol = 0; kol2 = 0; p = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
		{
			A[i][j] = Convert::ToSingle(this->dataGridView1->Rows[i]->Cells[j]->Value);
			if (A[i][j] > 20) { kol++; }
			if (A[i][j] > 20) { p = p + A[i][j]; kol2++; }
		}
	}

	if ((checkBox1->Checked == true) && (kol != 0)) { this->textBox3->Text = Convert::ToString(kol); }
	else if (checkBox1->Checked == true) { this->textBox3->Text = Convert::ToString("нет элементов"); }
		
	if ((checkBox1->Checked == true) && (kol2 != 0)) { this->textBox4->Text = Convert::ToString(p); }
	else if (checkBox1->Checked == true) { this->textBox4->Text = Convert::ToString("нет элементов"); }
}
	   
};
}
