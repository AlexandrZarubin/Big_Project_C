#include<iostream>
using namespace std;
/*
	Порядок вызова конструкторов при наследований c++
*/
class A
{
public:
	A()
	{
		cout << "Вызвался конструктор сласса А" << endl;
	}
};
class B :public A
{
public:
	B()
	{
		cout << "Вызвался конструктор сласса B" << endl;
	}
};
class C :public B
{
public:
	C()
	{
		cout << "Вызвался конструктор сласса C" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	C value;
}