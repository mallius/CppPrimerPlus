#include "cow.h"
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

Cow::Cow()
{
	strcpy(name, "nameless");
	hobby = new char[1];		
	hobby[0] = '\0';
	weight = 0.0;
}

Cow::Cow(const char *nm, const char * ho, double wt)
{
	int len = strlen(ho);

	strcpy(name, nm);

	hobby = new char[len + 1];
	strcpy(hobby, ho);

	weight = wt;
}

Cow::Cow(const Cow & c)
{
	int len = strlen(c.hobby);
	strcpy(name, c.name);
	weight = c.weight;

	hobby = new char [len+1];
	strcpy(hobby, c.hobby);
}

Cow::~Cow()
{
	delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	if(this==&c)
		return *this;
	delete [] hobby;
	int len = strlen(c.hobby);
	hobby = new char [len+1];
	strcpy(hobby, c.hobby);
	strcpy(name, c.name);
	weight = c.weight;
}

void Cow::ShowCow()const
{
	std::cout << "name: " << name << std::endl;
	std::cout << "hobby: " << hobby << std::endl;
	std::cout << "weight: " << weight << std::endl;
}
