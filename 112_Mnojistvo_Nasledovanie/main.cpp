#include<iostream>
#include<string>
using namespace std;
/*
	Множественное наследование одинаковые методы
*/

class Car
{
public:
	void Use()
	{
		cout << "Я еду!" << endl;
	}
};

class Airplain
{
public:
	void Use()
	{
		cout << "Я лечу!" << endl;
	}
};

class FlyingCar :public Airplain, public Car
{
public:
};
int main()
{
	setlocale(LC_ALL, "rus");
	FlyingCar fc;
	((Car)fc).Use();
	((Airplain)fc).Use();
	cout << endl << endl;

}