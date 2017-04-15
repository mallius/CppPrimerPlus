#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <list>

using std::string;
using namespace std;

int reduceError(long ar[], int n)
{
	// 原始值
	vector<long> vl;
	for(int i = 0; i < n; i++)
	{
		vl.push_back(ar[i]);
	}
	cout << "befor sort:----" <<endl;
	for(int i = 0; i < n; i++)
	{
		cout << vl[i] << ", ";
	}
	cout << endl;

	// 排序后
	sort(vl.begin(), vl.end());
	
	cout << "after sort:=====" << endl;
	for(int i = 0; i < n; i++)
	{
		cout << vl[i] << ", ";
	}
	cout << endl;

	// 去重后
	cout << "and after unique:***" << endl;
	unique(vl.begin(), vl.end());

	/**vector<long>::iterator it = vl;
	for(it = vl.begin(); it != vl.end(); it++)
	{
		cout << *it << "| ";
	}
	cout << endl;
	**/

	int num = vl.size();
	cout << "num: " << num << endl;
	for(int i = 0; i < num; i++)
	{
		cout << vl[i] << ", ";
	}
	cout << endl;

	return 0;
}

void out(long n)
{
	cout << n << " ";
}
int reduce(long ar[], int n)
{
	list<long> listLong;
	listLong.insert(listLong.begin(), ar, ar+n);		
	
	// 排序
	listLong.sort();

	// list<long>::iterator it;
	//for(it = listLong.begin(); it != listLong.end(); it++) { cout << *it << " "; } cout << endl;
	for_each(listLong.begin(), listLong.end(), out);
	cout << endl;

	// 去重复
	listLong.unique();
	//for(it = listLong.begin(); it != listLong.end(); it++) { cout << *it << " "; } cout << endl;
	for_each(listLong.begin(), listLong.end(), out);
	cout << endl;

	return 0;
}

int main(void)
{
	long ar[] = {3, 4, 5, 2, 1,1,2,8,9,10,1};
	int n = sizeof(ar)/sizeof(long);

	cout << "原数组n: " << n << endl;
	for(int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
	reduce(ar, n);

	return 0;
}
