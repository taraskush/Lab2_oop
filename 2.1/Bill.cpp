#include "Bill.h"
Bill::Bill()
{
	callDuration = 0;
	pricePerMinute = 0;
}

Bill::Bill(int value, int value2)
{
	if (value >= 0 && value2 >= 0)
	{
		callDuration = value;
		pricePerMinute = value2;
	}
	else
        throw invalid_argument( "received negative value" );
}

Bill::Bill(const Bill& copy)
{
	callDuration=copy.callDuration;
	pricePerMinute = copy.pricePerMinute;
}

Bill::operator string() const
{
	stringstream ss;
	ss << "Час розмови: " << callDuration << "   Ціна за хвилину: " << pricePerMinute << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Bill& b)
{
	out << (string)b;
	return out;
}

istream& operator >> (istream& in, Bill& b)
{
	do {
		cout << "Час розмови: "; in >> b.callDuration;
		cout << "Ціна за хвилину:  "; in >> b.pricePerMinute;
	} while (b.callDuration < 0 || b.pricePerMinute < 0);
	cout << endl;
	return in;
}

void Bill::SetFirst(int value)
{
	if (value >= 0)
		callDuration = value;
	else
		callDuration = 0;
}

void Bill::SetSecond(int value)
{
	if (value >= 0)
		pricePerMinute = value;
	else
		pricePerMinute = 0;
}

Bill& Bill::operator = (const Bill& b)
{
	callDuration = b.callDuration;
	pricePerMinute = b.pricePerMinute;
	return *this;
}

Bill& Bill::operator --()
{
	if (callDuration>0)
		--callDuration;
	return *this;
}

Bill& Bill::operator ++()
{
	++callDuration;
	return *this;
}

Bill Bill::operator --(int)
{
	Bill a(*this);
	if (callDuration > 0)
		callDuration--;
	return a;
}

Bill Bill::operator ++(int)
{
	Bill a(*this);
	pricePerMinute++;
	return a;
}
