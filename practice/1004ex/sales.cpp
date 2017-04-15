#include "sales.h"
#include <iostream>

namespace SALES
{
	Sales::Sales()
	{
		average = 0.0;
		max = 0.0;
		min = 0.0;
	}

	Sales::~Sales()
	{

	}

	void Sales::setSales(Sales & s, const double ar[], int n)
	{
		using namespace std;
		s.average = 0;
		s.max = 0;
		s.min = 0;
		if(n > QUARTERS)
		{
			cout << "n is > 4";
			return ;
		}
		for(int i = 0; i < n; i++)
		{
			s.sales[i] = *ar;
			if(*ar > s.max)
				s.max = *ar;
			if(*ar < s.min)
				s.min = *ar;
			s.average += *ar;
			ar++;
		}
		s.average = s.average / n;
	}
	
	void Sales::showSales(const Sales & s)
	{
		using namespace std;
		cout << "max:" << s.max << endl;
		cout << "min:" << s.min << endl;
		cout << "average:" << s.average << endl;
		for (int i =0; i < QUARTERS; i++)
		{
			cout << s.sales[i] << endl;
		}
	}
	
} //end namespace SALES

