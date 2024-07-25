#include<iostream>
using namespace std;
/*
		Сылочные параметрыю Передача аргументов по ссылке
*/
void Foo(int a)
{
	cout << "input value = " << a << endl;
	a = 1;
}
void Foo2(int& a)
{
	cout << "input value = " << a << endl;
	a = 2;
}
void Foo3(int* a)
{
	cout << "input value = " << *a << endl;
	*a = 3;
}
//#define DZ
/*
		написать функцию которая меняет местами значения 2-х переменных
*/

template<typename T>void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void main()
{
	int value = 5;
	cout << "Value\t" << value << endl << endl;

	cout << "Foo = a = 1;" << endl;
	Foo(value);
	cout << "output value = " << value << endl << endl;

	cout << "Foo2 = &a = 2" << endl;
	Foo2(value);
	cout << "otput value = " << value << endl << endl;

	cout << "Foo3 = *a = 3" << endl;
	Foo3(&value);
	cout << "output value = " << value << endl << endl;

#ifdef DZ
	setlocale(LC_ALL, "rus");
	string var1 = "Привет";
	string var2 = "Пока";
	cout << "var1\t" << var1 << endl;
	cout << "var2\t" << var2 << endl;

	cout << "Swap" << endl;
	Swap(var1, var2);

	cout << "var1\t" << var1 << endl;
	cout << "var2\t" << var2 << endl;

#endif

}