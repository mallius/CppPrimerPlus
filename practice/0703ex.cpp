#include <iostream>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void f1(struct box b)
{
	cout << b.maker <<  endl;
	cout << b.height<<  endl;
	cout << b.width<<  endl;
	cout << b.length<<  endl;
	cout << b.volume<<  endl;
}
void f2(struct box *b)
{
	cout << b->maker << endl;
	cout << b->height << endl;	
	cout << b->width<< endl;	
	cout << b->length<< endl;	
	cout << b->volume<< endl;	
}
int main(void)
{
	struct box b = {"John", 1.1, 2.2, 3.3, 4.1};
	f1(b);
	f2(&b);
	return 0;
}
