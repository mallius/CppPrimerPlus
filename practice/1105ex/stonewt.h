#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
private:
	// int type;

	enum{Lbs_per_stn = 14};
	int stone;			// 整数磅数
	double pds_left;	// 剩余磅数
	double pounds;		// 总共磅数
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();

	Stonewt operator+(const Stonewt & st)const;
	Stonewt operator-(const Stonewt & st)const;
	Stonewt operator*(double n)const;

	//friend Stonewt operator*(double m, const Stonewt & st);
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);


	// void show_lbs()const;
	// void show_stn()const;
};
#endif
