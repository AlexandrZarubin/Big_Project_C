#include<iostream>
#include<string>
using namespace std;

/*
	Перегрузка оператора == и !=
*/

class Point
{
private:
	int x;
	int y;
public:
	int GetX()const { return x; }
	void SetX(int x) { this->x = x; }

	int GetY()const { return y; }
	void SetY(int y) { this->y = y; }

	Point()
	{
		x = 0;
		y = 0;
		cout << this << " constructor" << endl;

	}
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
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

	void Print()
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}

	bool operator ==(const Point& other)
	{
		/*
		if (this->x==other.x&&this->y==other.y)
		{
			return true;
		}
		else
		{
			return false;
		}
		*/
		return this->x == other.x && this->y == other.y;
	}
	bool operator !=(const Point& other)
	{

		return !(this->x == other.x && this->y == other.y);
	}
};


int main()
{
	Point a(5, 1);
	Point b(9, 4);
	bool result = a != b;;
	/*if (a == b)
	{
		result = true;
	}
	else {
		result = false;
	}*/
	return 0;
}