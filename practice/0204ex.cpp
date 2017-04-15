#include <iostream>
using namespace std;

double ctof(double c)
{
	return 1.8 * c + 32.0;
}

int main(void)
{
	double cel;
	cout << "Please enter a Celsius value: ";
	cin >> cel;
	cout << cel << " degrees Celsius is " << ctof(cel) << " degrees Fahrenheit." << endl;

	return 0;
}
