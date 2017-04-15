#include "stack.h"
#include <iostream>
Stack::Stack()
{
	top = 0;
	payment = 0.0;
}

bool Stack::isempty()const
{
	return top == 0;
}

bool Stack::isfull()const
{
	return top == MAX;
}

bool Stack::push(const Item & item)
{
	if(top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item)
{
	if(top > 0)
	{
		item = items[--top];
		payment += item.payment;
		return true;
	}
	else
		return false;
}

void Stack::showPayment(void)const
{
	std::cout << "payment:" << payment << std::endl;
}
