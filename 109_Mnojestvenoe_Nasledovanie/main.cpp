#include<iostream>
#include<string>
using namespace std;

/*
		Множественное наследование
*/
class Car
{
public:
	string str = "поле класса машина";
	void Drive()
	{
		cout << "Я еду!" << endl;
	}
};

class Airplain
{
public:
	string str2 = "поле класса самолет";
	void Fly()
	{
		cout << "Я лечу!" << endl;
	}
};

class FlyingCar :public Car, public Airplain
{
public:

};
int main()
{
	setlocale(LC_ALL, "rus");
	FlyingCar fc;
	fc.Drive();
	fc.Fly();

	Car* ptrC = &fc;

	Airplain* ptrA = &fc;
}