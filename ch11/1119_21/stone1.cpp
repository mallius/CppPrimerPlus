#include <iostream>
#include "stonewt1.h"

int main(void)
{
	using std::cout;
	Stonewt poppins(9, 2.8);
	double p_wt = poppins;
	cout << "Convert to double ==> ";
	cout << "Poppins: " << p_wt << " pounds.\n";
	cout << "Convert to int ==> ";
	cout << "Popins: " << int(poppins) << " pounds.\n";

	return 0;
}

