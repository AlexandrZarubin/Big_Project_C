#include<iostream>

using namespace std;

/*
		Ссылки
*/
void main()
{
	setlocale(LC_ALL, "rus");

	int a = 5;
	int* pa = &a;//*-создание указателя, &-взятия адреса

	int& aRef = a;//& - создание сылки

	cout << "*pa\t" << *pa << endl;
	cout << "*pa\t" << pa << endl;
	pa++;//+4 байта
	cout << "*pa\t" << pa << endl;


	cout << "&aRef\t" << aRef << endl;
	aRef++;
	cout << "&aRef\t" << aRef << endl;

	int& aRef1 = *pa;
	int* ppa = &aRef;
}