#include <iostream>
using namespace std;

struct Pizza{
	string company;
	double d;
	double weight;
};

int main(void)
{
	Pizza *p = new Pizza;

	cout << "d: ";
	cin >> p->d;
	cin.get();
	cout << "Pizaa company: ";
	getline(cin, p->company);
	cout << "weight: ";
	cin >> p->weight;


	cout << p->company << endl;
	cout << p->d << endl;
	cout << p->weight << endl;

	delete p;

	return 0;
}
