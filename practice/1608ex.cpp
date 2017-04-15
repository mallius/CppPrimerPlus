#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

void print(string s)
{
	cout << s << ", ";
}

int main(void)
{
	string mat[] = {"Afriend", "Cfriend", "Bfriend", "Marry"};
	string pat[] = {"Afriend", "Dfriend",  "Marry", "Rose"};

	list<string> MatFriend;
	int n = sizeof(mat) / sizeof(mat[0]);
	for(int i = 0; i < n; i++)
	{
		MatFriend.push_back(mat[i]);
	}
	for_each(MatFriend.begin(), MatFriend.end(), print);
	cout << endl;

	list<string> PetFriend;
	n = sizeof(pat) / sizeof(pat[0]);
	for(int i = 0; i < n; i++)
	{
		PetFriend.push_back(pat[i]);
	}
	for_each(PetFriend.begin(), PetFriend.end(), print);
	cout << endl;
	
	
	MatFriend.sort();
	for_each(MatFriend.begin(), MatFriend.end(), print);
	cout << endl;

	PetFriend.sort();
	for_each(PetFriend.begin(), PetFriend.end(), print);
	cout << endl;

	MatFriend.merge(PetFriend);
	MatFriend.unique();
	for_each(MatFriend.begin(), MatFriend.end(), print);
	cout << endl;

	return 0;
}
