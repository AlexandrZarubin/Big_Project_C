#include<iostream>
#include<string>
using namespace std;
/*
	Интерфейсы
*/
class IBicycle
{
public:
	void virtual TwistTheWheel() = 0;
	void virtual Ride() = 0;
};
class SimpleBicycle :public IBicycle
{
public:
	void TwistTheWheel()override
	{
		cout << "метод TwistTheWhile() SimpleBicycle " << endl;
	}
	void Ride()override
	{
		cout << "метод Ride() SimpleBicycle " << endl;
	}
};
class SportBicycle :public IBicycle
{
public:
	void TwistTheWheel()override
	{
		cout << "метод TwistTheWhile() SportBicycle " << endl;
	}
	void Ride()override
	{
		cout << "метод Ride() SportBicycle " << endl;
	}
};

class Human
{
public:
	void RideOn(IBicycle& bicycle)
	{
		cout << "Крутим руль " << endl;
		bicycle.TwistTheWheel();
		cout << endl << "Поехали" << endl;
		bicycle.Ride();
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	SportBicycle sportb;
	SimpleBicycle sb;
	Human h;
	h.RideOn(sb);
	h.RideOn(sportb);
	return 0;
}