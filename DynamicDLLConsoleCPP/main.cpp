#include <Windows.h>
#include <tchar.h>
#include <conio.h>
#include <iostream>

using namespace std;

//typedef char* (*PFN_SayHello)();
typedef char* (*PFN_SayHello)(char*);

int main()
{
	HINSTANCE hDynamicDLL;

	//if ((hDynamicDLL = LoadLibrary(TEXT("DynamicDLL"))) == NULL)
	if ((hDynamicDLL = LoadLibrary(TEXT("CipherAtbashDLL"))) == NULL)
	{
		
	}
	else
	{
		PFN_SayHello pfn_SayHello;
		//pfn_SayHello = (PFN_SayHello)GetProcAddress(hDynamicDLL, "SayHello");
		pfn_SayHello = (PFN_SayHello)GetProcAddress(hDynamicDLL, "function");
		//cout << (*pfn_SayHello)() << endl;
		cout<<(*pfn_SayHello)("hello")<<endl;
	}


	_getch();
	return 0;
}