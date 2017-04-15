#include <iostream>
using namespace std;

int main(void)
{
	double pound;
	double feet;
	double inch;
	const double FEET_TO_INCH = 12;
	const double INCH_TO_METRER = 0.0254;
	const double POUND_TO_KG = 2.2;
	
	cout << "feet: ";
	cin >> feet;
	cout << "inch: ";
	cin >> inch;
	cout << "Pound: ";
	cin >> pound;

	double height = feet * FEET_TO_INCH + inch * INCH_TO_METRER;
	pound = pound / POUND_TO_KG;
	cout << "BMI: " << pound / (height * height) << endl;

	return 0;
}
