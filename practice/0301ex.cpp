#include <iostream>
using namespace std;

int main(void)
{
	int height;
	const double INCH = 0.0254;

	cout << "Enter you height:____ inch\b\b\b\b\b\b\b\b";
	cin >> height;
	cout << height * INCH << endl;
}
