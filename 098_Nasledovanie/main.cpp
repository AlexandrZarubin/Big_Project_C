#include<iostream>
using namespace std;
/*
	Наследование
*/
class Human
{
	string name;
public:
	string GetName()
	{
		return name;
	}
	void setName(string name)
	{
		this->name = name;
	}
};

class Student :public Human
{
public:

	string group;
	void learn()
	{
		cout << "Я учусь!" << endl;
	}
};

class Professor :public Human
{
public:

	string subject;
};
class ExtramuralStudent :public Student
{
public:
	void learn()
	{
		cout << "Я бываю в университете реже обычного студента!" << endl;
	}
};
void main()
{
	setlocale(LC_ALL, "rus");

	Student st;
	st.learn();
	st.setName("аристах");
	cout << st.GetName() << endl;
	Human hu;
	ExtramuralStudent ex;
	ex.learn();
	Professor pr;


}