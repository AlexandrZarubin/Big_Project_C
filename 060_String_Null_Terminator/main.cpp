#include<iostream>
using namespace std;

/*
	Строки в с++
	строковые массивы с++
*/
void main()
{
	setlocale(LC_ALL, "rus");

	char symbol = '#';


	char arrSymbol0[]{ 'H','e','l','l','o' };
	char arrSymbol1[]{ 'H','e','l','l','o','\0' };
	char arrSymbol2[] = "Hello";
	cout << arrSymbol0 << endl;
	cout << arrSymbol1 << endl;
	cout << arrSymbol2 << endl;
	cout << strlen(arrSymbol0) << endl;
	cout << strlen(arrSymbol1) << endl;
	cout << strlen(arrSymbol2) << endl;


}