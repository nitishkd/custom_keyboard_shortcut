#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int main()
{
	string searchkey;
	cout<<"enter keywords to search into";
	cin.clear();
	getline(cin,searchkey);
	cout<<searchkey;
	ShellExecute(NULL, "open", searchkey.c_str(),NULL, NULL, SW_SHOWNORMAL);
	system("PAUSE");
	return 0;


	
}
