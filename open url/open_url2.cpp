#include<iostream>
#include <windows.h>
#include<string>
using namespace std;

int main()
{
string szWebSiteExecute;
string szwebsiteName;
string szhttp;
string szwww;
string szcom;
szhttp = "http://";
szwww = "www.";
szcom = ".com";
cout << "What website do you want to open?" <<endl;
cin.clear();
getline(cin,szwebsiteName);
szWebSiteExecute = szhttp + szwww + szwebsiteName + szcom;

cout << szWebSiteExecute;

ShellExecute(NULL, "open", szWebSiteExecute.c_str(),NULL, NULL, SW_SHOWNORMAL);


system("pause");
return 0;

}
