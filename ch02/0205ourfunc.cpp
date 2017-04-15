#include <iostream>
void simon(int);

int main(void)
{
	using namespace std;
	simon(3);
	cout << " Pick an interger: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
}

void simon(int n)
{
	using namespace std;
	cout << "Simon says touch you toes " << n << " times. " << endl;
}
