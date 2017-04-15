//#include "./sales.h"
#include <iostream>

namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};

	void setSales(Sales & s, const double ar[], int n);

	void setSales(Sales & s);

	void showSales(const Sales & s);



	void setSales(Sales & s, const double ar[], int n)
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
	
	void setSales(Sales & s)
	{
	
	}
	
	void showSales(const Sales & s)
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
	
}

