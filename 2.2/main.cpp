#include <iostream>
#include "Complex.h"
#define TESTING

using namespace std;

Complex makeComplex(double a, double b)
{
	Complex cmpl(a,b);
	return cmpl;
}

#ifdef TESTING
int main() {
	Complex a;
	cin >> a;
    cout << "Complex number a: " << endl;
	cout << a << endl;

	Complex b(1, 1);
    cout << "Complex number b: " << endl;
	cout << b << endl;

	Complex c = makeComplex(1, 1);
	cout << endl;
    cout << "Complex number c: " << endl;
	cout << c << endl;
	cout << endl;


	if (b == c)
		cout << "Complex number b is equal complex number c" << endl;
	else
		cout << "Complex number b is not equal complex number c" << endl;
	cout << endl;
	if (a <= b)
		cout << "Complex number a is <= complex number b" << endl;
	else
		cout << "Complex number a is not <= complex number b" << endl;
	cout << endl;
	if (a > c)
		cout << "Complex number a is > complex number c" << endl;
	else
		cout << "Complex number a is not > complex number c" << endl;
}
#endif
