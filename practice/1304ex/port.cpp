#include "Port.h"
#include <string>
#include <iostream>

// 基类
Port::Port(const char *br, const char * st, int b)
{
	if(0==strcmp(br, "none"))	
	{
		brand = new char[4+1];
		strcpy(brand, "none");
	}
	else
	{
		int len = strlen(br);
		brand = new char[len+1];
		strcpy(brand, br);
	}
	strncpy(style, st, 19);
	bottles = b;
}

Port::Port(const Port & p)		// copy constructor
{
	int n = strlen(p.brand);
	brand = new char[n+1];
	strncpy(brand, p.brand, n);
	strncpy(style, p.style, 19);
	bottles = p.bottles;
}


Port & Port::operator=(const Port & p)
{
	int n = strlen(p.brand);
	brand = new char[n+1];
	strncpy(brand, p.brand, n);
	strncpy(style, p.style, 19);
	bottles = p.bottles;
	
	return *this;
}

Port & Port::operator+=(int b)   // adds b to bottles
{
	bottles+=b;
	return *this;
}

Port & Port::operator-=(int b)   // subtracts b from bottles, if available
{
	bottles-=b;
	return *this;
}


void Port::Show()const
{
	cout << "Brand: " << brand << std::endl;
	cout << "Kind: " << style << std::endl;
	cout << "Bottles: " << bottles << std::endl;	
}

ostream & operator<<(ostream &os, const Port &p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles << std::endl;
}


// 派生类 


VintagePort::VintagePort()
{
	// Port::Port();
	nickname = new char[4+1];
	strcpy(nickname, "none");
	year = 0;
}

VintagePort::VintagePort(const char * br, int b, const char * nm, int y) : Port(br, " ", b)
{
	int n = strlen(nickname);
	nickname = new char[n+1];
	strncpy(nickname, nm, n);
	year = y;
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
	if(NULL == vp.nickname)
	{
		nickname = NULL;
	}
	else
	{
		int n = strlen(vp.nickname);
		nickname = new char[n+1];
		strncpy(nickname, vp.nickname, n);
	}
	year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if(this == &vp)
	{
		return *this;
	}		
	Port::operator=(vp);
	
	int n = strlen(vp.nickname);
	nickname = new char[n+1];
	strncpy(nickname, vp.nickname, n);
}

void VintagePort::Show()const
{
	//Port::Show();
	cout << "Nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
}


ostream & operator<<(ostream & os, const VintagePort & vp)
{
	os << (const Port &)vp;
	os << "  " << vp.nickname << ", " << vp.year; 	
}



int main(void)
{
	Port p("Changchen", "tawny", 20);
	Port p2("Gandi", "ruby", 10);
	p.Show();
	p+=2;
	p.Show();
	p-=1;
	p.Show();
	p = p2;
	p.Show();
	cout << p << p2;


	VintagePort vp("Brand", 20, "Nickname", 100);
	VintagePort vp2 = vp;
	vp.Show(.);
	vp2.Show();
	cout << vp << vp2 << endl;
	return 0;
}





