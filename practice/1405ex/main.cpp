#include "emp.h"
#include <iostream>
#include <string>

using namespace std;
int main(void)
{
	cout << "-----em-----" << endl;
	employee em("Trip", "Harris", "Thumper");
	cout << em << endl;	
	em.ShowAll();

	cout << endl;


	cout << "-----ma-----" << endl;
	manager ma("Amorphia", "Spindragon", "Nuancer", 5);
	cout << ma << endl;
	ma.ShowAll();

	cout << endl;

	cout << "----ma2(ma)---" << endl;
	manager ma2(ma);
	ma2.ShowAll();


	cout << "-----fi-----" << endl;
	fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
	cout << fi << endl;
	fi.ShowAll();

	cout << endl;


	// highfink class
	cout << "******highfink*******" << endl;
	highfink hf(ma, "Curly Kew");
	hf.ShowAll();

	cout << endl;

	cout << "Press a key for next phase:\n";
	cin.get();
	highfink hf2;
	hf2.SetAll();

	hf2.ShowAll();

	cout << "Using an abstr_emp * pointer:\n";
	abstr_emp * tri[4] = {&em, &fi, &hf, &hf2};
	for(int i = 0; i < 4; i++)
		tri[i]->ShowAll();

	return 0;
}
