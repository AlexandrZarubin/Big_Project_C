#include<iostream>
using namespace std;
/*
	Работа с динамической памятью. Оператор выделения памяти new и delete.
*/
void main()
{
	int* pa = new int;
	cout << "address\t" << pa << endl;
	cout << "value\t" << *pa << endl;
	*pa = 10;
	cout << "address\t" << pa << endl;
	cout << "value\t" << *pa << endl;
	cout << "delete\t";
	delete pa;
	cout << "address\t" << pa << endl;
	cout << "value\t" << *pa << endl;
}