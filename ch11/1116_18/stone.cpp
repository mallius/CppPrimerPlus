#include <iostream>
using std::cout;
#include "stonewt.h"

void display(const Stonewt & st, int n);

int main(void)
{
	Stonewt pavarotti = 260;
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);

	cout << "The tenor weighed ";
	pavarotti.show_stn();
	cout << "The President weighed ";
	taft.show_lbs();
	pavarotti = 265.8;
	taft = 325;
	cout << "After dinner, the tenor weighted ";
	pavarotti.show_stn();
	display(taft, 2);
	cout << "The wretler weighted even more.\n";
	display(422,2);
	cout << "Noo stone left unearned\n";
	return 0;
}

void display(const Stonewt & st, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "Wow";
		st.show_stn();
	}
}
