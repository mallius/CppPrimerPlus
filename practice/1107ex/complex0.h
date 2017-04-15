#ifndef COMPLEX0_H_
#define COMPLEX0_H_

#include <iostream>

class Complex
{
private: 
	double real;
	double imag;
public:
	Complex(double r, double i);
	Complex();
	~Complex();

	friend Complex operator+(const Complex & a, const Complex & b);
	friend Complex operator-(const Complex & a, const Complex & b);

	friend Complex operator*(const double n, const Complex & a);
	friend Complex operator*(const Complex & a, const double n);
	friend Complex operator*(const Complex & a, const Complex & b);

	friend Complex operator~(const Complex & a);

	friend std::ostream & operator<<(std::ostream & os, const Complex & cplx);
	//friend std::istream & operator>>(const Complex & cplx);
};


#endif
