 
#include "Triad.h"
Triad::Triad()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}
Triad::Triad(int a, int b, int c)
{
	hours = abs(a);
	minutes = abs(b);
	seconds = abs(c);
}
Triad::Triad(const Triad& a)
{
	hours = a.hours;
	minutes = a.minutes;
	seconds = a.seconds;
}
ostream& operator <<(ostream& out, const Triad& a)
{
	out << " The first number: " << a.hours << " second: " << a.minutes << " third: " << a.seconds << endl;
	return out;
}
istream& operator >>(istream& in, Triad& a)
{
	cout << "Enter the first number: "; in >> a.hours;
	cout << "Enter the second number: "; in >> a.minutes;
	cout << "Enter the third: "; in >> a.seconds;
	return in;
}
Triad::operator string() const
{
	stringstream ss;
	ss << *this;
	return ss.str();
}
Triad& Triad::operator--()
{
	if (seconds != 0)
		--seconds;
	else
		if (minutes != 0)
			--minutes;
		else
			if (hours != 0)
				--hours;
			else
				cout << "The first number: 0, second: 0, third: 0" << endl;
	return *this;
}
Triad Triad::operator ++(int)
{
	Triad tmp(*this);
	++seconds;
	return tmp;
}
Triad Triad::operator --(int)
{
	Triad tmp(*this);
	if (seconds != 0)
		--seconds;
	else
		if (minutes != 0)
			--minutes;
		else
			if (hours != 0)
				--hours;
			else
				cout << "Hours: 0, minutes: 0, seconds: 0" << endl;
	return tmp;
}