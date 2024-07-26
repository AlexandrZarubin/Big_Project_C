#include<iostream>

using namespace std;
/*
	Перегрузка конструктора
*/
class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}
	Point(int valueX, bool boolean)
	{
		x = valueX;
		if (boolean)
		{
			y = 1;
		}
		else
		{
			y = -1;
		}
	}
	int GetX()const { return x; }
	void SetX(int valueX) { x = valueX; }

	int GetY()const { return y; }
	void SetY(int valueY) { y = valueY; }

	void Print()
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}
};
int main(int argc, char* argv[])
{
	Point a;
	a.Print();
	Point b(5, 44);
	b.Print();
	Point c(5, false);
	c.Print();
	return 0;
}