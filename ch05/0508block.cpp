#include <iostream>
int main()
{
	using namespace std;
	double number;
	double sum = 0.0;

	for(int i = 1; i <= 5; i++)
	{
		cout << "Value " << i << ": ";
		cin >> number;
		sum+= number;
	}
	cout << sum << endl;
	cout << sum / 5 << endl;
	return 0;
}
