#include <iostream>
const int Max = 5;

double *fill_array(double *ar, double *end);
void show_array(const double *ar , const double *end);
void revalue(double r, double *ar, double *end);

int main(void)
{
	using namespace std;
	double properties[Max];
	int size;

	double *psize = fill_array(properties, properties+Max-1);
	show_array(properties, properties+Max-1);
	cout << "Enter revaluation factor: ";
	double factor;
	cin >> factor;
	revalue(factor, properties, psize);
	show_array(properties, properties+Max-1);
	cout << "Done.\n";
}

double *fill_array(double *ar, double *end)
{
	using namespace std;
	double *pstart;
	double *pend = end;
	double temp;
	int i;
	
	for(i=0,pstart = ar; pstart <= pend; pstart++,i++)
	{
		cout << "Enter value #" << (i+1) << ": ";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "Bad input; input process teminated.\n";
			break;
		}
		else if(temp < 0)
			break;
		*pstart = temp;
	}
	return pstart;
}

void show_array(const double *ar, const double *end)
{
	using namespace std;
	const double *pstart;
	const double *pend = end;
	int i;
	for(i = 0, pstart = ar; pstart <= pend; pstart++, i++)
	{
		cout << "Property #" << (i+1) << ": $";
		cout << *pstart << endl;
	}
}

void revalue(double r, double *ar, double *end)
{
	int i;
	double *pstart;
	double *pend = end;
	for(i = 0, pstart = ar; pstart != end; pstart++)
	{
		(*pstart) *= r;
	}
}
