// usedma.cpp -- inheritance, friends, and DMA
// compile with dam.cpp
#include <iostream>
#include "dma.h"
int main()
{
	using std::cout;
	using std::endl;

	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);
	cout << shirt << endl;
	cout << balloon << endl;
	cout << map << endl;
	lacksDMA balloom2(balloon);
	hasDMA map2;
	map2 = map;
	cout << balloom2 << endl;
	cout << map2 << endl;
	return 0;
}