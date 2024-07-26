#include<iostream>
#include<string>
using namespace std;

/*
Перегрузка оператора +
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

	Point operator+(const Point& other)
	{
		Point temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;
		return temp;
	}
};


int main()
{
	Point a(5, 1);
	Point b(9, 4);
	//Point c = a.operator+(b);
	Point c = a + b;
	return 0;
}