//#include<iostream>
#include"Sum.h"
#include"MyClass.h"
using namespace std;

/*
	многофаиловый проект
*/
int main()
{
	setlocale(LC_ALL, "rus");
	cout << Sum(5, 5) << endl;
	MySpace::MyClass m;
	m.PrintMessage("Hello World");

	return 0;
}