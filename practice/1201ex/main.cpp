#include "cow.h"
#include <iostream>

int main(void)
{
	Cow c;
	c.ShowCow();

	Cow c1("name01", "hobby01", 1.1);
	Cow c2 = c1;
	c1.ShowCow();
	c2.ShowCow();

	std::cout << "----c3---" << std::endl;
	Cow c3(c1);
	c3.ShowCow();
	return 0;
}
