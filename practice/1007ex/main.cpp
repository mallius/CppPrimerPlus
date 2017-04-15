#include "plorg.h"
#include <iostream>

using namespace std;

int main(void)
{
	Plorg pg("Name");
	pg.ShowCi();
	pg.SetCi(100);
	pg.ShowCi();
	return 0;
}

