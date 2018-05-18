#pragma once
#include "VCView.h"
#include "GraphicSnake.h"
#include "Way.h"

namespace vcworm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Form1
	///
	/// ��������! ��� ��������� ����� ����� ������ ���������� ����� ��������
	///          �������� ����� ����� �������� ("Resource File Name") ��� �������� ���������� ������������ �������,
	///          ���������� �� ����� ������� � ����������� .resx, �� ������� ������� ������ �����. � ��������� ������,
	///          ������������ �� ������ ��������� �������� � ���������������
	///          ���������, ��������������� ������ �����.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(SNAKE_MODEL::VCView * _view)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			m_view = _view;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  buttonQuit;
	private: System::Windows::Forms::Button^  buttonStart;
	private: System::Windows::Forms::Label^  labelScore;


	private:
		/// <summary>
		SNAKE_MODEL::VCView * m_view;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::ComponentModel::IContainer^  components;
			 /// ��������� ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonQuit = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 12);
			this->label1->Margin = System::Windows::Forms::Padding(3, 10, 3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SCORE";
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->Controls->Add(this->buttonQuit);
			this->panel1->Controls->Add(this->buttonStart);
			this->panel1->Controls->Add(this->labelScore);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(322, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(94, 317);
			this->panel1->TabIndex = 1;
			// 
			// buttonQuit
			// 
			this->buttonQuit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonQuit->Location = System::Drawing::Point(16, 98);
			this->buttonQuit->Name = L"buttonQuit";
			this->buttonQuit->Size = System::Drawing::Size(75, 23);
			this->buttonQuit->TabIndex = 4;
			this->buttonQuit->Text = L"Quit";
			this->buttonQuit->UseVisualStyleBackColor = true;
			this->buttonQuit->Click += gcnew System::EventHandler(this, &Form1::buttonQuit_Click);
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(16, 69);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(75, 23);
			this->buttonStart->TabIndex = 3;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &Form1::buttonStart_Click);
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelScore->Location = System::Drawing::Point(52, 34);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(19, 20);
			this->labelScore->TabIndex = 2;
			this->labelScore->Text = L"0";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(322, 317);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			this->pictureBox1->SizeChanged += gcnew System::EventHandler(this, &Form1::pictureBox1_SizeChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->buttonQuit;
			this->ClientSize = System::Drawing::Size(416, 317);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->KeyPreview = true;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonQuit_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e) {
				timer1->Enabled = false;
				m_view->start();
				labelScore->Text = "" + m_view->getSnake()->size();
				timer1->Enabled = true;
			}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				timer1->Enabled = false;
				m_view->nextStep();
				labelScore->Text = "" + m_view->getSnake()->size();
				pictureBox1->Invalidate();
				if (!m_view->isPause())
					timer1->Enabled = true;
				}
private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 switch (e->KeyChar) {
//				 case Keys::Left:
				 case '4':
					 m_view->changeWay(SNAKE_MODEL::Way::LEFT);
					e->Handled = true;
					break;
//				 case Keys::Right:
				 case '6':
					 m_view->changeWay(SNAKE_MODEL::Way::RIGHT);
					e->Handled = true;
					break;
//				 case Keys::Up:
				 case '8':
					 m_view->changeWay(SNAKE_MODEL::Way::UP);
					e->Handled = true;
					break;
//				 case Keys::Down:
				 case '2':
					 m_view->changeWay(SNAKE_MODEL::Way::DOWN);
					e->Handled = true;
					break;
			 }
		 }
private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			SNAKE_MODEL::GraphicSnake * snake = m_view->getSnake();
			SNAKE_MODEL::RabbitFactory * rabbits = m_view->getRabbitFactory();
			Graphics^ g = e->Graphics;

			const int bh = m_view->getHieghtField();
			const int bw = m_view->getWidthField();
			int h = pictureBox1->Height/bh;
			int w = pictureBox1->Width/bw;

			if (h < w) 
				w = h;
			else 
				h = w;

			SolidBrush^ blueBrush = gcnew SolidBrush( Color::Blue );
			SolidBrush^ greenBrush = gcnew SolidBrush( Color::Green );
			SolidBrush^ redBrush = gcnew SolidBrush( Color::Red );
			SolidBrush^ yellowBrush = gcnew SolidBrush( Color::Yellow );

			g->Clear(System::Drawing::SystemColors::Control);
			g->FillRectangle(gcnew SolidBrush(System::Drawing::SystemColors::ControlDark),
				0, 0, w * bw, h * bh);

			Pen^ blackPen = gcnew Pen( Color::Black,3.0f );
//				g->DrawLine( System::Drawing::Pens::Red,0,0,10,10);
			for (std::vector<SNAKE_MODEL::GraphicPoint>::iterator iter = snake->begin(); iter != snake->end(); iter++) {
	            SolidBrush^ color = (iter - snake->begin()) % 5 == 3 ? yellowBrush: redBrush;
		        drawSnake(g, &*iter, w, h, color);
			}

			for (std::vector<SNAKE_MODEL::Rabbit>::iterator iter = rabbits->begin(); iter != rabbits->end(); iter++) {
				Rectangle rect = Rectangle(iter->getX()*w + 1, iter->getY()*h + 1, w - 2, h - 2);
				g->FillRectangle(greenBrush, rect);
			}

		 }
private: System::Void pictureBox1_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
			pictureBox1->Invalidate();
		 }

private: void drawSnake(Graphics^ g, SNAKE_MODEL::GraphicPoint *point, int w, int h, SolidBrush^ brush) {
    Rectangle body1(point->getX() * w, point->getY() * h, w, h);

    int ddx = w / 5, ddx2 = ddx + ddx;
    int ddy = h / 5, ddy2 = ddy + ddy;

    switch (point->getType()) {
    case SNAKE_MODEL::GraphicPoint::HEAD:
        g->FillRectangle(brush, body1);
        return;

    case SNAKE_MODEL::GraphicPoint::HORISONTAL:
		body1.Y += ddy * point->getPosition();
		body1.Height = w - ddy2;
        g->FillRectangle(brush, body1);
        return;

    case SNAKE_MODEL::GraphicPoint::VERTICAL:
		body1.X += ddx * point->getPosition();
		body1.Width = h - ddx2;
        g->FillRectangle(brush, body1);
        break;

    case SNAKE_MODEL::GraphicPoint::CORNER:
		body1.Width = h - ddx2;
		body1.Height = w - ddy2;
        if (point->getPosition()) {
			Rectangle body2 = body1;
			body2.X += point->getToLeft() ? 0 : ddx2;
			body2.Y += ddy;
			g->FillRectangle(brush, body2);

			body1.X += ddx; 
			body1.Y += point->getToUp() ? 0:ddy2;
		
			g->FillRectangle(brush, body1);
		} else {
			body1.X += point->getToLeft() ? 0 : ddx2;
			body1.Y += point->getToUp() ? 0 : ddy2;
			g->FillRectangle(brush, body1);
		}
    }
	}

};
}

