#include <iostream>
#include <string>
using namespace std;
int  strcount(string str)
{
	cout << "\"" << str << "\" contains " << str.size() << endl;

	return 0;
}

int main(void)
{
	string input;
	cout << "Enter a line:\n";
	cin >> input;
	while(input.compare("") > 0)
	{

		strcount(input);
		cout << "Enter next line (empty line to quit): \n";
		cin >> input;
	}
	cout << "Bye\n";
	return 0;
}

