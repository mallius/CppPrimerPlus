#include "complex0.h"

Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}

Complex::Complex()
{
	real = imag = 0.0;
}

Complex::~Complex()
{

}

Complex operator+(const Complex & a, const Complex & b)
{
	Complex c;
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;

	return c;
}

Complex operator-(const Complex & a, const Complex & b)
{
	Complex c;
	c.real = a.real - b.real;
	c.imag = a.imag - b.imag;

	return c;
}

Complex operator*(const double n, const Complex & a)
{
	Complex c;
	c.real = n*a.real;
	c.imag = n*a.imag;

	return c;
}

Complex operator*(const Complex & a, const double n)
{
	Complex c;
	c.real = n*a.real;
	c.imag = n*a.imag;

	return c;
}

Complex operator*(const Complex & a, const Complex & b)
{
	Complex c;
	c.real = a.real*b.real - a.imag*b.imag;
	c.imag = a.real*b.imag + a.imag*b.real;

	return c;
}

Complex operator~(const Complex & cpx)
{
	Complex c;
	c.real = cpx.real;
	c.imag = cpx.imag*(-1);

	return c;
}

std::ostream & operator<<(std::ostream & os, const Complex & cpx)
{
	std::cout << "(" << cpx.real << ", " << cpx.imag << "j)"<< std::endl;
}


/*
std::istream & operator>>(const Complex & cpx)
{
	std::cout << "real: ";
	std::cin >> cpx.real;

	std::cout << "imag: ";
	std::cin >> cpx.imag;
}
*/
