﻿
/*					Рекурсия 				*/

#include<iostream>
using namespace std;

int foo(int a)
{
	if (a < 1)return 0;
	a--;
	cout << a << endl;
	return foo(a);
}

void main()
{
	setlocale(LC_ALL, "rus");


	foo(10);

}