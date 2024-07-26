#include<iostream>
#include<string>
using namespace std;
/*
	Порядок вызова деструторов при множественном наследований
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
	~Car()
	{
		cout << "Вызван Destructor Car" << endl;
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
	~Airplain()
	{
		cout << "Вызван Destructor Airplain" << endl;
	}
};

class FlyingCar :public Airplain, public Car
{
public:
	FlyingCar()
	{
		cout << "Вызван Constructor FlyingCar" << endl;
	}
	~FlyingCar()
	{
		cout << "Вызван Destructor FlyingCar" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	FlyingCar fc;
	cout << endl << endl;
	/*fc.Drive();
	fc.Fly();

	Car* ptrC = &fc;

	Airplain* ptrA = &fc;*/
}