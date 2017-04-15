#include <iostream>
#include "person.h"
#include <cstring>

Person::Person(const string & ln, const char * fn)
{
	lname = ln;
	strcpy(fname, fn);
}

void Person::Show()const
{
	using namespace std;
	cout << fname << " " << lname << endl;
}

void Person::FormalShow() const
{
	using namespace std;
	cout << lname << "," << fname << endl;
}
