#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
	class Vector
	{
	private:
		double x;		// horizontal value
		double y;		// verical value
		double mag;		// length of vector
		double ang;		// direction of vector
		char mode;		// 'r' = rectangular, 'p' = polar
		// private methods for setting values
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		Vector();
		Vector(double n1, double n2, char form = 'r');
		void set(double n1, double n2, char form = 'r');
		~Vector();
		double xval()const{ return x; };
		double yval()const{ return y; };
		double magval()const{ return mag; };
		double angval()const{ return ang; };
		void polar_mode();
		void rect_mode();
		//operator overloading
		Vector operator+(const Vector & b)const;
		Vector operator-(const Vector & b)const;
		Vector operator-()const;
		Vector operator*(double n)const;
		//friends
		friend Vector operator* (double n, const Vector & a);
		friend std::ostream & operator<<(std::ostream & os, const Vector & v);

	};
}//end namespace VECTOR

#endif
