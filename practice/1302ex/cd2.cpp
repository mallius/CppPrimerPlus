#include "cd2.h"
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

Cd::Cd(char *s1, char *s2, int n, double x)
{

	performers = new char [strlen(s1)+1];
	strcpy(performers, s1);

	label = new char [strlen(s2)+1];
	strcpy(label, s2);

	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &cd)
{
	performers = new char [strlen(cd.performers)+1];
	strcpy(performers, cd.performers);

	label = new char [strlen(cd.label)+1];
	strcpy(label, cd.label);

	selections = cd.selections;
	playtime = cd.playtime;
}

Cd::Cd()
{
	performers = new char[1];
	performers[0] = '\0';
	label = new char [1];
	label[0] = '\0';

	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{
	delete [] performers;
	delete [] label;
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
	delete [] performers;
	delete [] label;

	performers = new char [strlen(cd.performers)+1];
	label = new char [strlen(cd.label)+1];

	strcpy(performers, cd.performers);
	strcpy(label, cd.label);
	selections = cd.selections;
	playtime = cd.playtime;
}

// 派生类
Classic::Classic(char *d, char *s1, char *s2, int n, double x)
	: Cd(s1, s2, n, x)
{
	desc = new char [strlen(d)+1];
	strcpy(desc, d);	
}

Classic::Classic(char *d, const Cd & c)
	: Cd(c)
{
	desc = new char [strlen(d)+1];
	strcpy(desc, d);	
}

Classic::Classic()
{
	desc = new char[1];
	Cd::Cd();
}

Classic::~Classic()
{
	 // delete [] desc;  这个2行不能有，会段错误
	 // Cd::~Cd();	
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
