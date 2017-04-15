#include <iostream>
using namespace std;

int main(void)
{
	double degree, minute, second;
	const double MIN_TO_DEGREE = 60;
	const double SEC_TO_DEGREE = 60*60;

	cout << "degree: ";
	cin >> degree;
	cout << "minute: ";
	cin >> minute;
	cout << "second: ";
	cin >> second;

	cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << 
		degree+minute / MIN_TO_DEGREE + second / SEC_TO_DEGREE << "degree";
	cout << endl;
	return 0;
}
