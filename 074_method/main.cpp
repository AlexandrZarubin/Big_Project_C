#include<iostream>
using namespace std;
/*
		метод класса
		функция класса
*/
class Human
{
public:
	int age;
	int weight;
	string name;

	void Print()
	{
		cout << "Имя:\t" << name << "\nВес:\t" << weight << "\nВозраст: " << age << endl;
	}
};
class Point
{
public:
	int x;
	int y;
	int z;

};

int main()
{
	setlocale(LC_ALL, "rus");
	Human firstHuman;
	firstHuman.age = 30;
	firstHuman.name = "ivanov ivan";
	firstHuman.weight = 100;

	firstHuman.Print();
	Human secondHuman;
	secondHuman.age = 19;
	secondHuman.name = "Noname";
	secondHuman.weight = 60;

	secondHuman.Print();

	return 0;
}