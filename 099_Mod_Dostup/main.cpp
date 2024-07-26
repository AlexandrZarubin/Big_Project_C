#include<iostream>
using namespace std;
/*
	Спефикаторы доступа при наследований
*/

class A
{
public:
	string msgOne = "Сообщение один";
private:
	string msgTwo = "Сообщение два";
protected:
	string msgThree = "Сообщение три";
};
class B :public A
{
public:
	void PrintMsg()
	{
		cout << msgOne << endl;
		//cout << msgTwo << endl;
		cout << msgThree << endl;
	}
};
void main()
{
	setlocale(LC_ALL, "rus");
	B b;
	b.PrintMsg();
}