#include "MyForm.h"
#include "Assoc.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SetAssoc::MyForm form;
	Application::Run(%form);
}