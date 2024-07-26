#include<iostream>

using namespace std;
class Apple
{
public:
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
	static int Get_count()
	{
		return count;
	}
	static void ChamgeColor(Apple& apple, string color)
	{
		apple.color = color;
	}
	void ChamgeColorNoStatic(string color)
	{
		this->color = color;
	}
private:
	int wieght;
	string color;
	int id;
	static int count;
};
int Apple::count = 0;

void main()
{
	Apple apple(150, "Red");
	apple.ChamgeColor(apple, "Green");
	Apple::ChamgeColor(apple, "red");
	apple.ChamgeColorNoStatic("Green");
	//Apple apple2(100, "Green");
	//Apple apple3(100, "Yellow");
	//cout << apple.GetId() << endl;
	//cout << apple2.GetId() << endl;
	//cout << apple3.GetId() << endl;
	//cout << endl;
	////Apple::count = 5;
	////cout << Apple::count << endl;
	//cout << Apple::Get_count() << endl;
	//cout << apple.Get_count() << endl;
}