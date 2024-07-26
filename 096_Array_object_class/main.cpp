#include<iostream>
#include<string>
using namespace std;

/*
	Массив объектов классов
*/
class Pixel
{
	int r, g, b;
public:
	Pixel()
	{
		r = g = b = 0;
	}
	Pixel(int r, int g, int b)
	{
		this->r = r;
		this->g = g;
		this->b = b;
	}
	string GetInfo()
	{
		return "Pixel: r = " + to_string(r) + " g = " + to_string(g) + " b = " + to_string(b);
	}
};




void main()
{
	const int LENGTH = 5;
	Pixel p(11, 44, 55);
	Pixel arr[LENGTH]{
		Pixel(11,25,33),
		Pixel(3,55,3),
		Pixel(66,77,88),
		Pixel(6,7,9),
		Pixel(12,14,73),

	};
	Pixel* arr1 = new Pixel[LENGTH];
	delete[]arr1;
	cout << arr[0].GetInfo() << endl;
	arr[0] = Pixel(11, 159, 22);
	cout << arr[0].GetInfo() << endl;
	for (int i = 0; i < LENGTH; i++)
	{
		cout << arr[i].GetInfo() << endl;
	}
}