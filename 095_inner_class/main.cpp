#include<iostream>
#include<string>
using namespace std;
/*
		Вложенный класс
*/
class Image
{
	class Pixel
	{
		int r, g, b;
	public:
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
	static const int LENGTH = 5;
	Pixel pixels[LENGTH]
	{
		Pixel(0,4,64),
		Pixel(4,14,10),
		Pixel(111,4,24),
		Pixel(244,244,14),
		Pixel(111,179,64)
	};

public:
	void GetImageInfo()
	{
		for (int i = 0; i < LENGTH; i++)
		{
			cout << "#" << i << " " << pixels[i].GetInfo() << endl;
		}
	}
};
void main()
{
	Image img;
	img.GetImageInfo();

}