#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pictureBox1->Location = System::Drawing::Point(22, 36);
			this->pictureBox1->MinimumSize = System::Drawing::Size(630, 410);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(687, 473);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Draw
			// 
			this->Draw->BackColor = System::Drawing::Color::OldLace;
			this->Draw->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Draw->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Draw->Location = System::Drawing::Point(715, 36);
			this->Draw->Name = L"Draw";
			this->Draw->Size = System::Drawing::Size(75, 60);
			this->Draw->TabIndex = 1;
			this->Draw->Text = L"Отобразить граф";
			this->Draw->UseVisualStyleBackColor = true;
			this->Draw->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(715, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 60);
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
			this->menuStrip1->Size = System::Drawing::Size(802, 24);
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
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(715, 463);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 44);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Открыть файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(802, 519);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Draw);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(818, 558);
			this->MinimumSize = System::Drawing::Size(818, 551);
			this->Name = L"MyForm";
			this->Text = L"Visual Graph";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
		int N = 0;
		array<int, 2>^ matrix = gcnew array<int, 2>(51, 51);
		//array<System::String^>^ words;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int centerX = pictureBox1->Size.Width/2;
		int centerY = pictureBox1->Size.Height/2;

		int n = 0;
		int radius = 150;
		Graphics^ b = pictureBox1->CreateGraphics();

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
			for (size_t i = 1; i < N + 1; i++)
				for (size_t j = 0; j < N + 1; j++)
				{
					if (matrix[i, j] > 0)
					{
						double ai = 2 * System::Math::PI * i / N;
						double aj = 2 * System::Math::PI * j / N;
						int xi = centerX + radius * System::Math::Sin(ai);
						int xj = centerX + radius * System::Math::Sin(aj);
						int yi = centerY + radius * System::Math::Cos(ai);
						int yj = centerY + radius * System::Math::Cos(aj);

						b->DrawLine(Pens::DarkOrange, xi + 5, yi - 5, xj + 5, yj - 5);

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
		/*
		for (size_t i = 1; i < N+1; i++)
		{

			for (size_t j = 0; j < N+1; j++)
			{
				if (matrix[i,j] > 0)
				{
					double ai = 2 * System::Math::PI * i / N;
					double aj = 2 * System::Math::PI * j / N;
					int xi = centerX + radius * System::Math::Sin(ai);
					int xj = centerX + radius * System::Math::Sin(aj);
					int yi = centerY + radius * System::Math::Cos(ai);
					int yj = centerY + radius * System::Math::Cos(aj);

					b->DrawLine(Pens::DarkOrange, xi+5, yi-5, xj+5, yj-5);
					
				}
	
			}
		*/
		}
		}
	
		
		
		//g->DrawEllipse(gcnew Pen(Color::BlueViolet, 5), 250, 250, 200, 200);
		//g->FillRectangle(Brushes::Black, 100, 100, 1, 1);
		//g->FillRectangle(Brushes::Tomato, 110, 110, 1, 1);

		//g->DrawLine(p, pt1, pt2);
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (MessageBox::Show("Вы дейстивительно хотите удалить\nграф?", "Удалить граф?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
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
		}

	




			/*System::String::Split()
			matrix[][] = ;
		}
		/*
		while (!f->EndOfStream)
		{
			s = f->ReadLine();
			// что-нибудь делаем с прочитанной строкой s
		}
		*/
		f->Close();
	}
	}
};

}
