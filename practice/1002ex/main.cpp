#include "person.h"
#include <iostream>

int main(void)
{
	using namespace std;
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	two.Show();
	three.Show();
	two.FormalShow();
	three.FormalShow();
}
