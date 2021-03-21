#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class Triad
{
private:
	int hours;
	int minutes;
	int seconds;
public:
	Triad();
	Triad(int a, int b, int c);
	Triad(const Triad&);
	void SetHours(int value) { hours = abs(value); }
	void SetMinutes(int value) { minutes = abs(value); }
	void SetSeconds(int value) { seconds = abs(value); }
	void incHours() { ++hours; }
	void incMinutes() { ++minutes; }
	void incSeconds() { ++seconds; }
	int GetHours() const { return hours; }
	int GetMinutes() const { return minutes; }
	int GetSeconds() const { return seconds; }
	friend ostream& operator <<(ostream& out, const Triad& a);
	friend istream& operator >>(istream& in, Triad& a);
	operator string() const;
	Triad& operator ++() { ++seconds; return *this; }
	Triad& operator --();
	Triad operator ++(int);
	Triad operator --(int);
};