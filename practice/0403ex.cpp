#include <iostream>
using namespace std;

int main(void)
{
	char firstname[20];
	char lastname[20];

	cout << "first name: ";
	cin.getline(firstname, 20);
	cout << "last name: ";
	cin.getline(lastname, 20);

	cout << "string: " << lastname << ", " << firstname << endl;

	return 0;
}
