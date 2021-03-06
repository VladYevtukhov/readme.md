#include "StdAfx.h"
#include "Result.h"
#include "MyMenu.h"

namespace SpeedTest {
	System::Void Result::Result_Load(System::Object^  sender, System::EventArgs^  e)
			 {
				 timer1->Start();
			 }
	System::Void Result::button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 exit(0);
		 }
	System::Void Result::button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 MyMenu ^ mm = gcnew MyMenu();
			 mm->Show();
			 mm->textBox1->Text=this->textBox1->Text;
			 mm->textBox2->Text=this->textBox2->Text;
			 this->Close();
		 }
	System::Void Result::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
		 {
			 timer1->Stop();
			 r = r + 0.05;
			 this->Opacity=r;
			 timer1->Start();
			 if (r==1) timer1->Stop();
		 }
}