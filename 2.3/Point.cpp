#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(double a, double b)
{
	x = a;
	y = b;
}

Point::Point(const Point& A)
{
	x = A.x;
	y = A.y;
}

ostream& operator << (ostream& out, const Point& A)
{
	return out << string(A);
}

istream& operator >>(istream& in, Point& A)
{
	cout << "Enter x: "; in >> A.x;
	cout << "Enter y: "; in >> A.y;
	cout << endl;
	return in;
}

Point::operator string() const
{
	stringstream ss;
	ss << "x = " << x << "  y = " << y << endl;
	return ss.str();
}

void Point::toPolar() const
{
	const double PI = 3.141592653589793;
	double angle = (atan(y * 1.0 / x) * 180) / PI;
	cout << " Polar coordinates: " << angle << " angles" << endl;
	cout << " Distance: " << Distance() << endl;
}

void Point::isEqual(const Point& A) const
{
	if (x == A.x && y == A.y)
		cout << " Coordinates are equal" << endl;
	else
		cout << " Coordinates are not equal" << endl;
}

Point& Point::operator --()
{
	--x;
	return *this;
}

Point& Point::operator ++()
{
	++x;
	return *this;
}

Point Point::operator --(int)
{
	Point tmp(*this);
	y--;
	return tmp;
}

Point Point::operator ++(int)
{
	Point tmp(*this);
	y++;
	return tmp;
}