#include <iostream>
using namespace std;
int main(void)
{
	int x;
	cout << "The expression x = 100 has the value ";
	cout << (x = 100) << endl;
	cout << "Now x = " << endl;
	cout << "The exp x < 3 value: ";
	cout << (x<3) << endl;
	cout << "The exp x > 3 value: ";
	cout <<(x>3) << endl;
	cout.setf(ios_base:: boolalpha);
	cout << "The exp x < 3 value: ";
	cout << (x<3) << endl;
	cout << "The exp x > 3 value: ";
	cout << (x>3) <<endl;

	return 0;
}
