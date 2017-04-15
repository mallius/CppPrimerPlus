#include "stack.h"
#include <cstring>

Stack::Stack(int n)
{
	if(n > MAX || n < 0)
		n = 10;
	size = n;
	top = 0;
	pitems = new Item[n];
}

Stack::Stack(const Stack & st)
{
	size = st.size;
	top = st.top;
	
	pitems = new Item[size];
	memcpy(pitems, st.pitems, size*sizeof(Item));
}

Stack::~Stack()
{
	delete [] pitems;
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
		*pitems = item;
		pitems++;
		top++;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item)
{
	if(top > 0)
	{
		item = *pitems;
		pitems--;
		top--;
		return true;
	}
	else
		return false;
}

Stack & Stack::operator=(const Stack & st)
{
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	memcpy(pitems, st.pitems, size*sizeof(Item));
}




