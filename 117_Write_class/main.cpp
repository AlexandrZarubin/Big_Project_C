#include<iostream>
#include<string>
#include<fstream>
using namespace std;
/*
	Чтение\сохранение объектов класса в фаил
*/

class Point
{


public:
	int x;
	int y;
	int z;

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
	void Print()
	{
		cout << "X: " << x << "\ty: " << y << "\tz: " << z << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	string path = "muFile.txt";


	/*Point point(5555, 1000, 4600);
	//Point
	//point.Print();


	ofstream fout;
	fout.open(path, ofstream::app);
	if (!fout.is_open())
	{
		cout << "Ошибка открытия фаила!" << endl;
	}
	else
	{
		cout << "Фаил открыт!" << endl;
		fout.write((char*)&point, sizeof(Point));
	}

	fout.close();
	*/

	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Ошибка открытия фаила!" << endl;
	}
	else
	{
		cout << "Фаил открыт!" << endl;
		Point pnt;
		while (fin.read((char*)&pnt, sizeof(Point)))
		{
			pnt.Print();
		}
	}

	return 0;
}