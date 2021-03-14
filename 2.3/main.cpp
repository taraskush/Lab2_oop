#include "Point.h"

int main()
{
	Point A;
	cin >> A;
	cout << "A " << A;


	Point B(1, 2);
	cout << "B " << B;


	Point C = Point(B);
	cout << "C " <<C;
    cout << '\n';

	cout << "B is equal C?" << endl;
	B.isEqual(C);
    cout << '\n';

    cout << "B is equal C?" << endl;
	A.toPolar();
    cout << '\n';

	cout << (string)A;
	cout << "++A " << ++A;
	cout << "A-- " << A--;
	cout << A;
}