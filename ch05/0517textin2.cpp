#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;

	cout << "Enter characteArs; enter # to quit:\n";
	cin.get(ch);
	while(ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " character read\n";
	return 0;
}
