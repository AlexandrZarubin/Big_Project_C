#include<iostream>
#include<string>
#include<fstream>
using namespace std;

/*
	создание собственных исключений
*/
class MyException :public exception
{
	int dataState;
public:
	MyException(const char* msg, int dataState) :exception(msg)
	{
		this->dataState = dataState;
	}
	int GetDataState()const { return dataState; }
};
void Foo(int value)
{
	if (value < 0)
	{
		throw exception("Число меньше 0!");
	}
	if (value == 1)
	{
		throw MyException("число равно 1!!!", value);
	}
	cout << "Переменная = " << value << endl;
}
int main()
{

	setlocale(LC_ALL, "rus");

	try
	{
		Foo(-1);
	}
	catch (const MyException& ex)
	{
		cout << "Мы поймали " << ex.what() << endl;
		cout << "Состояние данных " << ex.GetDataState() << endl;
	}
	catch (const exception& ex)
	{
		cout << "Мы поймали " << ex.what() << endl;
		//cout << "Состояние данных " << ex.GetDataState() << endl;
	}


	return 0;
}
