#include "Vector.h"

Vector::Vector(const Vector& a)
{
	size = a.size;
	N = new int[size];
	for (int i = 0; i < size; i++)
		N[i] = a.N[i];
}
int Scalar(const Vector& a, const Vector& b)
{
	int result = 0;
	if (a.size != b.size)
		cout << "Вектори не одинакового розміру" << endl;
	else
		for (int i = 0; i < a.size; i++)
		{
			result += a.N[i] * b.N[i];
		}
	return result;
}
istream& operator >>(istream& in, Vector& a)
{
	for (int i=0; i < a.size; i++)
	{
		cout << "Введіть N[" << i + 1 << "]: "; in >> a.N[i];
	}
	cout << endl;
	return in;
}
ostream& operator <<(ostream& out, const Vector& a)
{
	out << "N[" << a.size << "]: {";
	for (int i = 0; i < a.size; i++)
	{
		out << a.N[i];
		if (i + 1 != a.size)
		{
			out << ",";
		}
		else
			out << "}" << endl;
	}
	return out;
}
bool operator == (const Vector& a, const Vector& b)
{
	if (a.size != b.size)
		return false;
	else
		for (int i = 0; i < a.size; i++)
		{
			if (a.N[i] != b.N[i])
			{
				return false;
			}
		}
	return true;
}
int& Vector::operator [](const int i)
{
	int x = 0;
	if (i < 1)
		return x;
	else
		return N[i - 1];
}
const int& Vector::operator [](const int i) const
{
	if (i < 1)
		return 0;
	else
		return N[i - 1];
}
Vector::operator string() const
{
	stringstream ss;
	ss << *this;
	return 	ss.str();
}
Vector& Vector::operator =(const Vector& a)
{
	if (this == &a)
		return *this;
	if (N)
		delete[] N;
	if (a.N)
	{
		size = a.size;
		int* N = new int[size];
		for (int i = 0; i < size; i++)
			N[i] = a.N[i];
	}
	else
		N = 0;
	return *this;
}