#include "move.h"
#include <iostream>
using namespace std;

Move::Move(double a, double b)
{
	x=a;
	y=b;
}

void Move::showmove()const
{
	cout << "x:"<< x << endl;
	cout << "y:"<< y << endl;
}

Move Move::add(const Move & m)
{
	x = m.x;
	y = m.y;	
	return *this;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
