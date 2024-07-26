#include<iostream>
using namespace std;
/*
	Вызов конструктора базового класса при наследований
*/

class A
{
	string msg;
public:
	A()
	{
		msg = "Пустое Сообщение";
		cout << "Вызвался конструктор сласса А" << endl;
	}
	A(string msg)
	{
		this->msg = msg;
	}
	A(string msg, int a)
	{
		this->msg = msg;
	}
	/*~A()
	{
		cout << "Вызвался деструктор сласса А" << endl;
	}*/
	void PrintMsg()
	{
		cout << msg << endl;
	}
};
class B :public A
{
public:
	B() :A("Новое сообщение", 2)
	{
		cout << "Вызвался конструктор сласса B" << endl;
	}

};


int main()
{
	setlocale(LC_ALL, "rus");
	B value;
	value.PrintMsg();
	//A a;
	//a.PrintMsg();
}