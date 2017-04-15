#include <iostream>
using std::cout;
using std::endl;
#include "stonewt.h"

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs)/Lbs_per_stn;
	pds_left = int(lbs)%Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn,double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn*Lbs_per_stn+lbs;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{

}

Stonewt Stonewt::operator+(const Stonewt & st) const
{
	Stonewt stonewt;
	stonewt.pounds = pounds + st.pounds;
	stonewt.stone = int(stonewt.pounds)/ Lbs_per_stn;
	stonewt.pds_left = stonewt.pounds - (stonewt.stone * Lbs_per_stn);

	return stonewt;	
}

Stonewt Stonewt::operator-(const Stonewt & st) const
{
	Stonewt stonewt;
	stonewt.pounds = pounds - st.pounds;
	stonewt.stone = int(stonewt.pounds)/ Lbs_per_stn;
	stonewt.pds_left = stonewt.pounds - (stonewt.stone * Lbs_per_stn);

	return stonewt;	
	
}

Stonewt Stonewt::operator*(double n)const
{
	Stonewt	stonewt;
	stonewt.pounds = pounds*n;
	stonewt.stone = int(stonewt.pounds)/ Lbs_per_stn;
	stonewt.pds_left = stonewt.pounds - (stonewt.stone * Lbs_per_stn);

	return stonewt;
}

/*
Stonewt operator*(double m, Stonewt & st)
{
	Stonewt stonewt = st*m;
	return stonewt;
}
*/

std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
	os<<st.stone<<" stones and " << st.pds_left << "pounds left, All: " << st.pounds<< " pounds" << endl; 
}


#if 0
void Stonewt::show_stn()const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}

void Stonewt::show_lbs()const
{
	cout << pounds << " pounds\n";
}
#endif
