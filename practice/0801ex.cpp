#include <iostream>
using namespace std;

void print(char *s);
void print(char *s, int n);

int main(void)
{
	print("hello C++");
	print("Hello C++", 1);

	return 0;
}

void print(char *s)
{
	cout << s << endl;
}
void print(char *s, int n)
{
	if(n != 0)
	{

	}
	else
	{
		return ;
	}
}
