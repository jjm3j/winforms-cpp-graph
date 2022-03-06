#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^ Draw;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьГрафjpegToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Draw = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьГрафjpegToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pictureBox1->Location = System::Drawing::Point(12, 36);
			this->pictureBox1->MinimumSize = System::Drawing::Size(630, 410);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(630, 532);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Draw
			// 
			this->Draw->BackColor = System::Drawing::Color::OldLace;
			this->Draw->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Draw->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Draw->Location = System::Drawing::Point(1456, 36);
			this->Draw->Name = L"Draw";
			this->Draw->Size = System::Drawing::Size(85, 60);
			this->Draw->TabIndex = 1;
			this->Draw->Text = L"Отобразить граф";
			this->Draw->UseVisualStyleBackColor = true;
			this->Draw->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1456, 189);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 60);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Удалить граф";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->менюToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1553, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->сохранитьГрафjpegToolStripMenuItem,
					this->справкаToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// сохранитьГрафjpegToolStripMenuItem
			// 
			this->сохранитьГрафjpegToolStripMenuItem->Name = L"сохранитьГрафjpegToolStripMenuItem";
			this->сохранитьГрафjpegToolStripMenuItem->Size = System::Drawing::Size(200, 22);
			this->сохранитьГрафjpegToolStripMenuItem->Text = L"Сохранить граф (.jpeg)";
			this->сохранитьГрафjpegToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьГрафjpegToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(200, 22);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::справкаToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1456, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 44);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Открыть файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1456, 102);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 81);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Отобразить минимальное остовное дерево";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(648, 36);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(562, 263);
			this->dataGridView1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1216, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(11, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L" ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1216, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(11, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L" ";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(648, 305);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(562, 263);
			this->dataGridView2->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1553, 661);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Draw);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(1195, 700);
			this->Name = L"MyForm";
			this->Text = L"Visual Graph";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
		int N = 0;
		
		array<int, 2>^ matrix = gcnew array<int, 2>(51, 51);
		array<int, 2>^ matrixPrima = gcnew array<int, 2>(51, 51);

		//array<int>^ selected = gcnew array<int>(51);
		array<bool>^ selected = gcnew array<bool>(51);



		//array<System::String^>^ words;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		dataGridView1->Rows->Clear();
		dataGridView1->Columns ->Clear();

		int centerX = pictureBox1->Size.Width/2;
		int centerY = pictureBox1->Size.Height/2;

		int n = 0;
		int radius = 150;
		Graphics^ b = pictureBox1->CreateGraphics();

		Pen^ linePen = gcnew Pen(Brushes::DarkGray);
		linePen->Width = 2.5F;

		if (N > 30)
		{
			radius += 70;
		}
		
		if (N > 50)
		{
			MessageBox::Show("Количество вершин графа не может быть больше 50\n"
				"Введите меньшее число.", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			//table
			dataGridView1->RowCount = N;
			dataGridView1->ColumnCount = N;
			for (int i = 1; i < dataGridView1->Rows->Count+1; i++)
			{
				dataGridView1->Rows[i-1]->HeaderCell->Value = i.ToString();
				dataGridView1->Columns[i-1]->HeaderCell->Value = i.ToString();
			}
			
			for (int i = 0; i < N; i++)
				for (int j = 0; j < N; j++)
				{
					dataGridView1->Rows[i]->Cells[j]->Value = matrix[i+1,j+1].ToString();
					if (matrix[i + 1, j + 1] > 0)
						dataGridView1[i, j]->Style->BackColor = Color::LightGreen;
				}
			dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			
			//table

			
			for (size_t i = 1; i < N + 1; i++)
				for (size_t j = i; j < N + 1; j++)
				{
					if (matrix[i, j] > 0)
					{
						double ai = 2 * System::Math::PI * i / N;
						double aj = 2 * System::Math::PI * j / N;
						int xi = centerX + radius * System::Math::Sin(ai);
						int xj = centerX + radius * System::Math::Sin(aj);
						int yi = centerY + radius * System::Math::Cos(ai);
						int yj = centerY + radius * System::Math::Cos(aj);

						String^ ribWeight = gcnew String(System::Convert::ToString(matrix[i,j]));
						FontFamily^ fntFamily = gcnew FontFamily(L"Consolas");
						System::Drawing::Font^ fntWrite = gcnew System::Drawing::Font(fntFamily, 10.00F, FontStyle::Regular);

						b->DrawLine(linePen, xi + 5, yi - 5, xj + 5, yj - 5);
						b->DrawString(ribWeight, fntWrite, Brushes::Black, ((xi + 5) + (xj + 5)) / 2, ((yi - 5) + (yj - 5)) / 2);

					}

		for (size_t i = 1; i < N+1; i++)
		{

			double a = 2 * System::Math::PI * i / N;
			int x = centerX + radius * System::Math::Sin(a);
			int y = centerY + radius * System::Math::Cos(a)-15;

			String^ wata = gcnew String(System::Convert::ToString(i));

			FontFamily^ fntFamily = gcnew FontFamily(L"Arial");
			System::Drawing::Font^ fntWrite = gcnew System::Drawing::Font(fntFamily, 11.00F, FontStyle::Regular);
			b->FillEllipse(Brushes::DarkOrange, x, y, 25, 25);

			if (i > 10) x -= 3;
				b->DrawString(wata, fntWrite, Brushes::Black, x+5, y+5);
			//b->DrawEllipse(Pens::Black, x, y, 25, 25);

		}
		}
		}
	
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//if (MessageBox::Show("Вы дейстивительно хотите удалить\nграф?", "Удалить граф?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();
	pictureBox1->Refresh();
}
private: System::Void сохранитьГрафjpegToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	 

}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < 50; i++)
		for (int j = 0; j < 50; j++)
			matrix[i, j] = 0;
		
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		StreamReader^ f = gcnew StreamReader(openFileDialog1->FileName);
		String^ s = f->ReadLine();
		N = System::Convert::ToInt32(s);
		

		for (size_t i = 0; !f->EndOfStream; i++)
		{
			s = f->ReadLine();
			array<System::String^> ^words = s->Split(' ');
			int n1 = System::Convert::ToInt32(words[0]);
			int n2 = System::Convert::ToInt32(words[1]);
			int n3 = System::Convert::ToInt32(words[2]);
			matrix[n1, n2] = n3;
			matrix[n2, n1] = n3;

		}

		f->Close();
	}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();

		int no_edge;            // number of edge

		//pictureBox1->Refresh();
		//matrix prima init
		for (int i = 0; i < 50; i++)
			for (int j = 0; j < 50; j++)
				matrixPrima[i, j] = 0;
		//matrix prima init
		int centerX = pictureBox1->Size.Width / 2;
		int centerY = pictureBox1->Size.Height / 2;

		int n = 0;
		int radius = 150;
		Graphics^ b = pictureBox1->CreateGraphics();

		Pen^ linePen = gcnew Pen(Brushes::IndianRed);
		linePen->Width = 2.5F;

		for (size_t i = 1; i < N+1; i++)
		{
			selected[i] = false;
		}
		no_edge = 1;

		selected[1] = true;

		int x;            //  row number
		int y;            //  col number
		int sumWay = 0;
		String^ way = "Путь: \n";
	
		while (no_edge < N) {
			int min = 1000;
			x = 0;
			y = 0;
			for (int i = 0; i < N+1; i++) {
				if (selected[i]) {
					for (int j = 0; j < N+1; j++) {
						if (!selected[j] && matrix[i,j]) { // not in selected and there is an edge
							if (min > matrix[i,j]) {
								min = matrix[i,j];
								x = i;
								y = j;
							}

						}
					}
				}
			}

			matrixPrima[x, y] = matrix[x, y];
			matrixPrima[y, x] = matrix[x, y];

			sumWay = sumWay + matrix[x, y];
			way = way + (Convert::ToString(x) + "->" + Convert::ToString(y) + "=" + Convert::ToString(matrix[x, y]) + "\n");
			label1->Text = way;
			//cout << x << " - " << y << " :  " << matrix[x][y];
			selected[y] = true;
			no_edge++;
		}
		label2->Text = "Вес минимального остовного дерева = " + Convert::ToString(sumWay);

		if (N > 30)
		{
			radius += 70;
		}

		if (N > 50)
		{
			MessageBox::Show("Количество вершин графа не может быть больше 50\n"
				"Введите меньшее число.", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			//table
			dataGridView2->RowCount = N;
			dataGridView2->ColumnCount = N;
			for (int i = 1; i < dataGridView2->Rows->Count + 1; i++)
			{
				dataGridView2->Rows[i - 1]->HeaderCell->Value = i.ToString();
				dataGridView2->Columns[i - 1]->HeaderCell->Value = i.ToString();
			}

			for (int i = 0; i < N; i++)
				for (int j = 0; j < N; j++)
				{
					dataGridView2->Rows[i]->Cells[j]->Value = matrixPrima[i + 1, j + 1].ToString();
					if (matrixPrima[i + 1, j + 1] > 0)
						dataGridView2[i, j]->Style->BackColor = Color::IndianRed;
				}
			dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			dataGridView2->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;

			//table
			for (size_t i = 1; i < N + 1; i++)
				for (size_t j = i; j < N + 1; j++)
				{
					if (matrixPrima[i, j] > 0)
					{
						double ai = 2 * System::Math::PI * i / N;
						double aj = 2 * System::Math::PI * j / N;
						int xi = centerX + radius * System::Math::Sin(ai);
						int xj = centerX + radius * System::Math::Sin(aj);
						int yi = centerY + radius * System::Math::Cos(ai);
						int yj = centerY + radius * System::Math::Cos(aj);

						String^ ribWeight = gcnew String(System::Convert::ToString(matrixPrima[i, j]));
						FontFamily^ fntFamily = gcnew FontFamily(L"Consolas");
						System::Drawing::Font^ fntWrite = gcnew System::Drawing::Font(fntFamily, 10.00F, FontStyle::Regular);

						b->DrawLine(linePen, xi + 5, yi - 5, xj + 5, yj - 5);
						b->DrawString(ribWeight, fntWrite, Brushes::Black, ((xi + 5) + (xj + 5)) / 2, ((yi - 5) + (yj - 5)) / 2);

					}

					for (size_t i = 1; i < N + 1; i++)
					{

						double a = 2 * System::Math::PI * i / N;
						int x = centerX + radius * System::Math::Sin(a);
						int y = centerY + radius * System::Math::Cos(a) - 15;

						String^ wata = gcnew String(System::Convert::ToString(i));

						FontFamily^ fntFamily = gcnew FontFamily(L"Arial");
						System::Drawing::Font^ fntWrite = gcnew System::Drawing::Font(fntFamily, 11.00F, FontStyle::Regular);
						b->FillEllipse(Brushes::DarkRed, x, y, 25, 25);

						if (i > 10) x -= 3;
						b->DrawString(wata, fntWrite, Brushes::White, x + 5, y + 5);
						//b->DrawEllipse(Pens::Black, x, y, 25, 25);

					}
				}
		}
		StreamWriter^ wr = gcnew StreamWriter("OUTPUT.txt");
		int sumDelete = 0;
		for (size_t i = 0; i < N+1; i++)
		{
			for (size_t j = i; j < N+1; j++)
			{
				int f1 = matrix[i, j];
				int f2 = matrixPrima[i, j];

				if ((f1>0) && (f2 == 0))
				{
					wr->Write(Convert::ToString(i) + " " + Convert::ToString(j) + "\n");
					sumDelete += f1;
				}
			}
		}
		wr->Write(Convert::ToString(sumDelete));
		wr->Close();
	}


private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Откройте текстовый файл, где:\n"
		"1-ая строка содержит число вершин\nСледующие строки содержат 3 числа через пробел\nN1 N2 N3, где N1,N2 - вершины, N3 - длина пути", "Справка", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};

}
