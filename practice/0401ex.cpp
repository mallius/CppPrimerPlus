#include <iostream>
using namespace std;

int main(void)
{
	const int LEN = 20;
	char firstName[LEN];
	char lastName[LEN];
	char valGrade;
	unsigned int age;

	cout << "What is your first name? ";
	cin.getline(firstName, LEN);
	cout << "What is your last name? ";
	cin.getline(lastName, LEN);
	cout << "What is your grade to deserver? ";
	cin >> valGrade;
	cout << "Age: ";
	cin >> age;

	cout << "Name: " << lastName << ", " << firstName << endl;
	cout << "Grade: " << char(valGrade - 1) << endl;
	cout << "Age: " << age << endl;

	return 0;
}
