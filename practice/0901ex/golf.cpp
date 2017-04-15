#include "./golf.h"
#include <iostream>
#include <cstring>



void setgolf(golf & g, const char *name, int hc)
{
	g.handicap = hc;
	strncpy(g.fullname, name, Len);
}

int setgolf(golf & g)
{
	strcpy(g.fullname, "nameless");
	g.handicap = 0;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	std::cout << "Fullname:" << g.fullname << std::endl;
	std::cout<<"Handicap:"<<g.handicap << std::endl;
}

int main(void)
{
	golf ann;
	setgolf(ann, "Ann Birdfree", 24);
	showgolf(ann);
	golf andy;
	setgolf(andy);
	showgolf(andy);
}
