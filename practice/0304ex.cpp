#include <iostream>
using namespace std;

int main(void)
{
	long sec;
	long day;
	long min;
	long lastSec;
	const long SEC_DAY = 86400;
	const long SEC_MIN = 3600;



	cout << "seconds: ";
	cin >> sec;

	day = sec / SEC_DAY;
	min = (sec - (day * SEC_DAY)) / SEC_MIN;
	lastSec = (sec - (day * SEC_DAY) - (min * SEC_MIN) )% 60;

	cout << sec << " seconds = " << day << " days ";
	cout << min << " minutes, ";
	cout << lastSec << " seconds";
	cout << endl;

	return 0;
}
