#include "Complex.h"

Complex::Complex()
{
	x = 0;
	y = 0;
}

Complex::Complex(double a, double b)
{
	x = a;
	y = b;
}

Complex::Complex(const Complex& c)
{
	x = c.x;
	y = c.y;
}

Complex::operator string () const
{
	stringstream ss;
	if (y >= 0)
		ss << x << "+" << y << "i\n";
	else
		ss << x << y << "i\n";
	return ss.str();
}

ostream& operator << (ostream& out, const Complex& c)
{
	out << string(c);
	return out;
}

istream& operator >> (istream& in, Complex& c)
{
	cout << "Real: "; in >> c.x;
	cout << "Image: "; in >> c.y;
	cout << endl;
	return in;
}

Complex operator + (const Complex& a, const Complex& b)
{
	if (a.x == 0) { throw E("E error"); }
	if (a.y == 0) { throw Error("Error error"); }
	if (b.x == 0) { throw bad_exception(); }
	
	return Complex(a.x + b.x, a.y + b.y);
}

Complex operator * (const Complex& a, const Complex& b)
{
	if (a.x == 0) { throw E("E error"); }
	if (a.y == 0) { throw Error("Error error"); }
	if (b.x == 0) { throw bad_exception(); }
	
	return Complex(a.x * b.x - a.y * b.y, a.x * b.y + a.y * b.x);
}

bool operator == (const Complex& a, const Complex& b)
{
	if (a.x == 0) { throw E("E error"); }
	if (a.y == 0) { throw Error("Error error"); }
	if (b.x == 0) { throw bad_exception(); }
	
	return a.x == b.x && a.y == b.y;
}
