#include<iostream>
#include<string>
#include<fstream>
using namespace std;
/*
	обработка исключений
	throw
*/
void Foo(int value)
{
	if (value < 0)
	{
		//throw value;
		//throw "Число меньше 0! ";
		throw exception("Число меньше 0!");

	}
	cout << "Переменная = " << value << endl;
}
int main()
{

	setlocale(LC_ALL, "rus");

	try
	{
		Foo(-10);
	}
	catch (const exception& ex)
	{
		cout << "Мы поймали " << ex.what() << endl;
	}
	//string path = "myFile.txt";
	//ifstream fin;
	//fin.exceptions(ifstream::badbit | ifstream::failbit);

	///*
	//* fin.open(path);
	//if (!fin.is_open())
	//{
	//	cout << "Ошибка открытия фаила!" << endl;
	//}
	//else
	//{
	//	cout << "файл открыт!" << endl;
	//}*/
	//try
	//{
	//	cout << "Попытка открытия фаила!" << endl;

	//	fin.open(path);

	//	cout << "фаил успешно открыт!" << endl;
	//}
	////catch (const std::exception&ex)
	//catch (const ifstream::failure& ex)
	//{
	//	cout << ex.what() << endl;
	//	cout << ex.code() << endl;
	//	cout << "Ошибка открытия фаЙла! " << endl;
	//}
	//fin.close();
	return 0;
}