#include<iostream>

using namespace std;

class Apple
{
public:
	static int count;
	Apple(int weight, string color)
	{
		this->color = color;
		this->wieght = weight;
		count++;
		id = count;
	}
	int GetId()const
	{
		return id;
	}
private:
	int wieght;
	string color;
	int id;
};
int Apple::count = 0;
void main()
{
	Apple apple(150, "Red");
	Apple apple2(100, "Green");
	Apple apple3(100, "Yellow");
	cout << apple.GetId() << endl;
	cout << apple2.GetId() << endl;
	cout << apple3.GetId() << endl;

	cout << Apple::count << endl;
}