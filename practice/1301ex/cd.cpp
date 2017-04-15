#include "cd.h"
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

Cd::Cd(char *s1, char *s2, int n, double x)
{
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &cd)
{
	strcpy(performers, cd.performers);
	strcpy(label, cd.label);
	selections = cd.selections;
	playtime = cd.playtime;
}

Cd::Cd()
{
	strcpy(performers, "NullPerformers");
	strcpy(label, "NullLabel");
	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{

}

void Cd::Report()const
{
	cout << "performers: " << performers << endl;
	cout << "label: " << label << endl;
	cout << "selections: " << selections << endl;
	cout << "playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & cd)
{
	strcpy(performers, cd.performers);
	strcpy(label, cd.label);
	selections = cd.selections;
	playtime = cd.playtime;
}

// 派生类
Classic::Classic(char *d, char *s1, char *s2, int n, double x)
	: Cd(s1, s2, n, x)
{
	strcpy(desc, d);	
}

Classic::Classic(char *d, const Cd & c)
	: Cd(c)
{
	strcpy(desc, d);	
}

Classic::Classic()
{

}

void Classic::Report()const
{
	Cd::Report();
	cout << "Desc: " << desc << endl;	
}

Classic & Classic::operator=(const Classic & c)
{
	Cd::operator=(c);  // 使用基类的赋值操作符
	strcpy(desc, c.desc);
}
