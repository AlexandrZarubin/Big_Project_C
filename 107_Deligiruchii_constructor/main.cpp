#include<iostream>
#include<string>
using namespace std;
/*
	Делигирующий конструктор
*/
class Human
{
public:
	string Name;
	int Age;
	int Weight;
	Human(string Name)
	{
		this->Name = Name;

		this->Age = 0;
		this->Weight = 0;
	}
	Human(string Name, int Age) :Human(Name)
	{
		this->Age = Age;
	}
	Human(string Name, int Age, int Weight) :Human(Name, Age)
	{
		this->Weight = Weight;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	Human h("aristrah", 30, 70);


	return 0;
}