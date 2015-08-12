#include<iostream>
#include<windows.h>
#include<winuser.h>
using namespace std;
void Stealth();
int main()
{
	Stealth();
	string szWebSiteExecute="https://www.facebook.com/nitish.dwivedi.2195";
	string szWebSiteExecutegmail="https://mail.google.com/mail";
	string szWebSiteExecutestack="http://stackoverflow.com/users/4452804/nitish-dwivedi";
	while(true)
	{
		
		if (GetAsyncKeyState(0x4E))
			{
				Sleep(500);
				if (GetAsyncKeyState(0x49))
				{
					Sleep(500);
					if (GetAsyncKeyState(0x54))
					{
						Sleep(500);
						if (GetAsyncKeyState(0x49))
						{
	
							Sleep(500);
							if (GetAsyncKeyState(0x53))
							{
								Sleep(500);
								if (GetAsyncKeyState(0x48))
	
								{ShellExecute(NULL, "open", szWebSiteExecute.c_str(),NULL, NULL, SW_SHOWNORMAL);
	
								}
							}	
						}
					}	
				}	
			}
		if(GetAsyncKeyState(0x4D))
		{
			Sleep(500);
			if(GetAsyncKeyState(0x55))
			{
				Sleep(500);
				if(GetAsyncKeyState(0x53))
				{
					Sleep(500);
					if(GetAsyncKeyState(0x49))
					{
						Sleep(500);
						if(GetAsyncKeyState(0x43))
						{
							ShellExecute(NULL, "open", "C:\\Program Files\\Windows Media Player\\wmplayer.exe", NULL, NULL, SW_SHOWDEFAULT);
						}
					}
				}
			}
		}

		if (GetAsyncKeyState(0x43))
		{
			Sleep(500);
			if(GetAsyncKeyState(0x4D))
			{
				Sleep(500);
				if(GetAsyncKeyState(0x44))
				{
					ShellExecute(NULL, "open", "C:\\Windows\\System32\\cmd.exe", NULL, NULL, SW_SHOWDEFAULT);
				}
			}
		}
			
	if (GetAsyncKeyState(0x47))
	{
		Sleep(500);
		if (GetAsyncKeyState(0x4D))
		{
			Sleep(500);
			if (GetAsyncKeyState(0x41))
			{
				Sleep(500);
				if (GetAsyncKeyState(0x49))
				{
					Sleep(500);
					if (GetAsyncKeyState(0x4C))
					{
						ShellExecute(NULL, "open", szWebSiteExecutegmail.c_str(),NULL, NULL, SW_SHOWNORMAL);
					}
				}
			}
		}
	}
	if (GetAsyncKeyState(0x53))
	{
		Sleep(500);
		if (GetAsyncKeyState(0x54))
		{
			Sleep(500);
			if (GetAsyncKeyState(0x41))
			{
				Sleep(500);
				if (GetAsyncKeyState(0x43))
				{
					Sleep(500);
					if (GetAsyncKeyState(0x4B))
					{
						ShellExecute(NULL, "open", szWebSiteExecutestack.c_str(),NULL, NULL, SW_SHOWNORMAL);
					}
				}
			}
		}
	}
	if (GetAsyncKeyState(0x45))
	{
		Sleep(500);
		if (GetAsyncKeyState(0x58))
		{
			Sleep(500);
			if (GetAsyncKeyState(0x49))
			{
				Sleep(500);
				if (GetAsyncKeyState(0x54))
				{
					system("TASKKILL /IM Keyboard_shortcut.exe /f");
				}
			}
		}
	}
	}
return 0;
}
void Stealth()
{
HWND Stealth;
AllocConsole();
Stealth = FindWindowA("ConsoleWindowClass", NULL);
ShowWindow(Stealth,0);
}

