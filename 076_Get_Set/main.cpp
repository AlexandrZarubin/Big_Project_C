#include<iostream>
#include<string>
using namespace std;
/*
	геттеры и сеттеры
	инкапсуляция
*/


class Point
{
private:
	int x;
	int y;
public:
	int GetX()const { return x; }
	void SetX(int valueX) { x = valueX; }

	int GetY()const { return y; }
	void SetY(int valueY) { y = valueY; }

	void Print()
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}
};
int main()
{
	Point a;
	a.SetY(11);
	a.SetX(5);
	a.Print();
	return 0;
}