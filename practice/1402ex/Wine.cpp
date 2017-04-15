#include "Wine.h"
#include <iostream>

using namespace std;

Wine::Wine::Wine(const char *l, int y)
		: std::string(l), yearsNum(y), PairValArray(ValArray(0,y), ValArray(0,y))
{

}


Wine::Wine(const char * l, int y, const int yr[], const int bot[])
	: std::string(l), yearsNum(y),PairValArray(ValArray(yr,y), ValArray(bot,y)) 	//容量为y, 数值为bot数组值
{

}

string& Wine::Label()
{
	return (std::string &)(*this);
}

int Wine::Sum()
{
	//return bottleList.sum();
	return PairValArray::second().sum();
}

void Wine::GetBottles()
{
	int yr;
	int num;
	for(int i = 0; i < yearsNum; i++)
	{
		cout << "Times[" << i+1 << "], " <<  "Enter year: ";
		cin >> yr;

		cout << "Times[" << i+1 << "], " <<   "Enter the bottles for that year: ";
		cin >> num;
		
		//赋值
		//yearList[i] = yr;
		PairValArray::first()[i] = yr;
		//bottleList[i] = num;	
		PairValArray::second()[i] = num;
	}
}

void Wine::Show()
{
	cout << "Label: " << (std::string &)(*this) << endl;	
	cout << "Years Numbers: " << yearsNum << endl;

	for(int i = 0; i < yearsNum; i++)
	{
		//cout << "year: " << yearList[i] << " \tbottles: " << bottleList[i] << endl;
		cout << "(private)Pair-year: " 
			<< PairValArray::first()[i] << " \t(private)Pair-bottles: " << PairValArray::second()[i] << endl;
	}
}
