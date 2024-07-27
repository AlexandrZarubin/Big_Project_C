#include<iostream>
#include<string>
using namespace std;

/*
	шаблоны классов
*/

class Point
{
public:
	int x;
	int y;
	int z;

	Point() { x = y = z = 0; }
	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void Print() { cout << "X: " << x << "\ty: " << y << "\tz: " << z << endl; }
};
//
template<typename T1>
class MyClass
{
	T1 value;
public:
	MyClass(T1 value)
	{
		this->value = value;

	}
	void DataTypeSize()
	{
		cout << "value: " << sizeof(value) << endl;
	}
	//T Foo() { return value; }
};

int main()
{
	int a = 5;
	double l = 4.45;
	MyClass<int> c(a);
	c.DataTypeSize();
	Point d;
	MyClass<Point>k(d);
	k.DataTypeSize();
	//int b = c.Foo();
	return 0;
}