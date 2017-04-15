#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(int n)
{
	cout << n << " ";
}

vector<int> Lotto(int totalnum, int num)
{
	vector<int> v;
	// 按顺序生成
	for(int i = 1; i <= totalnum; i++)		
	{
		v.push_back(i);	
	}
	cout << "生成序列" << totalnum << "个:" << endl;
	for_each(v.begin(), v.end(), print);
	cout << endl;

	// 随机排列
	random_shuffle(v.begin(), v.end());
	cout << "随机排列" << totalnum << "个:" << endl;
	for_each(v.begin(), v.end(), print);
	cout << endl;

	vector<int> temp(num);
	copy(v.begin(), v.begin()+num, temp.begin());
	cout << "生成前" << num << "个: " << endl;
	for_each(temp.begin(), temp.end(), print);
	cout << endl;

	return temp;
}

int main(void)
{
	vector<int> vec = Lotto(30, 6);
	cout << "返回生成:" << endl;
	for_each(vec.begin(), vec.end(), print);
	cout << endl;

	return 0;
}
