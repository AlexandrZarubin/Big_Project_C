#include<iostream>
#include<string>
using namespace std;


/*
	Наследование шаблонов
*/
class Point
{
public:
	double x;
	double y;
	double z;

	Point() { x = y = z = 0; }
	Point(double x, double y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void Print() { cout << "X: " << x << "\ty: " << y << "\tz: " << z << endl; }
};
template<class T1>
class TypeSize
{
protected:
	T1 value;
public:
	TypeSize(T1 value)
	{
		this->value = value;
	}
	void DataTypeSize()
	{
		cout << "value: " << sizeof(value) << endl;
	}
};
template<class T1>
class TypeInfo :public TypeSize<T1>
{

public:
	TypeInfo(T1 value) :TypeSize<T1>(value)
	{

	}
	void ShowTypeName()
	{
		cout << "Название типа: " << typeid(this->value).name() << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	int a = 2;
	TypeInfo<double> c(a);
	c.ShowTypeName();
	c.DataTypeSize();
	Point D;
	TypeInfo<Point> d(D);
	d.ShowTypeName();
	d.DataTypeSize();
	return 0;
}