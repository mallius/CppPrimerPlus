#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string firstname;
	string lastname;
	char valGrade;
	unsigned int age;

	cout << "What is your first name? ";
	/* '\n' */
	getline(cin, firstname);

	cout << "What is your last name? ";
	cin >> lastname;
	cout << "What is your grade to deserver? ";
	cin >> valGrade;
	cout << "Age: ";
	cin >> age;

	cout << "Name: " << lastname << ", " << firstname << endl;
	cout << "Grade: " << char(valGrade - 1) << endl;
	cout << "Age: " << age << endl;

	return 0;
}
