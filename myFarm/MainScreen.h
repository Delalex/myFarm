#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ text_animal;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ text_type;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ text_variety;
	private: System::Windows::Forms::TreeView^ database;


	private: System::Windows::Forms::TextBox^ text_class;
	private: System::Windows::Forms::TextBox^ text_food;
	private: System::Windows::Forms::TextBox^ text_accounting_card;
	private: System::Windows::Forms::TextBox^ text_owner;






	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::Button^ button_clear_fields;
	private: System::Windows::Forms::Button^ button_delete;
	private: System::Windows::Forms::Label^ animal_cnt;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->text_animal = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->text_type = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->text_variety = (gcnew System::Windows::Forms::TextBox());
			this->database = (gcnew System::Windows::Forms::TreeView());
			this->text_class = (gcnew System::Windows::Forms::TextBox());
			this->text_food = (gcnew System::Windows::Forms::TextBox());
			this->text_accounting_card = (gcnew System::Windows::Forms::TextBox());
			this->text_owner = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_clear_fields = (gcnew System::Windows::Forms::Button());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->animal_cnt = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// text_animal
			// 
			this->text_animal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->text_animal->Location = System::Drawing::Point(165, 6);
			this->text_animal->Margin = System::Windows::Forms::Padding(6);
			this->text_animal->Name = L"text_animal";
			this->text_animal->Size = System::Drawing::Size(334, 33);
			this->text_animal->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 9);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Животное:";
			// 
			// text_type
			// 
			this->text_type->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->text_type->Location = System::Drawing::Point(165, 51);
			this->text_type->Margin = System::Windows::Forms::Padding(6);
			this->text_type->Name = L"text_type";
			this->text_type->Size = System::Drawing::Size(334, 33);
			this->text_type->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(105, 54);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Вид:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(70, 99);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Порода:";
			// 
			// text_variety
			// 
			this->text_variety->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->text_variety->Location = System::Drawing::Point(165, 96);
			this->text_variety->Margin = System::Windows::Forms::Padding(6);
			this->text_variety->Name = L"text_variety";
			this->text_variety->Size = System::Drawing::Size(334, 33);
			this->text_variety->TabIndex = 5;
			// 
			// database
			// 
			this->database->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->database->Location = System::Drawing::Point(508, 38);
			this->database->Name = L"database";
			this->database->Size = System::Drawing::Size(435, 433);
			this->database->TabIndex = 6;
			// 
			// text_class
			// 
			this->text_class->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->text_class->Location = System::Drawing::Point(165, 141);
			this->text_class->Margin = System::Windows::Forms::Padding(6);
			this->text_class->Name = L"text_class";
			this->text_class->Size = System::Drawing::Size(334, 33);
			this->text_class->TabIndex = 7;
			// 
			// text_food
			// 
			this->text_food->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->text_food->Location = System::Drawing::Point(165, 186);
			this->text_food->Margin = System::Windows::Forms::Padding(6);
			this->text_food->Name = L"text_food";
			this->text_food->Size = System::Drawing::Size(334, 33);
			this->text_food->TabIndex = 8;
			// 
			// text_accounting_card
			// 
			this->text_accounting_card->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->text_accounting_card->Location = System::Drawing::Point(165, 231);
			this->text_accounting_card->Margin = System::Windows::Forms::Padding(6);
			this->text_accounting_card->Name = L"text_accounting_card";
			this->text_accounting_card->Size = System::Drawing::Size(334, 33);
			this->text_accounting_card->TabIndex = 9;
			// 
			// text_owner
			// 
			this->text_owner->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->text_owner->Location = System::Drawing::Point(165, 276);
			this->text_owner->Margin = System::Windows::Forms::Padding(6);
			this->text_owner->Name = L"text_owner";
			this->text_owner->Size = System::Drawing::Size(334, 33);
			this->text_owner->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(88, 144);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 25);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Класс:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(91, 189);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 25);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Корм:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(55, 279);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 25);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Владелец:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 234);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 25);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Карточка учета:";
			// 
			// button_add
			// 
			this->button_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_add->Location = System::Drawing::Point(13, 326);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(227, 34);
			this->button_add->TabIndex = 15;
			this->button_add->Text = L"Добавить";
			this->button_add->UseVisualStyleBackColor = false;
			this->button_add->Click += gcnew System::EventHandler(this, &Form1::button_add_Click);
			// 
			// button_clear_fields
			// 
			this->button_clear_fields->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_clear_fields->Location = System::Drawing::Point(13, 366);
			this->button_clear_fields->Name = L"button_clear_fields";
			this->button_clear_fields->Size = System::Drawing::Size(227, 34);
			this->button_clear_fields->TabIndex = 16;
			this->button_clear_fields->Text = L"Очистить форму";
			this->button_clear_fields->UseVisualStyleBackColor = false;
			this->button_clear_fields->Click += gcnew System::EventHandler(this, &Form1::button_clear_fields_Click);
			// 
			// button_delete
			// 
			this->button_delete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_delete->Location = System::Drawing::Point(13, 406);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(227, 34);
			this->button_delete->TabIndex = 17;
			this->button_delete->Text = L"Удалить выделенное";
			this->button_delete->UseVisualStyleBackColor = false;
			this->button_delete->Click += gcnew System::EventHandler(this, &Form1::button_delete_Click);
			// 
			// animal_cnt
			// 
			this->animal_cnt->AutoSize = true;
			this->animal_cnt->Location = System::Drawing::Point(511, 10);
			this->animal_cnt->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->animal_cnt->Name = L"animal_cnt";
			this->animal_cnt->Size = System::Drawing::Size(171, 25);
			this->animal_cnt->TabIndex = 18;
			this->animal_cnt->Text = L"Всего животных: 0";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(955, 483);
			this->Controls->Add(this->animal_cnt);
			this->Controls->Add(this->button_delete);
			this->Controls->Add(this->button_clear_fields);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->text_owner);
			this->Controls->Add(this->text_accounting_card);
			this->Controls->Add(this->text_food);
			this->Controls->Add(this->text_class);
			this->Controls->Add(this->database);
			this->Controls->Add(this->text_variety);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->text_type);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->text_animal);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"myFarm";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	System::Int32 animal_count = 0;

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
	private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		TreeNode^ animal = gcnew TreeNode(text_animal->Text);
		animal->Tag = "animal";
		database->Nodes->Add(animal);
		TreeNode^ type = gcnew TreeNode("Вид: " + text_type->Text);
		animal->Nodes->Add(type);
		TreeNode^ variety = gcnew TreeNode("Порода: " + text_variety->Text);
		animal->Nodes->Add(variety);
		TreeNode^ classification = gcnew TreeNode("Класс: " + text_class->Text);
		animal->Nodes->Add(classification);
		TreeNode^ food = gcnew TreeNode("Корм: " + text_food->Text);
		animal->Nodes->Add(food);
		TreeNode^ card = gcnew TreeNode("Карточка учета: " + text_accounting_card->Text);
		animal->Nodes->Add(card);
		TreeNode^ owner = gcnew TreeNode("Владелец: " + text_owner->Text);
		animal->Nodes->Add(owner);

		animal_count++;
		animal_cnt->Text = ("Всего животных: " + animal_count);
	}
	private: System::Void button_clear_fields_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		text_animal->Text = "";
		text_type->Text = "";
		text_variety->Text = "";
		text_class->Text = "";
		text_food->Text = "";
		text_accounting_card->Text = "";
		text_owner->Text = "";
	}
	private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (database->SelectedNode->Tag == "animal")
		{
			database->Nodes->Remove(database->SelectedNode);
			animal_count--;
			animal_cnt->Text = ("Всего животных: " + animal_count);
		}
	}

};
}
