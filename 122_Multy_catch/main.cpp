#include<iostream>
#include<string>
#include<fstream>
using namespace std;

/*
	несколько блоков catch
*/

void Foo(int value)
{
	if (value < 0)
	{

		//throw exception("Число меньше 0!");
		throw "Число меньше 0!";

	}
	if (value == 0)
	{
		throw exception("Число равно 0!!!");
	}
	if (value == 1)
	{
		throw 1;
	}
	cout << "Переменная = " << value << endl;
}
int main()
{

	setlocale(LC_ALL, "rus");

	try
	{
		Foo(1);
	}
	catch (const exception& ex)
	{
		cout << "Блок 1 Мы поймали " << ex.what() << endl;
	}
	catch (const char* ex)
	{
		cout << "Блок 2 Мы поймали " << ex << endl;
	}
	catch (...)
	{
		cout << "Блок 3 Что то пошло не так " << endl;
	}

	return 0;
}
