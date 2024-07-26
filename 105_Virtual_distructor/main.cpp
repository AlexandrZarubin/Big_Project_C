#include<iostream>
#include<string>
using namespace std;
/*
	Виртуалный деструктор
*/

class A
{
public:
	A()
	{
		cout << "Выделена динамичесская память, объект класса А" << endl;
	}
	virtual~A()
	{
		cout << "освобождена динамичесская память, объект класса А" << endl;
	}
};

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