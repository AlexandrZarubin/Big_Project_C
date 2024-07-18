#include<iostream>

using namespace std;

void main()
{
	int a = 1, b;
	//a = a + 5;
	cout << a << endl;
	b = ++a * a++;
	cout << b << endl;
	cout << a << endl;
	//посвфиксная a++ сначала выводит потом деиствие посфиксная после 
	//префиксаная ++a сначала деиствие потом вывод   префиксная перед
}