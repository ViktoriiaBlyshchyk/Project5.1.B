#pragma once
#include "Error.h"
#include "E.h"
#include <iostream>
#include <string> 
#include <sstream>

using namespace std;

class Complex
{
	double x, y;

public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);

	double GetX() const { return x; }
	double GetY() const { return y; }
	void SetX(double x) { this->x = x; }
	void SetY(double y) { this->y = y; }

	operator string() const;

	friend ostream& operator <<(ostream&, const Complex&);
	friend istream& operator >>(istream&, Complex&);

	friend Complex operator + (const Complex&, const Complex&);
	friend Complex operator * (const Complex&, const Complex&);
	friend bool operator == (const Complex&, const Complex&);
};
