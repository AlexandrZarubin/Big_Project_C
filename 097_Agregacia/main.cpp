#include<iostream>
using namespace std;
/*
	Агрегация и композиция
*/
//агригация
class Cap
{
	string color = "Red";
public:
	string GetColor()
	{
		return color;
	}
};
class Model
{
	Cap cap;
public:
	void InspectModel()
	{
		cout << "Кепка " << cap.GetColor() << " цвет. " << endl;
	}
};
//композиция
class Human
{
	class Brain
	{
	public:
		void Think()
		{
			cout << "Я думаю! " << endl;
		}
	};
	Brain brain;
	Cap cap;
public:
	void Think()
	{
		brain.Think();
	}
	void InspectTheCap()
	{
		cout << "Моя кепка " << cap.GetColor() << " wвета. " << endl;
	}
};
void main()
{
	setlocale(LC_ALL, "rus");
	Human human;
	human.Think();
	human.InspectTheCap();

	Model model;
	model.InspectModel();
}