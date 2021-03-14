#include <iostream>
#include <string>

using namespace std;

class Complex
{
	double re, im;
public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);

	void SetRe(double);
	void SetIm(double);

	double GetRe();
	double GetIm();

	Complex& operator = (const Complex&);
	operator string() const;
	friend bool operator != (const Complex&, const Complex&);
	friend bool operator == (const Complex&, const Complex&);
	friend bool operator > (const Complex&, const Complex&);
	friend bool operator < (const Complex&, const Complex&);
	friend bool operator >= (const Complex&, const Complex&);
	friend bool operator <= (const Complex&, const Complex&);
	friend ostream& operator << (ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);
};