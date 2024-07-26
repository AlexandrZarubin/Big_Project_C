#include<iostream>
#include<string>
using namespace std;

/*
	Модификаторы доступа
	public:
	private:
	protected:
*/

class Point
{
private:
	int x;
	int y;
	int z;
	void PrintY()
	{
		cout << "Y = " << y << endl;
	}
public:
	void Print()
	{
		cout << "y = " << y << "\nx = " << x << "\nz = " << z << endl;
		PrintY();
	}
};

int main()
{
	Point a;
	a.Print();

}