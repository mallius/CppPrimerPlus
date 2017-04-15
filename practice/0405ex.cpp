#include <iostream>
using namespace std;

struct CandyBar{
	string brand;
	double weight;
	int ka;
};

int main(void)
{
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << snack.brand << endl;
	cout << snack.weight<< endl;
	cout << snack.ka<< endl;
	return 0;
}
