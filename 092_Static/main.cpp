#include<iostream>
#include<string>
using namespace std;

/*
	static
*/


class Apple
{
public:
	static int count;
	Apple(int weight, string color)
	{
		this->color = color;
		this->wieght = weight;
		count++;
	}
private:
	int wieght;
	string color;

};
int Apple::count = 0;
int main(int argc, char* argv[])
{
	Apple apple(150, "Red");
	Apple apple2(100, "Green");
	Apple apple3(100, "Yellow");
	cout << Apple::count << endl;
	/*cout << apple.count << endl;*/
	return 0;
}
