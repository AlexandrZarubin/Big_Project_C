#include<iostream>
#include<string>
using namespace std;

/*
	дружественный метод класса
*/
class Human;
class Apple;
class Human
{
public:
	void TakeApple(Apple& apple);

	void EatApple(Apple& apple)
	{

	}
};
class Apple
{
public:
	Apple(int weight, string color)
	{
		this->color = color;
		this->wieght = weight;
	}
private:
	int wieght;
	string color;
	friend void Human::TakeApple(Apple& apple);
};

int main(int argc, char* argv[])
{
	Apple apple(150, "red");
	Human human;
	human.TakeApple(apple);
	return 0;
}

void Human::TakeApple(Apple& apple)
{
	cout << "TakeApple" << "weight = " << apple.wieght << " color = " << apple.color << endl;
}
