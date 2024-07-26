#include<iostream>

using namespace std;
/*
	геттеры и сеттеры
	инкапсуляция
*/

class CoffeeGrinder
{
private:
	bool CheckVoltage()
	{
		return false;
	}
public:
	void start()
	{

		if (CheckVoltage())
		{
			cout << "VjuHHH!" << endl;
		}
		else
		{
			cout << "Beep Beep" << endl;
		}
	}
};

int main()
{
	CoffeeGrinder a;
	a.start();

}