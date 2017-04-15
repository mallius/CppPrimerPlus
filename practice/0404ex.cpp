#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string firstname;
	string lastname;

	cout << "first name: ";
	getline(cin, firstname);

	cout << "last name: ";
	cin >> lastname;

	cout << "string: " << lastname << ", " << firstname << endl;

	return 0;
}
