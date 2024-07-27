#include<iostream>
#include<string>
using namespace std;

/*
	Специализация шаблонов класса
*/
template<typename T>
class Printer
{
public:
	void Print(T value)
	{
		cout << value << endl;
	}
};
template<>
class Printer<string>
{
public:
	void Print(string value)
	{

		cout << "__" << value << "__" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");

	Printer <string>p;
	p.Print("Hello world!!!");
	Printer <int>i;
	i.Print(555);
	return 0;
}