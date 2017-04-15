#include "sales.h"
using namespace SALES;
int main(void)
{
	double ar[4] = {1.0, 2.0, 3.0, 4.0};
	Sales sa;
	
	sa.setSales(sa, ar, 4);
	sa.showSales(sa);

	return 0;
}
