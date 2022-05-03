#include "Vector.h"

void Vector::SetX(double x)
{
	X = x;
}

void Vector::SetY(double y)
{
	Y = y;
}

double Vector::GetX()
{
	return X;
}

double Vector::GetY()
{
	return Y;
}

double Vector::lenght(double x, double y)
{
	return sqrt(x * x + y * y);
}

void Vector::print()
{
	cout << "(" << X << ", " << Y << ") - Координаты вектора" << endl;
}

double Vector::scalar(double x2, double y2)
{
	return this->X * x2 + this->Y * y2;
}