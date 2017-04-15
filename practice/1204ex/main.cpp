#include <iostream>
#include "stack.h"
using std::cout;
using std::endl;

int main(void)
{
	Stack st(3);
	std::cout << "Empty?: " << st.isempty() << std::endl;
	std::cout << "Full?: " << st.isfull() << std::endl;

	return 0;
}
