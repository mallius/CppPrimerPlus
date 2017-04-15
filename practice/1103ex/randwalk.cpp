#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main(void)
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0,0.0);
	unsigned long steps = 0;
	double target;
	double dstep;

	long max = 0;
	long min = 0;
	long aversteps = 0;
	long allsteps = 0;
	int n = 0;

	cout << "Enter target distance (q to quit): ";
	while(cin >> target)
	{
		cout << "Enter step length: ";
		if(! (cin >> dstep))
			break;
		
		while(result.magval() < target)
		{
			direction = rand() % 360;
			step.set(dstep, direction, 'p');
			result = result + step;
			steps++;
		}
		cout << "After " << steps << " steps, the subject "
			"has the following location: \n";
		cout << result << endl;

		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval()/steps << endl;


		/* 统计数据 */
		if(steps > max)
		{
			max = steps;
		}
		if(n == 0)
		{
			min = steps;
		}
		else
		{
			if(min > steps)
			{
				min = steps;
			}
		}
		n++;
		allsteps+=steps;


		/*再次输入*/
		steps = 0;
		result.set(0.0, 0.0);
		cout << "Enter target distance(q to quit): ";


	}
	cout << "Bye!\n";
	if(n > 0)
		aversteps = allsteps / n;
	else 
		aversteps = 0;
	cout << "Max Steps: " << max << endl;
	cout << "Min Steps: " << min << endl;
	cout << "Aver Steps: " << aversteps << endl;
	return 0;
}
