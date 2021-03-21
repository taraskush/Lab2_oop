#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Vector
{
	int size;
	int* N;
public:
	Vector(int n = 1)
		: size(n)
	{
		N = new int[size];
		for (int i = 0; i < size; i++)
			N[i] = 0;
	}
	~Vector()
	{
		delete[] N;
	}
	Vector(const Vector& a);
	friend int Scalar(const Vector& a, const Vector& b);
	friend bool operator == (const Vector&, const Vector&);
	int NormVec() { return abs(N[0] - N[size - 1]); }
	int& operator [](int i);
	operator string() const;
	Vector& operator =(const Vector& a);
	const int& operator [](const int i) const;
	friend istream& operator >>(istream& in, Vector& a);
	friend ostream& operator <<(ostream& out, const Vector& a);
};