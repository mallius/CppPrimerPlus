#include <iostream>
#include <cctype>
#include "stack.h"

int main(void)
{
	using namespace std;
	Stack st;
	customer pa;
	customer pb;
	customer pc;
	
	cout << "Is stack empty?:" << st.isempty() << endl;

	pa.payment = 1.0;
	pb.payment = 2.0;
	pc.payment = 3.0;

	st.push(pa);
	cout << "Is stack empty?:" << st.isempty()<< ",Is stack full:" << st.isfull() << endl;

	st.push(pb);
	cout << "Is stack empty?:" << st.isempty()<< ",Is stack full:" << st.isfull() << endl;

	st.push(pc);
	cout << "Is stack empty?:" << st.isempty()<< ",Is stack full:" << st.isfull() << endl;
	st.pop(pc);
	st.pop(pb);
	st.pop(pa);
	cout << "Is stack empty?:" << st.isempty()<< ",Is stack full:" << st.isfull() << endl;

	st.showPayment();

	return 0;
}
