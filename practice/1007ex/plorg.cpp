#include "plorg.h"
#include <iostream>

using namespace std;


Plorg::Plorg(const char *pname, int pci)
{
	if(pname == NULL)
	{
		strcpy(name, pname);
	}
	else
	{
		strcpy(name, "Plorga");
	}
	ci = pci;	
}
void Plorg::SetCi(int pci)
{
	ci = pci;	
}
void Plorg::ShowCi()const
{
	cout << "ci:" << ci << endl;
}
