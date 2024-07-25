#include<iostream>
using namespace std;
//#define lesson
//#define DZ
#define DZ2
/*
		Передача аргументов по указателю.
		Как вернуть два и более значения из функций
*/

void Foo(int* pA)
{
	(*pA)++;
}

/*
		Передача аргументов по указателю.
		Как вернуть два и более значения из функций
*/

void Foo2(int* pA, int* pB, int* pC)
{
	(*pA) = 555;
	(*pB)++;
	(*pC) = -20;

}

/*
		написать функцию которая меняет местами значения 2-х переменных
*/
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void main()
{
#ifdef lesson
	int a = 0;
	cout << a << endl;
	Foo(&a);
	cout << a << endl;
#endif // lesson


#ifdef DZ
	setlocale(LC_ALL, "rus");
	int var1 = 31;
	int var2 = 64;
	cout << "var1\t" << var1 << endl;
	cout << "var2\t" << var2 << endl;

	cout << "Swap" << endl;
	Swap(&var1, &var2);

	cout << "var1\t" << var1 << endl;
	cout << "var2\t" << var2 << endl;
#endif // DZ
	int a, b, c = 1;
	a = b = 0;
#ifdef DZ2
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << " Foo " << endl;
	Foo2(&a, &b, &c);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
#endif // dz2

}