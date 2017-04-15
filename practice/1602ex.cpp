#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <list>

using namespace std;
char toLower(char ch)
{ 
	return tolower(ch); 
}

/**bool isSymbol(char ch)
{
	if(ch == '\'')
		return true;
	return false;
}**/

string ToLower(string s)
{
	transform(s.begin(), s.end(), s.begin(), toLower);
	return s;
}
string ReverseLower(string &s)
{
	string sRev(s.rbegin(), s.rend());
	// transform(sRev.begin(), sRev.end(), sRev.begin(), toLower);

	return sRev;
}

void print(char ch)
{
	cout << ch << " ";
}

int main(void)
{
	cout << "Enter a sentence: ";
	string sInput;
	
	//cin >> sInput;
	getline(cin, sInput);
	string s = ToLower(sInput);
	cout << "sring lower: " << s << endl;

	string sRevLower = ReverseLower(s);
	cout << "string reverse: " << sRevLower << endl;


	list<char> sOrg;
	list<char> sRev;

	// 原字符串小写
	cout << "原字符串" << endl;
	string::iterator it;
	for(it = s.begin(); it != s.end(); it++)
	{
		sOrg.push_back(*it);
	}
	sOrg.remove('\'');
	sOrg.remove(' ');
	sOrg.remove(',');

	for_each(sOrg.begin(), sOrg.end(), print);
	cout << endl;

	// sOrg.remove_if(sOrg.begin(), sOrg.end(), isSymbol);


	// 原字符串反转后小写
	cout << "原字符串反转" << endl;
	for(it = sRevLower.begin(); it != sRevLower.end(); it++)
	{
		sRev.push_back(*it);
	}
	sRev.remove('\'');
	sRev.remove(' ');
	sRev.remove(',');

	for_each(sRev.begin(), sRev.end(), print);
	cout << endl;

	if(sOrg==sRev)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	return 0;
}
