#include<iostream>
#include<string>
using namespace std;
/*
	Указатель на функцию
*/

//тип функций(*имя указателя)(спефикация параметров);
int Foo1(int a)
{
	return a - 1;
}
int Foo2(int a)
{
	return a * 2;
}

string GetDataFromBD()
{
	return "Data From BD";
}
string GetDataFromWebServer()
{
	return "Data From WebServer";
}
string GetDataFromAstral()
{
	return "Data From Astral";
}
void ShowInfo(string(*foo)())
{
	cout << foo() << endl;
}
void main()
{
	int (*fooPointer1)(int a);
	fooPointer1 = Foo1;
	cout << fooPointer1(5) << endl;
	fooPointer1 = Foo2;
	cout << fooPointer1(5) << endl;

	ShowInfo(GetDataFromBD);
	ShowInfo(GetDataFromWebServer);
	ShowInfo(GetDataFromAstral);

}