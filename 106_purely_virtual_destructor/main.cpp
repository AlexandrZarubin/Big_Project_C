#include<iostream>
#include<string>
using namespace std;
/*
	чисто виртуалный деструктор
*/

class A
{
public:
	A()
	{
		cout << "Выделена динамичесская память, объект класса А" << endl;
	}
	virtual~A() = 0;
};
A::~A() {};

class B :public A
{
public:
	B()
	{
		cout << "Выделена динамичесская память, объект класса B" << endl;
	}
	~B()override
	{
		cout << "освобождена динамичесская память, объект класса B" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	A* bptr = new B;
	delete bptr;
	return 0;
}