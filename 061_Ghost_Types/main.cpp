#include<iostream>
using namespace std;

/*
		Привидение типов
*/


void main()
{
	setlocale(LC_ALL, "rus");
	double a = 33.3;
	cout << (int)a << endl;
	cout << a << endl;
	cout << (char)a << endl;
	cout << (bool)a << endl;
	cout << a << endl;
	int b = 34.666;
	cout << b << endl;
	cout << (double)b << endl;//потеря данных


}