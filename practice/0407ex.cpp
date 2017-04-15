#include <iostream>
using namespace std;

struct Pizza{
	string company;
	double d;
	double weight;
};

int main(void)
{
	Pizza pizza;
	cout << "Pizaa company: ";
	getline(cin, pizza.company);
	cout << "d: ";
	cin >> pizza.d;
	cout << "weight: ";
	cin >> pizza.weight;


	cout << pizza.company << endl;
	cout << pizza.d << endl;
	cout << pizza.weight << endl;
	return 0;
}
