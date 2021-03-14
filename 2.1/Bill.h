#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Bill
{
private:
	int callDuration;
	int pricePerMinute;
public:
	Bill();
	Bill(int value, int value2);
	Bill(const Bill& copy);
	int cost() { return callDuration * pricePerMinute; };
	int GetFirst() const { return callDuration; };
	int GetSecond() const { return pricePerMinute; };
	void SetFirst(int value);
	void SetSecond(int value);
	operator string() const;
	friend ostream& operator << (ostream& out, const Bill&);
	friend istream& operator >> (istream& in, Bill&);
	Bill& operator = (const Bill& b);
	Bill& operator --();
	Bill& operator ++();
	Bill operator --(int);
	Bill operator ++(int);
};