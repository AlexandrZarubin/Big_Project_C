#include<iostream>
#include<string>
using namespace std;
/*
	Порядок вызова конструторов при множественном наследований
*/

class Car
{
public:
	//string str = "поле класса машина";
	Car()
	{
		cout << "Вызван Constructor Car" << endl;
	}
	void Drive()
	{
		cout << "Я еду!" << endl;
	}
};

class Airplain
{
public:
	//string str2 = "поле класса самолет";
	Airplain()
	{
		cout << "Вызван Constructor Airplain" << endl;
	}
	void Fly()
	{
		cout << "Я лечу!" << endl;
	}
};

class FlyingCar :public Airplain, public Car
{
public:
	FlyingCar()
	{
		cout << "Вызван Constructor FlyingCar" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	FlyingCar fc;
	/*fc.Drive();
	fc.Fly();

	Car* ptrC = &fc;

	Airplain* ptrA = &fc;*/
}