#include "Vector.h"

int main()
{
	Vector a(4);
	cin >> a;
	cout << "a: " << a;

	Vector b(4);
	cin >> b;
	cout << "b: "<< b;

	cout << "Скалярний добуток a, b: " << Scalar(a, b) << endl;
	if (a == b)
		cout << "Вектор а еквівалентний вектору b" << endl;
	else
		cout << "Вектор а не еквівалентний вектору b" << endl;

	cout << "Норма вектора a: " << a.NormVec() << endl;
	cout << a[1] << endl;
	cout << b[1] << endl;

	b[1] = b[4];
	cout << "b: " << b;
	b[1] = 1;
	cout << "b: " << (string)b;
	a = b;
	cout << "a: " << a;
}