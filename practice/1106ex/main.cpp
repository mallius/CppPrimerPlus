#include <iostream>
#include "stonewt.h"
using std::cout;
using std::endl;


int main(void)
{
	Stonewt st1(287.5);
	Stonewt st2(1, 1);
	Stonewt st3(1, 1);

	cout << "st1 > st2 ? : " << (st1>st2) << endl;;
	cout << "st1 < st2 ? : " << (st1<st2) << endl;;
	cout << "st1 >= st2 ? : " << (st1>=st2) << endl;;
	cout << "st1 <= st2 ? : " << (st1<=st2) << endl;;
	
	cout << "st2 == st3 ? : " << (st2==st3) << endl;
	cout << "st2 != st3 ? : " << (st2!=st3) << endl;

	return 0;
}

