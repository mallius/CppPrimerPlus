#include "golf.h"
#include <iostream>
#include <cstring>

void Golf::SetGolf(const char *name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}


void Golf::HandiCap(int hc)
{
	handicap = hc;
}

void Golf::ShowGolf(void)const
{
	std::cout << "Fullname:" << fullname << std::endl;
	std::cout<<"Handicap:"<< handicap << std::endl;
}

int main(void)
{
	Golf ann;
	ann.SetGolf("Ann Birdfree", 24);
	ann.ShowGolf();

	Golf andy;
	andy.SetGolf();
	andy.ShowGolf();

	return 0;
}
