#include<iostream>
#include <windows.h>
#include<string>
using namespace std;

int main()
{
string szWebSiteExecute;  // sz for good practice. Knows instantly that its a string.
// ^^ szwebstieName + szhttp;
string szwebsiteName;
string szhttp;
szhttp = "http://";
cout << "What website do you want to open?" <<endl;
cin.clear();
getline(cin,szwebsiteName);
szWebSiteExecute = szhttp + szwebsiteName;

cout << szWebSiteExecute;

ShellExecute(NULL, "open", szWebSiteExecute.c_str(),NULL, NULL, SW_SHOWNORMAL);


system("pause");
return 0;

}
