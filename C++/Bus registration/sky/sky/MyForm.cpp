#include "MyForm.h"
#include "admin.h"
#include "Admin1.h"
#include "guest.h"
#include "adbus.h"
#include "loginguest.h"
#include "checkInfo.h"
#include "changepass.h"
#include "modified.h"
#include "bus.h"
#include "busstatus.h"
#include "pay.h"
#include "statistic.h"
#include "ChangeInfo.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	sky::MyForm form;
	Application::Run(%form);
}