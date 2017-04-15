#include <iostream>
long double probability(unsigned numbers1, unsigned picks1, unsigned numbers2, unsigned picks2);

int main()
{
	using namespace std;
	double total1, choices1, total2, choices2;
	cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed:\n";
	while((cin >> total1 >>choices1 >> total2 >> choices2) && choices1 <= total1 && choices2 <= total2)
	{
		cout << "You have one chance in ";
		cout << probability(total1, choices1, total2, choices2);
		cout << " of winnig.\n";
		cout << "Next two numbers (q to quit): ";
	}
	cout << "bye\n";
	return 0;
}

long double probability(unsigned numbers1, unsigned picks1, unsigned numbers2, unsigned picks2)
{
	long double result1 = 1.0;
	long double result2 = 1.0;
	long double n1, n2;
	unsigned p1, p2;
	int i;

	for(i = 0; i < picks1; i++)
		result1 = result1 * (1/(double)numbers1);
	for(i = 0; i < picks2; i++)
		result2 = result2 * (1/(double)numbers2);
#if 0
	for(n1 = numbers1, p1 = picks1; p1 > 0; n1--, p1--)
		result1 = result1 * n1 / p1;
	for(n2 = numbers2, p2 = picks2; p2 > 0; n2--, p2--)
		result2 = result2 * n2 / p2;
#endif
	
	return result1*result2;
}
