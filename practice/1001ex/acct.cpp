#include <iostream>
#include <cstring>
#include "acct.h"
using namespace std;

Acct::Acct()
{
	strcpy(name, "Cust");		
	strcpy(acctno, "000000");
	bal = 0.0;
}

Acct::Acct(char *nameval, char *acctnoval, double balval)
{
	strcpy(name, nameval);	
	strcpy(acctno, acctnoval);
	bal = balval;
}

Acct::~Acct()
{

}

void Acct::show()const
{
	cout << name << endl;
	cout << acctno << endl;
	cout << bal << endl;
}

void Acct::in(double m)
{
	bal += m;
}

void Acct::out(double m)
{
	if(bal < 0)
	{
		cerr << "bal is less than 0" << endl;
	}
	else if(bal < m)
	{
		cerr << "bal is no enought" << endl;
	}
	else
	{
		bal -= m;
	}
}
