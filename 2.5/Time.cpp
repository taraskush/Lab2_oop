#include "Time.h"

Time::Time()
{
	time.SetHours(0);
	time.SetMinutes(0);
	time.SetSeconds(0);
}

Time::Time(const Triad& a)
{
	time.SetHours(a.GetHours());
	time.SetMinutes(a.GetMinutes());
	time.SetSeconds(a.GetSeconds());
}

Time::Time(const Time& a)
{
	time.SetHours(a.GetHours());
	time.SetMinutes(a.GetMinutes());
	time.SetSeconds(a.GetSeconds());
	Stabilizer();
}

void Time::Stabilizer()
{
	SecondsConverter();
	MinutesConverter();
	HoursConverter();
}

void Time::HoursConverter()
{
	if (time.GetHours() >= 24)
		time.SetHours(time.GetHours() % 24);
}

void Time::MinutesConverter()
{
	while (time.GetMinutes() >= 60)
	{
		time.SetMinutes(time.GetMinutes() - 60);
		incHours();
	}
}

void Time::SecondsConverter()
{
	while (time.GetSeconds() >= 60)
	{
		time.SetSeconds(time.GetSeconds() - 60);
		incMinutes();
	}
}

void Time::incHours()
{
	time.SetHours(time.GetHours() + 1);
	HoursConverter();
}

void Time::incMinutes()
{
	time.SetMinutes(time.GetMinutes() + 1);
	MinutesConverter();
}

void Time::incSeconds()
{
	time.SetSeconds(time.GetSeconds() + 1);
	SecondsConverter();
}

void Time::addSeconds()
{
	int value;
	cout << "Enter seconds to add: "; cin >> value;
	time.SetSeconds(time.GetSeconds() + value);
	Stabilizer();
}

void Time::addMinutes()
{
	int value;
	cout << "Enter minutes to add: "; cin >> value;
	time.SetMinutes(time.GetMinutes() + value);
	Stabilizer();
}

void Time::SetHours(int value)
{
	time.SetHours(value);
	HoursConverter();
}

void Time::SetMinutes(int value)
{
	time.SetMinutes( value);
	MinutesConverter();
}

void Time::SetSeconds(int value)
{
	time.SetSeconds(value);
	SecondsConverter();
}

ostream& operator<<(ostream& out, const Time& a)
{
	out << "Hours: " << a.GetHours() << " minutes: " << a.GetMinutes() << " seconds: " << a.GetSeconds() << endl;
	return out;
}

istream& operator>>(istream& in, Time& a)
{
	int b;
	in >> a.time;
	a.Stabilizer();
	return in;
}

Time::operator string() const
{
	stringstream ss;
	ss << *this;
	return ss.str();
}

Time& Time::operator ++()
{
	incSeconds();
	return *this;
}

Time& Time::operator --()
{
	if (GetSeconds() != 0)
		SetSeconds(GetSeconds()-1);
	else
		if (GetMinutes() != 0)
			SetMinutes(GetMinutes() - 1);
		else
			if (GetHours() != 0)
				SetHours(GetHours() - 1);
			else
				cout << "Hours: 0, minutes: 0, seconds: 0" << endl;
	return *this;
}

Time Time::operator ++(int)
{
	Time tmp(*this);
	incSeconds();
	return tmp;
}

Time Time::operator --(int)
{
	Time tmp(*this);
	if (GetSeconds() != 0)
		SetSeconds(GetSeconds() - 1);
	else
		if (GetMinutes() != 0)
			SetMinutes(GetMinutes() - 1);
		else
			if (GetHours() != 0)
				SetHours(GetHours() - 1);
			else
				cout << "Hours: 0, minutes: 0, seconds: 0" << endl;
	return tmp;
}