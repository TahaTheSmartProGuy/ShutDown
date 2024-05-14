#include <windows.h>
#include <tchar.h>
#include <ctime>
#include <iostream>
#include <sstream>
#pragma comment(lib, "winmm.lib")
#pragma comment(lib,"Msimg32.lib")
#include <math.h>
#include <cmath>
#include <time.h>

int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	if (MessageBoxW(NULL, L"Run ShutDown?", L"Warning! - ShutDown.exe By Kapi2.5Peys", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
	{
		ExitProcess(0);
	}
	else
	{
		if (MessageBoxW(NULL, L"Are You Sure? it Will ShutDown Your Computer Continue?", L"Last Warning! - ShutDown.exe By Kapi2.5Peys", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
		{
			ExitProcess(0);
		}
		else
		{
			Sleep(2500);
			HANDLE thread1 = CreateThread(0, 0, 0, 0, 0, 0);
			TerminateThread(thread1, 0);
			system("shutdown /s /t 100");
			CloseHandle(thread1);
		}
	}
}