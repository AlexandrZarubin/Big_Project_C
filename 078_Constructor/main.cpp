#include<iostream>
#include<string>
using namespace std;

/*
	конструктор класса
	с параметрами
	конструктор по умолчанию
*/
class Point
{
private:
	int x;
	int y;
public:
	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
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
	Point a(5, 44);
	a.Print();
	Point b(77, 9);
	b.Print();

	return 0;
}