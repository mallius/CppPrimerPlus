#include <iostream>
using namespace std;

double distence(double light)
{
	return 63240 * light;
}

int main(void)
{
	double light;
	cout << "Enter the number of light years: ";
	cin >> light;
	cout << light << " light years = " << distence(light) << " astronomical units." << endl;

	return 0;
}
