#include "acct.h"
#include <iostream>

int main(void)
{
	Acct acct("John", "12345", 100.01);
	acct.show();
	acct.in(100);
	acct.show();
	acct.out(50);
	acct.show();
	acct.out(1000);
}
