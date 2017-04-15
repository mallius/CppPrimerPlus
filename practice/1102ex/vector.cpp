#include <cmath>
#include "vector.h"
using std::sin;
using std::cos;
using std::atan2;
using std::cout;

namespace VECTOR
{
	const double Rad_to_deg = 57.2957795130823;

	double Vector::cal_mag()
	{
		return sqrt(x*x+y*y);
	}

	double Vector::cal_ang()
	{
		if(x == 0.0 && y == 0.0)
			return 0.0;
		else
			return atan2(y,x);
	}

	/**
	void Vector::set_x()
	{
		x = mag * cos(ang);
	}
	**/

	/**
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}
	**/

	// public methods
	Vector::Vector()		// default constructor
	{
		x = y = 0.0;
		mode = 'r';
	}

	// construct vector from rectangular coordinates if form is r
	// (the default) or else from polar coordinates if form is p
	Vector::Vector(double n1, double n2, char form)
	{
		mode = form;
		if(form == 'r')
		{
			x = n1;
			y = n2;
			//set_mag();
			//set_ang();
		}
		else if(form == 'p')
		{
			/**
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
			**/
			cout << "Vector::Vector 3rd argument must be 'r', 'p' is not supported.." << std::endl;
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector()--";
			cout << "vector set to 0\n";
			x = y  = 0.0;
			mode = 'r';
		}
	}

	// set vector from rectangular corrdinates if form is r (the
	// default) or else from polar corrdinates if form is p
	void Vector::set(double n1, double n2, char form)
	{
		mode = form;
		if(form == 'r')
		{
			x = n1;
			y = n2;
			// set_mag();
			// set_ang();
		}
		else if(form = 'p')
		{
			// mag = n1;
			// ang = n2 / Rad_to_deg;
			// set_x();
			// set_y();
			cout << "Vecotor::set ->3rd argument must 'r', 'p' is not supported.." << std::endl;
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector()--";
			cout << "vector set to 0\n";
			x = y = 0.0;
			mode = 'r';
		}
	}

	Vector::~Vector()
	{
		
	}

	/*
	void Vector::polar_mode()
	{
		mode = 'p';
	}
	*/

	void Vector::rect_mode()
	{
		mode = 'r';
	}

	// operator overloading
	// add two Vector
	
	Vector Vector::operator+(const Vector & b)const
	{
		return Vector(x+b.x, y+b.y);
	}

	Vector Vector::operator-(const Vector & b)const
	{
		return Vector(x - b.x, y-b.y);
	}

	Vector Vector::operator-()const
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n)const
	{
		return Vector(n * x, n * y);
	}

	
	Vector operator*(double n, const Vector & a)
	{
		return a * n;
	}

	std::ostream & operator<< (std::ostream & os, const Vector & v)
	{
		if(v.mode == 'r')
			os << "(x,y)=(" << v.x << "," << v.y << ")" ;
		else if(v.mode == 'p')
		{
			//os << "(m, a) = (" << v.mag << ", "
				// << v.ang * Rad_to_deg << ")";
			os << "Vector object mode is invalid, because mode is 'p' ";
		}
		else
			os << "Vector object mode is invalid";
		return os;
	}

}  //end namespze VECTOR

