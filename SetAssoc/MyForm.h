#pragma once
#include "Assoc.h"
namespace SetAssoc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label4;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Cache Size";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter Cache Block Size";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter The Degree of Associativity";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(208, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(42, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(208, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(42, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(208, 78);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(42, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Enter Memory Access";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(208, 173);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(42, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 227);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(133, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"ACC-TAG-INDEX-OFFSET";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(281, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 259);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Hit Rate";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(141, 259);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Total Hits";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(249, 259);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(66, 13);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Total Misses";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(80, 259);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(10, 13);
			this->label11->TabIndex = 16;
			this->label11->Text = L"-";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(199, 259);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(10, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"-";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(321, 259);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(10, 13);
			this->label13->TabIndex = 18;
			this->label13->Text = L"-";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(199, 227);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"00";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(224, 227);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(19, 13);
			this->label14->TabIndex = 20;
			this->label14->Text = L"00";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(274, 227);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(19, 13);
			this->label15->TabIndex = 21;
			this->label15->Text = L"00";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(249, 227);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(19, 13);
			this->label16->TabIndex = 22;
			this->label16->Text = L"00";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(299, 227);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(62, 13);
			this->label17->TabIndex = 23;
			this->label17->Text = L"[HIT/MISS]";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(240, 227);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(10, 13);
			this->label18->TabIndex = 24;
			this->label18->Text = L"-";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(264, 227);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(10, 13);
			this->label19->TabIndex = 25;
			this->label19->Text = L"-";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(215, 227);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(10, 13);
			this->label20->TabIndex = 26;
			this->label20->Text = L"-";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(193, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(151, 143);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(92, 13);
			this->label21->TabIndex = 28;
			this->label21->Text = L"Information Status";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(115, 259);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 13);
			this->label4->TabIndex = 29;
			this->label4->Text = L"%";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(368, 303);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Set Associative Cache";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		typedef unsigned int uint;
		static uint cacheSize, cacheBlockSize, nCacheBlocks, nCacheSets, nAccesses, nCurrentAccess, nWayAssociativity;
		static uint hit = 0;
		static uint miss = 0;
		static Cache **cache;
		static double result;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				static int count = 0;
				static int accesses = 0;
				String ^ in;			 
				// create cache
				CacheLine param, currentResult;
				// find OFFSET
				param.offset = Assoc::getN(cacheBlockSize);
				// find NUMBER OF CACHE BOCKS
				nCacheBlocks = cacheSize / cacheBlockSize;
				// find NUMBER OF CACHE SETS
				nCacheSets = nCacheBlocks / nWayAssociativity;
				// find CACHE INDEX
				param.index = Assoc::getN(nCacheSets);
				// find TAG
				param.tag = 32 - ( param.index + param.offset );
				if(count == 0)
				{
		
							cache = (Cache**)malloc((nCacheSets+1)*sizeof(Cache*)); // returns 40 bits - 8 x 5 
				//pointer to a pointer, cache now holds a pointer to 5 Cache pointers as we have 5 sets
	  
					count++;
				for(uint i = 0; i < nCacheSets; ++i) {
					cache[i] = (Cache*)malloc((nWayAssociativity+1)*sizeof(Cache)); // returns 36 - 3 x 12
						for(uint j = 0; j < nWayAssociativity; ++j) {
							cache[i][j].valid = false;	
						}
				}
				}

				accesses++;
				bool isHit;
				
				isHit = false;
					in = textBox5->Text;
					nCurrentAccess = System::Convert::ToInt16(in);
					Assoc::memAccess(param, nCurrentAccess, &currentResult);
					if( ( Assoc::cacheSetIsValid(cache, nWayAssociativity, currentResult) == true ) && ( Assoc::cacheSetTagMatch(cache, nWayAssociativity, currentResult) == true ) ) {
						isHit = true;
						++hit;
					} else {
						++miss;
						Assoc::insertIntoCache(cache, nWayAssociativity, currentResult);
					}
					
					in = System::Convert::ToString(currentResult.tag);
					label14->Text=in;
					in = System::Convert::ToString(currentResult.index);
					label16->Text=in;
					in = System::Convert::ToString(currentResult.offset);
					label15->Text=in;
					in = System::Convert::ToString((isHit ? "[HIT]":"[MISS]"));
					label17->Text=in;
				
				result = ( static_cast<double>(hit) / static_cast<double>(accesses) ) * 100;
				in = System::Convert::ToString(floor(result*100+0.5)/100);
				label11->Text=in;
				in = System::Convert::ToString(hit);
				label12->Text=in;
				in = System::Convert::ToString(miss);
				label13->Text=in;
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			
			String ^ in = textBox1->Text;
			cacheSize = System::Convert::ToInt16(in);
			in = textBox2->Text;
			cacheBlockSize = System::Convert::ToInt16(in);
			in = textBox3->Text;
			nWayAssociativity = System::Convert::ToInt16(in);
			in="Information Submitted";
			label21->Text=in;
		 }
};
}
