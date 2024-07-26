#include<iostream>
#include<string>
using namespace std;

/*
	Что такое класс
	Что такое объект класс
*/

/*
	класс это тип данных на основе примитивных типов данных
*/

class Human
{
public:
	int age;
	int weight;
	string name;

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
	Human firstHuman;
	firstHuman.age = 30;
	firstHuman.name = "Ivanov Ivan Ivanovich";
	firstHuman.weight = 100;
	cout << firstHuman.age << endl;
	cout << firstHuman.name << endl;
	cout << firstHuman.weight << endl;
	cout << "=====================================" << endl;
	Human secondHuman;
	secondHuman.age = 19;
	secondHuman.name = "Noname";
	secondHuman.weight = 60;
	cout << secondHuman.age << endl;
	cout << secondHuman.name << endl;
	cout << secondHuman.weight << endl;
	cout << "=======================================" << endl;

	Point a;
	a.x = 1;
	a.y = 3;
	a.z = 4;
	return 0;
}