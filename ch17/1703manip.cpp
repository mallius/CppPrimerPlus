#include <iostream>
int main(void)
{
	using namespace std;
	cout << "Enter an integer: ";
	int n;
	cin >> n;

	cout << "n	n*n\n";
	cout << n << "		" << n*n << "(decimal)\n";

	// set to hex mode
	cout << hex;
	cout << n << "		";
	cout << n*n << "(hexadecimal)\n";

	// set to octal mode
	cout << oct << n << "		" << n*n << "(octal)\n";
	dec(cout);
	cout << n << "		" << n*n << "(decimal)\n";

	return 0;
}
