#include "move.h"
#include <iostream>

using namespace std;

int main(void)
{
	Move m1;	
	Move m2(1.0, 2.0);
	m1.showmove();
	m2.showmove();

	m1 = m1.add(m2);
	m1.showmove();

	m1.reset(1.0, 5.0);
	m1.showmove();

	return 0;
}

