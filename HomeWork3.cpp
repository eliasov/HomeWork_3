#include <iostream>


using namespace std;

extern int a, b, c, d;



int main()
{
	// №1. и 4 задание. Программа, вычисляющая выражение a * (b + (c / d)) и выводящую результат с плавающей точкой, где a, b, c, d – целочисленные константы.

	setlocale(LC_ALL, "");

	const float var = a * (b + (static_cast<float> (c) / d));
	cout << "Задание 1 = " << var << endl;


	// №2 Задание 2

	int num;
	cout << "Enter a Number: ";
	cin >> num;
	const int number = (num <= 21) ? (num - 21) : ((num - 21) * 2);
	cout << "Задание 2 = " << number << endl;

	// №2 Задание 3

	int Array[3][3][3] = {0}, *pArr = nullptr;
	pArr = &Array[1][1][1];
	*pArr = 2000000;
	cout << "Задание 3 = " << Array[1][1][1] << endl;
	cout << "Задание 3 = " << *pArr << endl;


	return 0;
}



