// error4.cpp -- using exception classes
#include <iostream>
#include <cmath>  // or math.h, UNIX users may need -lm flag
#include "exc_mean.h"

double hmean(double a, double b)throw(bad_hmean);
double gmean(double a, double b)throw(bad_gmean);

int main(void)
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;
	cout << "Enter two numbers: ";
	while(cin >> x >> y)
	{
		try{				// start of try block
			z=hmean(x,y);
			cout << "Harmonic mean of " << x << " and " << y
				<< " is " << z << endl;
			cout << "Geometric mean of " << x << " and " << y
				<< " is " << gmean(x, y) << endl;
			cout << "Enter next set of numbers <q to quit>: ";
		} // end of try block
		catch(bad_hmean & bg)
		{
			bg.mesg();
			cout << "Try again.\n";
			continue;
		}
		catch(bad_gmean & hg)
		{
			cout << hg.mesg();
			cout << "Values used: " << hg.v1 << ", "
				<< hg.v2 << endl;
			cout << "Sorry, you don't get to play any more.\n";
			break;
		} // end of catch block
	}
	cout << "Bye!\n";
	return 0;
}

double hmean(double a, double b)throw(bad_hmean)
{
	if(a == -b)
		throw bad_hmean(a,b);
	return 2.0*a*b/(a+b);
}

double gmean(double a, double b)throw(bad_gmean)
{
	if(a < 0 || b < 0)
		throw bad_gmean(a,b);
	return std::sqrt(a * b);
}