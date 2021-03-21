#pragma once
#include "Triad.h"
class Time
{
private:
	Triad time;
public:
	Time();
	Time(const Triad& a);
	Time(const Time& a);
	void incHours();
	void incMinutes();
	void incSeconds();
	void HoursConverter();
	void MinutesConverter();
	void SecondsConverter();
	void addSeconds();
	void addMinutes();
	void SetHours(int value);
	void SetMinutes(int value);
	void SetSeconds(int value);
	int GetHours() const { return time.GetHours(); }
	int GetMinutes() const { return time.GetMinutes(); }
	int GetSeconds() const { return time.GetSeconds(); }
	void Stabilizer();
	friend ostream& operator<<(ostream& out,const Time& a);
	friend istream& operator>>(istream& in, Time& a);
	operator string() const;
	Time& operator ++();
	Time& operator --();
	Time operator ++(int);
	Time operator --(int);
};