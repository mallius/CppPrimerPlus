#include <iostream>
using namespace std;

struct CandyBar{
	string brand;
	double weight;
	int ka;
};

int main(void)
{
	CandyBar *p= new CandyBar [3];
	CandyBar *temp = p;

	p->brand = "Mocha Munch";
	p->weight = 1.0;
	p->ka = 100;
	p++;
	p->brand = "Mocha Munch1";
	p->weight = 2.0;
	p->ka = 200;
	p++;
	p->brand = "Mocha Munch2";
	p->weight = 3.0;
	p->ka = 300;
	
	p--;
	p--;
	cout << p->brand << endl;
	cout << p->weight<< endl;
	cout << p->ka<< endl;
	p++;
	cout << p->brand << endl;
	cout << p->weight<< endl;
	cout << p->ka<< endl;
	p++;
	cout << p->brand << endl;
	cout << p->weight<< endl;
	cout << p->ka<< endl;

	delete [] temp;

	return 0;
}
