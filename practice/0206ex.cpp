#include <iostream>
using namespace std;

void print(int hour, int minutes)
{
	cout << hour << ":" << minutes;
}
int main(void)
{
	int h,m;
	cout << "Enter the number of hours: ";
	cin >> h;
	cout << "Enter the number of minutes: ";
	cin >> m;
	cout << "Time: ";
	print(h, m);
	cout << endl;

	return 0;
}
