#include <iostream>
#include <stdio.h>
int main(void)
{
	using namespace std;
	char ch;
	int count = 0;

	while((ch = cin.get()) != EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << cout << " characters read\n";
	return 0;
}
