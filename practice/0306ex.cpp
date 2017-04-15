#include <iostream>
using namespace std;

int main(void)
{

	double mile, gal;
	double km, L;

	cout << "?L/100km: ";
	cin >> L;
	
	gal  = L / 3.875;
	mile = 62.14;

	cout << "1gal/" << mile/gal << "miles" << endl;	
	return 0;
}
