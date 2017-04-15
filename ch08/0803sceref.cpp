#include <iostream>
int main(void)
{
	using namespace std;
	int rats = 101;
	int & rodents = rats;

	cout << "rats = " << rats <<endl;
	cout << "rodents = " << rodents <<endl;

	cout << "rats add: " << &rats<<endl;
	cout << "rodents add: " << &rodents<<endl;

	int bunnies = 50;
	rodents = bunnies;
	cout << "bunnies = " << bunnies <<endl;
	cout << "rats = " << rats <<endl;
	cout << "rodents = " << rodents <<endl;

	cout << "bunnies add: " << &bunnies <<endl;
	cout << "rodents add: " << &rodents <<endl;

	return 0;
}
