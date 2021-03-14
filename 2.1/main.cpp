#include "Bill.h"

Bill makeBill(int callDuration, int pricePerMinute)
{
	Bill bb(callDuration, pricePerMinute);
	return bb;
}

int main()
{
	Bill b = makeBill(2, 3);
	cout << "До оплати " << b.cost() << endl;

	Bill b2;
	cout << b2;

	Bill b3(5, 5);
    cout << "До оплати " << b3.cost() << endl;

	Bill b4;
	cin >> b4;
    cout << "До оплати " << b4.cost() << endl;

	--b;
	cout << b;
}