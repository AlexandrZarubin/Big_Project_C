#include<iostream>

using namespace std;

void foo(int a = 5, double b = 0.5);

void main()
{
	setlocale(LC_ALL, "rus");

	foo();


}

void foo(int a, double b)
{
	for (int i = 0; i < a; i++)
	{
		cout << "Я функция, меня вызвали! " << endl;
	}
}