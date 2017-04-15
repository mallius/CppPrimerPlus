#include <iostream>
#include <string>


using namespace std;
bool IsPalindromic(string &s)
{
	string sRev(s.rbegin(), s.rend());
	return (s==sRev);
}

int main(void)
{
	cout << "Enter a word: ";
	string s;
	cin >> s;
	if(IsPalindromic(s))
	{
		cout << s << " is a Palindromic word." << endl;
	}
	else
	{
		cout << s << " is Not a Palindromic word." << endl;
	}

	return 0;
}
