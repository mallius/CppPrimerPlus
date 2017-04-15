#include <iostream>
#include <new>
#include <cstring>

const int BUF = 512;
const int N = 2;
char buff[BUF];
struct chaff
{
	char dross[20];
	int slag;
};

void showchaff(chaff *p)
{
	using namespace std;
	cout << "dross:" << p->dross << endl;	
	cout << "slag:" << p->slag << endl;
}
int main(void)
{
	using namespace std;
	chaff *temp, *p2;
	
	temp = new chaff[N];
	p2 = temp;
	strcpy(temp->dross, "name1");
	temp->slag = 1;
	showchaff(temp);

	temp++;

	strcpy(temp->dross, "name2");
	temp->slag = 2;
	showchaff(temp);

	delete [] p2;

	chaff *p;
	p = new (buff) chaff[N];
	strcpy(p[0].dross, "name3");
	p[0].slag = 3;
	cout << "dross:" << p[0].dross << endl;
	cout << "slag:" << p[0].slag << endl;

	strcpy(p[1].dross, "name4");
	p[1].slag = 4;
	cout << "dross:" << p[1].dross << endl;
	cout << "slag:" << p[1].slag << endl;


	return 0;
}
