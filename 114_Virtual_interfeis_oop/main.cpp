#include<iostream>
#include<string>
using namespace std;

/*
	ромбовидное наследоване
	виртуальное наследование
*/
class Component
{
public:
	Component(string companyName)
	{
		cout << "Конструторк Component " << endl;
		this->companyName = companyName;
	}
	string companyName;
};

class GPU :public Component
{
public:
	GPU(string companyName) :Component(companyName)
	{
		cout << "Конструтор GPU " << endl;
	}
};
class Memory :public Component
{
public:
	Memory(string companyName) :Component(companyName)
	{
		cout << "Конструтор Memory " << endl;
	}
};
class GraphicCard :public GPU, public Memory
{
public:
	GraphicCard(string GPUCompanyName, string MemoryCompanyName) :GPU(GPUCompanyName), Memory(MemoryCompanyName)
	{
		cout << "Конструтор GraphicCard " << endl;
	}
};

////////////////////////////////////
class Character
{
public:
	Character()
	{
		cout << "Конструктор Character " << endl;
	}
	int hp;

};
class Orc :public virtual Character
{
public:
	Orc()
	{
		cout << "конструтор Orc " << endl;
	}
};
class Warrior :public virtual Character
{
public:
	Warrior()
	{
		cout << "Конструтор Warrior " << endl;
	}
};
class OrcWarrior :public  Orc, public Warrior
{
public:
	OrcWarrior()
	{
		cout << "Конструтор OrcWarrior " << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	//GraphicCard gc("AMD", "Samsung");
	//OrcWarrior orc;
	Warrior war;
}