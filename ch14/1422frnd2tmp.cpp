#include <iostream>
using std::cout;
using std::endl;
template <typename T>
class HasFriend
{
private:
	T item;
	static int ct;
public:
	HasFriend(const T & i): item(i){ct++; }
	~HasFriend(){ct--; }
	friend void counts();
	friend void reports(HasFriend<T> &);  // template parameter
};

template <typename T>
int HasFriend<T>::ct = 0;

// non-template friend to all HasFrind<T> class
void counts()
{
	cout << "int count: " << HasFriend<int>::ct << "; ";
	cout << "double count: " << HasFriend<double>::ct << endl;
}

// non-template frined to the HasFriend<int> class
void reports(HasFriend<int> & hf)
{
	cout <<"HasFriend<int>: " << hf.item << endl;
}

// non-template friend to the HasFriend<double> class
void reports(HasFriend<double> & hf)
{
	cout <<"HasFriend<double>: " << hf.item << endl;
}

int main(void)
{
	cout << "No object declared: ";
	counts();

	HasFriend<int> hfi1(10);
	cout << "After hfi1 declared: ";
	counts();

	HasFriend<int> hfi2(20);
	cout << "After hfi2 declared: ";
	counts();

	HasFriend<double> hfdb(10.5);
	cout << "After hfdb declared: ";
	counts();
	reports(hfi1);
	reports(hfi2);
	reports(hfdb);

	return 0;
}
