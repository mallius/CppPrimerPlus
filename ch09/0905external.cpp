#include <iostream>
using namespace std;
double warming = 0.3;

void update(double dt);
void local();

int main(void)
{
	cout << "Global warming is " << warming << " degree.\n";
	update(0.1);
	cout << "Global warming is " << warming << " degree.\n";
	local();
	cout << "Global warming is " << warming << " degree.\n";
	return 0;
}

void update(double dt)
{
	extern double warming;
	warming += dt;
	cout << "Updating golbal to " << warming;
	cout << " degrees.\n";
}

void local()
{
	double warming = 0.8;
	cout << "Local warming = " << warming << " degree.\n";
	cout << "But global warming = " << ::warming;
	cout << " degree.\n";
}
