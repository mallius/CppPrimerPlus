#include "complex0.h"
using std::cin;
using std::cout;
using std::endl;
int main(void)
{
	Complex a(1, 1.2);
	cout << a;

	Complex b(1, 1.1);
	cout << b;

	Complex c;
	cout << c;

	cout << "a + b: " << a+b;
	cout << a;
	cout << "b - a: " << b-a;
	cout << a;
	cout << b;

	cout << "----multi-----" << endl;
	cout << "2*a: " << 2*a;
	cout << "a*2: " << a*2;
	cout << "a*b: " << a*b;
	cout << "b*a: " << b*a;
	
	cout << "---~ ----" << endl;
	cout << "~a: " << ~a;

	cout << a;

	cout << "--- >> ---" << endl;
	Complex cpx;
	cin >> cpx;

	cout << cpx;

	return 0;
}
