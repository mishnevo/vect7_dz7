#include "Vector.h"

int main()
{
	double x, y;
	setlocale(LC_ALL, "Russian");
	cout << "Введите координату Х первого вектора: " << endl;
	cin >> x;
	cout << "Введите координату У первого вектора: " << endl;
	cin >> y;
	Vector vector(x, y);
	vector.print();
	cout << "Длина первого вектора: " << vector.lenght(x, y) << endl << endl;
	cout << "Введите координату У второго вектора: " << endl;
	cin >> x;
	cout << "Введите координату У второго вектора: " << endl;
	cin >> y;
	Vector vector1(x, y);
	vector1.print();
	cout << "Длина второго вектора: " << vector1.lenght(vector1.GetX(), vector1.GetY()) << endl;
	cout << "Скалярное произведение: ";
	cout << vector.scalar(vector1.GetX(), vector1.GetY());
}