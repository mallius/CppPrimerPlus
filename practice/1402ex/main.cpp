#include "Wine.h"
#include <iostream>

using namespace std;

int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;

	cout <<"Enter name of wine: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Enter number of years: ";
	int yrs;
	cin >> yrs;

	//构造valarray的容量
	Wine holding(lab, yrs);

	cout << "---(私有继承)数量未赋值前---" << endl;
	holding.Show();

	

	//输入yrs个年份和瓶数
	holding.GetBottles();

	cout << "---数量赋值后---" << endl;
	holding.Show();



	const int YRS = 3;
	int y[YRS] = {1993, 1995, 1998};
	int b[YRS] = {100,200,300};
	Wine more("Gushing Grape Red", YRS, y, b);

	cout << "---直接数组值构造---" << endl;
	more.Show();

	cout << "Total bottles for " << more.Label() << ": " << more.Sum() << endl;
	cout << "Done.\n";

	return 0;
}
