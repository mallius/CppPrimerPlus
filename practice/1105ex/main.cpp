#include <iostream>
using std::cout;
#include "stonewt.h"


int main(void)
{
	Stonewt wolfe(285.7);
	cout << "wolfe: " << wolfe;

	Stonewt weight2(1, 1);
	cout << "weight2: " << weight2;

	cout << "Add: " << wolfe + weight2;
	cout << "Minus: " << wolfe - weight2;

	cout << "Multi*2: " << weight2*2;
	//cout << "2*Multi: " << 2*weight2;

	return 0;
}

