#include<iostream>
using namespace std;
/*
		Возврат нескольких значений функций через ссылки
*/

void Foo(int& a, int& b, int& c)
{
	a = 10;
	b *= 2;
	c -= 100;
}
void main()
{
	int a = 0, b = 4, c = 34;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << endl;
	Foo(a, b, c);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

}