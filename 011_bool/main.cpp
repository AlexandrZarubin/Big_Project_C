#include<iostream>

using namespace std;

int main()
{
	/*
	*  1.операторы сравнения
	< - меньше
	> - больше
	>= - больше/равно
	<= - меньше равно
	   2. операторы равенства
	== - равно
	!= - не равно
	   3.логические операторы объединения и отрицательная инверсия
	&& - и
	|| - или
	!= - не
	*/

	cout << (5 < 5) << endl;
	cout << (5 <= 5) << endl;
	cout << (4 <= 5) << endl;
	cout << (4 >= 5) << endl << endl;
	cout << (4 == 5) << endl;
	cout << (5 == 5) << endl << endl;
	int a = 2, b = 3;
	cout << (a == b) << endl;
	cout << (a >= b) << endl;
	cout << (a <= b) << endl;
	cout << (a != b) << endl << endl;
	a = 3;
	b = 3;
	cout << !(a == b) << endl;
	cout << ((a == b) && (5 > 4)) << endl;
	cout << ((a == b) || (5 < 4)) << endl;
	return 0;
}