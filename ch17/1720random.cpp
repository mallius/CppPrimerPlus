#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

const int LIM = 20;
struct planet
{
	char name[LIM];
	double population;
	double g;
};

const char *
