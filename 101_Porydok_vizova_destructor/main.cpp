#include<iostream>
using namespace std;
/*
	Порядок вызова деструторов при наследований
*/

class A
{
public:
	A()
	{
		cout << "Вызвался конструктор сласса А" << endl;
	}
	~A()
	{
		cout << "Вызвался деструктор сласса А" << endl;
	}
};
class B :public A
{
public:
	B()
	{
		cout << "Вызвался конструктор сласса B" << endl;
	}
	~B()
	{
		cout << "Вызвался деструктор сласса B" << endl;
	}
};
class C :public B
{
public:
	C()
	{
		cout << "Вызвался конструктор сласса C" << endl;
	}
	~C()
	{
		cout << "Вызвался деструктор сласса C" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	C value;
}