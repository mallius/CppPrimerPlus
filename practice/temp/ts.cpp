#include <iostream>
#include <valarray>

using namespace std;

int main(void)
{
	//typedef std::valarray<int> valDb;
	//int gpa[5] = {1,2,3,4,5};
	//valarray<int> v1(gpa,5);
	//valDb v1(5);
	//v1[1] = gpa[1];
	string temp, temp2;
	cout << "Enter a sentence: ";
	getline(cin, temp);	
	temp2 = temp;
	cout << temp2 << endl;

	return 0;
}
