#include "Wine.h"
#include <iostream>

using namespace std;

Wine::Wine::Wine(const char *l, int y)
		:label(l), yearsNum(y), yearList(y), bottleList(y)
{

}


Wine::Wine(const char * l, int y, const int yr[], const int bot[])
	:label(l), yearsNum(y), yearList(yr,y), bottleList(bot,y)		//容量为y, 数值为bot数组值
{

}

string& Wine::Label()
{
	return label;
}

int Wine::Sum()
{
	return bottleList.sum();
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
		yearList[i] = yr;
		bottleList[i] = num;	
	}
}

void Wine::Show()
{
	cout << "Label: " << label << endl;	
	cout << "Years Numbers: " << yearsNum << endl;

	for(int i = 0; i < yearsNum; i++)
	{
		cout << "year: " << yearList[i] << " \tbottles: " << bottleList[i] << endl;
	}
}
