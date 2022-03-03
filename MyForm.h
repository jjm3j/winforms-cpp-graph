#pragma once
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->MaximumSize = System::Drawing::Size(630, 410);
			this->pictureBox1->MinimumSize = System::Drawing::Size(630, 410);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(630, 410);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(664, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 60);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(766, 459);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(782, 498);
			this->MinimumSize = System::Drawing::Size(782, 498);
			this->Name = L"MyForm";
			this->Text = L"Visual Graph";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		/*Graphics ^ g = pictureBox1->CreateGraphics();
		Pen^ p = gcnew Pen(Color::Black, 1.0f);
		Point pt1 = Point(50, 50);
		Point pt2 = Point(1000, 1000);*/

		int centerX = pictureBox1->Size.Width/2;
		int centerY = pictureBox1->Size.Height/2;

		int n = 0;
		int N = 31;
		int radius = 150;
		Graphics^ b = pictureBox1->CreateGraphics();

		if (N > 30)
		{
			radius += 10;
		}

		for (size_t i = 0; i < N; i++)
		{
			double a = 2 * System::Math::PI * i / N;
			int x = centerX + radius * System::Math::Sin(a);
			int y = centerY + radius * System::Math::Cos(a);

			String^ wata = gcnew String(System::Convert::ToString(i));
			FontFamily^ fntFamily = gcnew FontFamily(L"Times New Roman");
			System::Drawing::Font^ fntWrite = gcnew System::Drawing::Font(fntFamily, 12.00F, FontStyle::Regular);
			b->FillEllipse(Brushes::DarkOrange, x, y, 25, 25);
			b->DrawString(wata, fntWrite, Brushes::Black, x+5, y+5);
			b->DrawEllipse(Pens::Black, x, y, 25, 25);

		}

	
		
		
		//g->DrawEllipse(gcnew Pen(Color::BlueViolet, 5), 250, 250, 200, 200);
		//g->FillRectangle(Brushes::Black, 100, 100, 1, 1);
		//g->FillRectangle(Brushes::Tomato, 110, 110, 1, 1);

		//g->DrawLine(p, pt1, pt2);
	}
	};

}
