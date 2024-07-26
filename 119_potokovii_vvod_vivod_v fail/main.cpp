#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
using namespace std;
/*
	Перегрузка операторов потокового ввода вывода
	<<
	>>
*/

class Point
{
	int x;
	int y;
	int z;
	friend ostream& operator<<(ostream& os, const Point& point);
	friend istream& operator>>(istream& is, Point& point);
public:


	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	/*void Print()
	{
		cout << "X: " << x << "\ty: " << y << "\tz: " << z << endl;
	}*/

};

ostream& operator<<(ostream& os, const Point& point)
{
	os << point.x << " " << point.y << " " << point.z;
	return os;
}
istream& operator>>(istream& is, Point& point)
{
	is >> point.x >> point.y >> point.z;
	return is;
}
int main()
{
	setlocale(LC_ALL, "rus");
	string path = "myFile.txt";
	/*Point p(1, 2, 3);*/

	//cout << p;
	/*int a = 5;
	cout << a;*/

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);
	if (!fs.is_open())
	{
		cout << "Ошибка открытия фаила!" << endl;
	}
	else
	{
		cout << "Фаил открыт!" << endl;
		/*fs << p << "\n";*/

		while (true)
		{
			Point p;
			fs >> p;
			if (fs.eof())
			{
				break;
			}
			cout << p << endl;
		}

	}

	fs.close();
	return 0;
}