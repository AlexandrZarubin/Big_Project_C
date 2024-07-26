#include<iostream>

using namespace std;
/*
	this->
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
		cout << this << " constructor" << endl;

	}
	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		cout << this << " constructor" << endl;
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
	~Point()
	{
		cout << this << " Destructor" << endl;
	}
	int GetX()const { return x; }
	void SetX(int x) { this->x = x; }

	int GetY()const { return y; }
	void SetY(int y) { this->y = y; }

	void Print()
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}
};

int main(int argc, char* argv[])
{
	Point a;
	a.SetY(5);
	a.Print();
	return 0;
}