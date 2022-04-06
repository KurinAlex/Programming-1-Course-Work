#include <Windows.h>

#include "MyForm.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	System::Windows::Forms::Application::Run(gcnew Programming1CourseWork::MyForm);
	return 0;
}