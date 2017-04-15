#include <iostream>
#include "stock1.h"

int main(int argc, char **argv)
{
	using std::cout;
	using std::ios_base;
	cout.precision(2);
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.setf(ios_base::showpoint);
	
	cout << "Using constructors to create new objects\n";

	Stock stock1("NanoSmart", 12, 20.0);
	stock1.show();
	Stock stock2 = Stock("boffo Objects", 2, 2.0);

	cout << "Assigning stock1 to stock2: \n";
	stock2 = stock1;
	cout << "Listing stock1 and stock2: \n";
	stock1.show();
	stock2.show();

	cout << "Using a constructor to reset an object\n";
	stock1 = Stock("Nify Foods", 10, 50.0);
	cout << "Revised stock1: \n";
	stock1.show();
	cout << "Done\n";

	return 0;
}
