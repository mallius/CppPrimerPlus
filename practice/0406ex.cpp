#include <iostream>
using namespace std;

struct CandyBar{
	string brand;
	double weight;
	int ka;
};

int main(void)
{
	CandyBar snack[3] = {
		{"Mocha Munch", 2.3, 350},
		{"Mocha M2", 2.2, 250},
		{"Mocha M3", 2.3, 230}};
	cout << snack[0].brand << endl;
	cout << snack[0].weight<< endl;
	cout << snack[0].ka<< endl;
	cout << snack[1].brand << endl;
	cout << snack[1].weight<< endl;
	cout << snack[1].ka<< endl;
	cout << snack[2].brand << endl;
	cout << snack[2].weight<< endl;
	cout << snack[2].ka<< endl;
	return 0;
}
